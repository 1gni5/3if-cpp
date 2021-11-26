/************************************************************************
                           Cellule  -  Composant ListeChainée
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

//------- Interface de la classe <Cellule> (fichier Cellule.h) ----------
#if ! defined CELLULE_H_
#define CELLULE_H_

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Cellule>
//
//
//------------------------------------------------------------------------

class Cellule
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    const Trajet* GetValeur ( void ) const;

//-------------------------------------------- Constructeurs - destructeur
    Cellule ( Trajet*, Cellule* );
    Cellule ( const Cellule& );
    virtual ~Cellule ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Trajet *valeur;
    Cellule *suivante;

    friend class ListeChainee;
};

//-------------------------------- Autres définitions dépendantes de <Cellule>

#endif // CELLULE_H_
