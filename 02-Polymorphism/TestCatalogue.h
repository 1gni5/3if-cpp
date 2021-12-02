/************************************************************************
                           TestCatalogue  -  Classe de test
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

// Interface de la classe <TestCatalogue> (fichier TestCatalogue.h)
#if !defined TESTCATALOGUE_H_
#define TESTCATALOGUE_H_

//--------------------------------------------------- Interfaces utilisées
#include "Catalogue.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TestCatalogue>
//
//
//------------------------------------------------------------------------

class TestCatalogue
{
//----------------------------------------------------------------- PUBLIC

public:
    //------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    static void RunAllUnitTest(void);

    static void TestConstructeur(void);
    static void TestAjouterTrajet(void);
    static void TestAfficher(void);

//-------------------------------------------- Constructeurs - destructeur
    TestCatalogue();

    virtual ~TestCatalogue();

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
};

//------------------- Autres définitions dépendantes de <TestCatalogue>

#endif // TESTCATALOGUE_H_
