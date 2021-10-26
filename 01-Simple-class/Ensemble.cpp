/*************************************************************************
                           Ensemble  -  ensemble mathématiques
                             -------------------
    début                : 22-10-2021
    copyright            : (C) 2021 par Jules Ducange
    e-mail               : jules.ducange@insa-lyon.fr
*************************************************************************/

//----- Réalisation de la classe <Ensemble> (fichier Ensemble.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Ensemble.h"

//------------------------------------------------------------- Constantes
const string ENDL = "\r\n";

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void Ensemble::Afficher ( void ) {
  cout << cardinaliteCourante << ENDL;
  cout << cardinaliteMaximum << ENDL;

  // Les éléments sont affichés dans l'ordre
  int* sortedElements = trie();
  
  cout << "{";
  for (int index = 0; index < cardinaliteCourante; index++)
    cout << sortedElements[index] << ((index + 1 == cardinaliteCourante) ? "": ",");
  cout << "}" << ENDL;

  delete [] sortedElements;
} //---- Fin de Afficher


bool Ensemble::EstEgal ( const Ensemble & unEnsemble ) const {

  if (cardinaliteCourante != unEnsemble.cardinaliteCourante)
    return false;

  for (int i = 0; i < cardinaliteCourante; i++) {

    if (!estInclus(unEnsemble.elements[i]))
      return false;
  }

  return true;
} //---- Fin de EstEgal

crduEstInclus Ensemble::EstInclus ( const Ensemble & unEnsemble ) const {

  // 2 ensembles égaux sont inclus au sens large
  if (EstEgal(unEnsemble))
    return INCLUSION_LARGE;

  for (int i = 0; i < cardinaliteCourante; i++) {

    if (!unEnsemble.estInclus(elements[i]))
      return NON_INCLUSION;
  }

  return INCLUSION_STRICT;

}//---- Fin de EstInclus


crduAjouter Ensemble::Ajouter ( int aAjouter ) {

  if (estInclus(aAjouter))
    return DEJA_PRESENT;

  if (cardinaliteCourante == cardinaliteMaximum)
    return PLEIN;

  // Ajoute l'élément à la fin et met à jour la cardinalite
  elements[cardinaliteCourante++] = aAjouter;
  return AJOUTE;

}//----- Fin de Ajouter

unsigned int Ensemble::Ajuster ( int delta ) {

  // Rien ne change, économise du temps de calcul
  if (delta == 0)
    return cardinaliteMaximum;

  int* tmp = exportEnsemble();
  delete [] elements;

  // Maximum entre nouvelle cardinalite et cardinalite courante
  cardinaliteMaximum  = (cardinaliteMaximum + delta >= cardinaliteCourante) ?
    cardinaliteMaximum + delta : cardinaliteCourante;

  elements = new int [cardinaliteMaximum];
  for (int i = 0; i < cardinaliteCourante; i++)
    elements[i] = tmp[i];

  delete [] tmp;
  return cardinaliteMaximum;
}//----- Fin de Ajuster

bool Ensemble::Retirer ( int element ) {
  return retirer ( element, true );
}//----- Fin de Retirer

unsigned int Ensemble::Retirer ( const Ensemble & unEnsemble ) {

  // Le travaille sur une copie est nécessaire si ensemble appelé
  // et appelant sont le même objet.
  int* toDelete = unEnsemble.exportEnsemble();
  unsigned int length = unEnsemble.cardinaliteCourante;

  unsigned int nbElementRetires = 0;
  for (int i = 0; i < length; i++) {

    if (retirer ( toDelete[i], false ))
      ++nbElementRetires;
  }

  return nbElementRetires;
}//----- Fin de Retirer


int Ensemble::Reunir ( const Ensemble & unEnsemble ) {

  bool modified = false;
  int addedValues = 0;

  // Réunion nulle, évite le calcul inutile 
  if (EstInclus(unEnsemble))
    return addedValues;

  for (int i = 0; i < unEnsemble.cardinaliteCourante; i++) {

    // Ajoute l'élément avec ajustement si besoin
    crduAjouter insertResult; 
    while ((insertResult = Ajouter(unEnsemble.elements[i])) == PLEIN) {
      Ajuster( 1 );
      modified = true;
    }

    if (insertResult == AJOUTE)
      addedValues++;
  }

  // Si les cardinalités ont été modifiées, la valeur
  // de retour doit être négative.
  return (modified) ? -addedValues : addedValues;
}//----- Fin de Reunir


