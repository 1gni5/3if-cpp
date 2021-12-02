/*************************************************************************
                           TrajetCompose  -  description
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

//- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) -

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetCompose::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

const char* TrajetCompose::GetVilleDepart( void ) const {
    return listeTrajets.GetDebut()->GetValeur()->GetVilleDepart();
}

const char* TrajetCompose::GetVilleArrivee( void ) const {
    return listeTrajets.GetFin()->GetValeur()->GetVilleArrivee();
}

void TrajetCompose::Afficher( void ) const {
    cout << "Trajet composé : " << endl;
    listeTrajets.Afficher ( );
    cout << endl;
}

void TrajetCompose::AjouterTrajet ( Trajet* nouveauTrajet) {
    listeTrajets.Ajouter( new Cellule(nouveauTrajet, NULL));
}

void TrajetCompose::RetirerTrajet ( void ) {
    listeTrajets.Retirer(); 
}
//-------------------------------------------- Constructeurs - destructeur

TrajetCompose::TrajetCompose ( void )
{
    #ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
    #endif
} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose ( )
{
    #ifdef MAP
    cout << "Appel au destructeur de <TrajetCompose>" << endl;
    #endif
} //----- Fin de ~TrajetCompose

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
