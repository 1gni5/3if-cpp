/*************************************************************************
                           TrajetCompose  -  description
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
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

    const Cellule* celluleCourante = listeTrajets.GetDebut();
    while (celluleCourante != NULL) {
        celluleCourante->Afficher ( );
        celluleCourante = celluleCourante->GetSuivante();
    }
}

void TrajetCompose::AjouterTrajetFin ( Trajet* nouveauTrajet) {
    listeTrajets.AjouterFin( new Cellule(nouveauTrajet, NULL));
}

const Trajet* TrajetCompose::RetirerTrajetFin ( void ) {

    const Cellule* celluleASupprimer = listeTrajets.RetirerFin(); 
    const Trajet* resultat = celluleASupprimer->GetValeur();

    delete celluleASupprimer;
    return resultat;
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
