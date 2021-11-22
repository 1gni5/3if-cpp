/************************************************************************
                           Liste Chaînée  -  description
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

//---- Interface de la classe <ListeChainee> (fichier ListeChainee.h) ----
#if ! defined LISTECHAINEE_H_
#define LISTECHAINEE_H_

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
#include "Cellule.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ListeChainee>
//
//
//------------------------------------------------------------------------

class ListeChainee
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void AjouterFin ( Cellule* nouvelleCellule);
    Cellule* RetirerFin ( void );

    const Cellule* GetFin ( void ) const;
    const Cellule* GetDebut ( void ) const;

//-------------------------------------------- Constructeurs - destructeur
    ListeChainee ( void );

    virtual ~ListeChainee ( void );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Cellule* debut;
    Cellule* fin;
};

//-------------------------------- Autres définitions dépendantes de <ListeChainee>

#endif // LISTECHAINEE_H_
