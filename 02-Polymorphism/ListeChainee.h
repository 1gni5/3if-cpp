/************************************************************************
                           Liste Chaînée  -  Composant TrajetCompose
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

    void Ajouter ( Cellule* );
    void Retirer ( void );

    const Cellule* GetDebut ( void ) const;
    const Cellule* GetFin ( void ) const;
    void Afficher ( void ) const;

//-------------------------------------------- Constructeurs - destructeur
    ListeChainee ( void );

    virtual ~ListeChainee ( void );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
    bool compareAlphabetique ( const Trajet* t1, const Trajet* t2 ) const;
    
//----------------------------------------------------- Attributs protégés
    Cellule* debut;
    Cellule* fin;

};

//----------------------- Autres définitions dépendantes de <ListeChainee>

#endif // LISTECHAINEE_H_
