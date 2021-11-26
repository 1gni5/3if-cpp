/************************************************************************
                           TestCellule  -  Classe de test
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

// Interface de la classe <TestCellule> (fichier TestCellule.h) 
#if ! defined TESTCELLULE_H_
#define TESTCELLULE_H_

//--------------------------------------------------- Interfaces utilisées
#include "Cellule.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TestCellule>
//
//
//------------------------------------------------------------------------

class TestCellule
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    static void RunAllUnitTest ( void );

    static void TestConstructeur ( void );
    static void TestGetValeur ( void );

//-------------------------------------------- Constructeurs - destructeur
    TestCellule ( );

    virtual ~TestCellule ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------- Autres définitions dépendantes de <TestCellule>

#endif // TESTCELLULE_H_
