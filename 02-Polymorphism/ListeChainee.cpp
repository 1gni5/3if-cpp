/*************************************************************************
                           ListeChainee  -  description
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

//-- Réalisation de la classe <ListeChainee> (fichier ListeChainee.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Trajet.h"
#include "ListeChainee.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ListeChainee::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


void ListeChainee::AjouterFin ( Cellule* nouvelleCellule)
{
    /* Liste vide */
    if (debut == NULL) {
        fin = debut = nouvelleCellule;
        return;
    }

    /* Ajoute la cellule en fin de liste */
    fin->SetSuivante ( nouvelleCellule );
    nouvelleCellule->SetSuivante ( NULL );
    fin = nouvelleCellule;
} //----- Fin de Ajouter

Cellule* ListeChainee::RetirerFin ( void )
{
    /* Liste vide */
    if (debut == NULL) return NULL;

    Cellule* resultat = fin;
    Cellule* nouvelleCelluleDeFin = debut;

    while (nouvelleCelluleDeFin->GetSuivante() != NULL)
        nouvelleCelluleDeFin = nouvelleCelluleDeFin->GetSuivante(); 

    nouvelleCelluleDeFin->SetSuivante ( NULL );
    fin = nouvelleCelluleDeFin;

    return resultat;
} //----- Fin de Retirer


const Cellule* ListeChainee::GetFin ( void ) const{
    return fin;
}
const Cellule* ListeChainee::GetDebut ( void ) const{
    return debut;
}

//-------------------------------------------- Constructeurs - destructeur

ListeChainee::ListeChainee ( void )
    : debut (NULL), fin (NULL)
{
#ifdef MAP
    cout << "Appel au constructeur de <ListeChainee>" << endl;
#endif
} //----- Fin de ListeChainee


ListeChainee::~ListeChainee ( void )
{

    Cellule* celluleDeParcours = debut;
    while ( celluleDeParcours != NULL) {
        Cellule* aSupprimer = celluleDeParcours;
        celluleDeParcours = celluleDeParcours->GetSuivante();
        delete aSupprimer;
    }
    
#ifdef MAP
    cout << "Appel au destructeur de <ListeChainee>" << endl;
#endif
} //----- Fin de ~ListeChainee

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
