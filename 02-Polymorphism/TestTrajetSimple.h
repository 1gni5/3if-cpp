/************************************************************************
                           TestTrajetSimple  -  Classe de test
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

// Interface de la classe <TestTrajetSimple> (fichier TestTrajetSimple.h) 
#if ! defined TESTTRAJETSIMPLE_H_
#define TESTTRAJETSIMPLE_H_

//--------------------------------------------------- Interfaces utilisées
#include "TrajetSimple.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TestTrajetSimple>
//
//
//------------------------------------------------------------------------

class TestTrajetSimple
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
    static void TestGetVilleDepart ( void );
    static void TestGetVilleArrivee ( void );
    static void TestAfficher ( void );
//-------------------------------------------- Constructeurs - destructeur
    TestTrajetSimple ( );

    virtual ~TestTrajetSimple ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------- Autres définitions dépendantes de <TestTrajetSimple>

#endif // TESTTRAJETSIMPLE_H_
