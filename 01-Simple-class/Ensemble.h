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
enum crduEstInclus { NON_INCLUSION, INCLUSION_LARGE, INCLUSION_STRICT };

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

  void Afficher ( void );
  // Affiche la cardinalité courante, la cardinalité maximum et les 
  // éléments de l'ensemble.

  bool EstEgal ( const Ensemble & unEnsemble ) const;
  // Test l'égalité entre 2 ensembles. Les 2 ensembles sont égaux
  // si et seulement si leurs `cardinaliteCourante` sont égales.
  // Et que les éléments de l'un soit strictement inclus dans les
  // les éléments de l'autre.

  crduEstInclus EstInclus ( const Ensemble & unEnsemble ) const;
  // Test l'inclusion entre 2 ensemble.

//-------------------------------------------- Constructeurs - destructeur
  Ensemble ( unsigned int cardMax = CARDINALITE_MAX);
  
  Ensemble ( int*, unsigned int );

  virtual ~Ensemble ( );
  
  //------------------------------------------------------------------ PRIVE
  
protected:
  //----------------------------------------------------- Méthodes protégées
  bool estInclus( int ) const;
  // Retourne VRAI si la valeur est inclus dans `elements`
  // retourne FAUX sinon.

  int* trie() const;
  // Retourne l'ensemble trié.
  
  //----------------------------------------------------- Attributs protégés
  unsigned int cardinaliteCourante;
  unsigned int cardinaliteMaximum;
  int *elements;
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // ENSEMBLE_H

