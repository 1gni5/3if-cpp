/************************************************************************
                           Cellule  -  description
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

//------------ Interface de la classe <Cellule> (fichier Cellule.h) ------------
#if ! defined NODE_H_
#define NODE_H_

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

    const Cellule* GetSuivante( void ) const;
    const Trajet* GetValeur( void ) const;
    void Afficher( void ) const;

//-------------------------------------------- Constructeurs - destructeur
    Cellule ( const Trajet*, const Cellule* );

    virtual ~Cellule ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    const Trajet *valeur;
    const Cellule *suivante;

};

//-------------------------------- Autres définitions dépendantes de <Cellule>

#endif // NODE_H_