unsigned int Ensemble::Intersection ( const Ensemble & unEnsemble ) {

  Ensemble toDelete = Ensemble(cardinaliteMaximum);
  int deletedElements = 0;

  // Remplit un ensemble des valeurs à supprimer
  for (int i = 0; i < cardinaliteCourante; i++) {

    if (!unEnsemble.estInclus(elements[i]))
      toDelete.Ajouter(elements[i]);
  }

  deletedElements = Retirer(toDelete);
  Ajuster (cardinaliteCourante - cardinaliteMaximum);
  return deletedElements;
}//----- Fin de Intersection

//-------------------------------------------- Constructeurs - destructeur
//

Ensemble::Ensemble ( unsigned int cardMax )
  :cardinaliteCourante{0}, cardinaliteMaximum{cardMax},
   elements{new int[cardMax]}
{
#ifdef MAP
  cout << "Appel au constructeur de <Ensemble>" << endl;
#endif
} //----- Fin de Ensemble

Ensemble::Ensemble ( int tableauSource [ ], unsigned int nbElements )
  :cardinaliteCourante{0}, cardinaliteMaximum{nbElements},
   elements{new int[nbElements]}
{
  for (int index=0; index < nbElements; index++) {

    if (!estInclus(tableauSource[index]))
      elements[cardinaliteCourante++] = tableauSource[index];
  }
#ifdef MAP
  cout << "Appel au constructeur de <Ensemble>" << endl;
#endif
} //----- Fin de Ensemble


Ensemble::~Ensemble ( )
{
  delete [] elements;
#ifdef MAP
  cout << "Appel au destructeur de <Ensemble>" << endl;
#endif
} //----- Fin de ~Ensemble


//------------------------------------------------------------------ PRIVE
//----------------------------------------------------- Méthodes protégées
bool Ensemble::estInclus( int valeur ) const
{
  for (int index = 0; index < cardinaliteCourante; index++) {

    if (elements[index] == valeur)
      return true;
  }

  return false;
}

int* Ensemble::trie ( void ) const {

  // Travaille sur une copie
  int* results = exportEnsemble();

  // Un ensemble de moins de 2 éléments est forcément trié
  if (cardinaliteCourante < 2)
    return results;

  // Algorithme de trie à bulle classique
  bool swapped;
  for (int i = 0; i < cardinaliteCourante - 1; i++) {
    swapped = false;
    
    for (int j = 0; j < cardinaliteCourante - (i + 1); j++) {
      
      if (results[j] > results[j+1]) {
	swap(results[j], results[j+1]);
	swapped = true;
      }
    }
    
    // Si aucune modification n'a été faite
    // le tableau est trié, inutile de continuer.
    if (!swapped)
      break;
  }

  return results;
}

int* Ensemble::exportEnsemble ( void ) const {

  if (cardinaliteCourante < 1)
    return NULL;

  int* results = new int [cardinaliteCourante];
  for (int i = 0; i < cardinaliteCourante; i++)
    results[i] = elements[i];

  return results;
}

bool Ensemble::retirer ( int element, bool ajustement ) {

  bool elementDeleted = false;
  for (int i = 0; i < cardinaliteCourante; i++) {

    // Si l'élément est trouvé, inverse sa position avec
    // le dernier et réduis la cardinalité.
    if ((elements[i] == element)) {
      elementDeleted = true;
      cardinaliteCourante--;
      swap ( elements[i], elements[cardinaliteCourante] );
      break;
    }
  }

  // Permet la réutilisation de la méthode pour les opérations
  // sur valeurs et sur ensembles.
  if (ajustement)
    Ajuster ( cardinaliteCourante - cardinaliteMaximum );

  return elementDeleted;
}  

void swap ( int & a, int & b ) {
  int tmp = a;
  a = b;
  b = tmp;
}
