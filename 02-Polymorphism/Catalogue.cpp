/*************************************************************************
                           Catalogue - Description
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la classe <Catalogue> (fichier Catalogue.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Catalogue.h"
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Catalogue::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Catalogue::Afficher (void) const {
  cout << "----- Début du catalogue -----" << endl;
  listeTrajets.Afficher();
  cout << "----- Fin du catalogue -------" << endl << endl;
}

// ListeChainee Catalogue::Rechercher(const char* VilleDepart, const char* VilleArrivee)
// {
//   ListeChainee trajetsRecherches;
//   const Cellule* celluleDeParcours = listeTrajets.GetDebut();
//   while(celluleDeParcours != NULL)
//   {
//     if(strcmp(celluleDeParcours->GetValeur()->GetVilleDepart(), VilleDepart) == 0 && strcmp(celluleDeParcours->GetValeur()->GetVilleArrivee(), VilleArrivee) == 0)
//     {
//       // probleme de const à corriger
//       trajetsRecherches.AjouterFin(celluleDeParcours);
//     }
//     celluleDeParcours = celluleDeParcours->GetSuivante();
//   }
//   return trajetsRecherches;
// }

void Catalogue::Rechercher ( const char* VilleDepart, const char* VilleArrivee) const {

  bool trajetTrouve = false;
  const Cellule* celluleCourante = listeTrajets.GetDebut();

  cout << "Résultats de votre recherche : " << endl;
  while ( celluleCourante != NULL ) {

    const Trajet* trajetCourant = celluleCourante->GetValeur();
    cout << "Recherche: " << VilleDepart << " | " << trajetCourant->GetVilleDepart() << endl;
    cout << "Recherche: " << VilleArrivee << " | " << trajetCourant->GetVilleArrivee() << endl;
    if (strcmp(VilleDepart, trajetCourant->GetVilleDepart()) == 0 && strcmp(VilleArrivee, trajetCourant->GetVilleArrivee()) == 0) {
      trajetTrouve = true;
      trajetCourant->Afficher();
    }

    celluleCourante = celluleCourante->GetSuivante();
  }

  if (trajetTrouve == false)
    cout << "Aucun trajet ne correspond à votre recherche." << endl;
}


void Catalogue::Ajouter( Trajet* trajet) {
  listeTrajets.Ajouter(new Cellule(trajet, NULL));
  // TODO: Faire une insertion triée
}

//-------------------------------------------- Constructeurs - destructeur

Catalogue::Catalogue ( void )
// Algorithme :
//
{
  #ifdef MAP
  cout << "Appel au constructeur de <Catalogue>" << endl;
  #endif

  ListeChainee listeTrajets;    
} //----- Fin de Catalogue


Catalogue::~Catalogue ( )
// Algorithme :
//
{
  #ifdef MAP
  cout << "Appel au destructeur de <Catalogue>" << endl;
  #endif
} //----- Fin de ~Catalogue


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

