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

  int* sortedElements = trie();
  
  cout << "{";
  for (int index = 0; index < cardinaliteCourante; index++)
    cout << sortedElements[index] << ((index + 1 == cardinaliteCourante) ? "": ",");
  cout << "}" << ENDL;

  delete [] sortedElements;
} //---- Fin de Afficher

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
bool Ensemble::estInclus( int valeur )
{
  for (int index = 0; index < cardinaliteCourante; index++) {

    if (elements[index] == valeur)
      return true;
  }

  return false;
}

int* Ensemble::trie ( void ) {

  int* results = new int [cardinaliteCourante];
  for (int i = 0; i < cardinaliteCourante; i++)
    results[i] = elements[i];

  if (cardinaliteCourante < 2)
    return results;

  bool swapped;
  for (int i = 0; i < cardinaliteCourante - 1; i++) {
    swapped = false;
    
    for (int j = 0; j < cardinaliteCourante - (i + 1); j++) {
      
      if (results[j] > results[j+1]) {
	int tmp = results[j];
	results[j] = results[j+1];
	results[j+1] = tmp;
	swapped = true;
      }
    }
    
    if (!swapped)
      break;
  }

  return results;
}
