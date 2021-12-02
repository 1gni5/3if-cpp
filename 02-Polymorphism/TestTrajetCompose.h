/************************************************************************
                           TestTrajetCompose  -  Classe de test
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

// Interface de la classe <TestTrajetCompose> (fichier TestTrajetCompose.h)
#if !defined TESTTRAJETCOMPOSE_H_
#define TESTTRAJETCOMPOSE_H_

//--------------------------------------------------- Interfaces utilisées
#include "TrajetCompose.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TestTrajetCompose>
//
//
//------------------------------------------------------------------------

class TestTrajetCompose
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
    static void TestRetirerTrajet(void);
    static void TestAfficher(void);
    static void TestGetVilleDepart(void);
    static void TestGetVilleArrivee(void);

//-------------------------------------------- Constructeurs - destructeur
    TestTrajetCompose();

    virtual ~TestTrajetCompose();

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
};

//------------------- Autres définitions dépendantes de <TestTrajetCompose>

#endif // TESTTRAJETCOMPOSE_H_
