/*************************************************************************
                           Ensemble  -  ensemble mathématiques
                             -------------------
    début                : 22-10-2021
    copyright            : (C) 2021 par Jules Ducange
    e-mail               : jules.ducange@insa-lyon.fr
*************************************************************************/

//----- Interface de la classe <Ensemble> (fichier Ensemble.h) -----------
#if ! defined ( ENSEMBLE_H )
#define ENSEMBLE_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes
const unsigned int CARDINALITE_MAX = 5;

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Ensemble>
// Représentation d'un ensemble mathématiques.
//
//------------------------------------------------------------------------

class Ensemble
{
  //----------------------------------------------------------------- PUBLIC
  
public:
  //----------------------------------------------------- Méthodes publiques

  void Afficher ( void ) const;
  // Affiche la cardinalité courante, la cardinalité maximum et les 
  // éléments de l'ensemble.


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
  Ensemble ( unsigned int cardMax = CARDINALITE_MAX);
  
  Ensemble ( int*, unsigned int );

  virtual ~Ensemble ( );
  
  //------------------------------------------------------------------ PRIVE
  
protected:
  //----------------------------------------------------- Méthodes protégées
  
  //----------------------------------------------------- Attributs protégés
  unsigned int cardinaliteCourante;
  unsigned int cardinaliteMaximum;
  int *elements;
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // ENSEMBLE_H

