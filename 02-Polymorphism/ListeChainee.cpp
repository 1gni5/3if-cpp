/************************************************************************
                           Liste Chaînée  -  Composant TrajetCompose
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

void ListeChainee::Ajouter ( Cellule* nouvelleCellule)
{
    nouvelleCellule->suivante = NULL;

    /* Liste vide */
    if (debut == NULL) {
        fin = debut = nouvelleCellule;
        return;
    }

    /* Ajoute la cellule en fin de liste */
    fin->suivante = nouvelleCellule ;
    fin = nouvelleCellule;
} //----- Fin de Ajouter

void ListeChainee::Retirer ( void )
{
    /* Liste vide */
    if (debut == NULL || fin == NULL) return;

    Cellule* precedente = NULL;
    Cellule* courante = debut;

    while (courante->suivante != NULL) {
        precedente = courante;
        courante = courante->suivante;
    }
    
    /* Suppression de la tête de liste */
    if (precedente != NULL)
        precedente->suivante = NULL;

    if (debut == fin)
        debut = NULL;

    delete fin;
    fin = precedente;
} //----- Fin de Retirer

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
    #ifdef MAP
    cout << "Appel au destructeur de <ListeChainee>" << endl;
    #endif

    Cellule* precedente = NULL;
    Cellule* courante = debut;

    while (courante != NULL) {
        precedente = courante;
        courante = courante->suivante;
        delete precedente;
    }

} //----- Fin de ~ListeChainee

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
