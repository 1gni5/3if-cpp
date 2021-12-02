/*************************************************************************
                           Catalogue - Description
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

//---- Interface de la classe <Catalogue> (fichier Catalogue.h) ----------
#if !defined(CATALOGUE_H)
#define CATALOGUE_H

//--------------------------------------------------- Interfaces utilisées
#include "ListeChainee.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Catalogue>
//
//
//------------------------------------------------------------------------

class Catalogue
{
  //----------------------------------------------------------------- PUBLIC

public:
  //----------------------------------------------------- Méthodes publiques
  // type Méthode ( liste des paramètres );
  // Mode d'emploi :
  //
  // Contrat :
  //
  void Afficher( void ) const;
  // ListeChainee Rechercher(const char* VilleDepart, const char* VilleArrivee) const;
  void Ajouter ( Trajet* );

  //-------------------------------------------- Constructeurs - destructeur
  Catalogue( void );
  // Mode d'emploi :
  //
  // Contrat :
  //

  virtual ~Catalogue( void );
  // Mode d'emploi :
  //
  // Contrat :
  //

  //------------------------------------------------------------------ PRIVE

protected:
  //----------------------------------------------------- Méthodes protégées

  //----------------------------------------------------- Attributs protégés
  ListeChainee listeTrajets;
};

//-------------------------------- Autres définitions dépendantes de <Catalogue>

#endif // CATALOGUE_H
