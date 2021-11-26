/************************************************************************
                           TestListeChainee  -  Classe de test
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

// Interface de la classe <TestListeChainee> (fichier TestListeChainee.h)
#if !defined TESTLISTECHAINEE_H_
#define TESTLISTECHAINEE_H_

//--------------------------------------------------- Interfaces utilisées
#include "ListeChainee.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TestListeChainee>
//
//
//------------------------------------------------------------------------

class TestListeChainee
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
    static void TestAjouter(void);
    static void TestRetirer(void);
//-------------------------------------------- Constructeurs - destructeur
    TestListeChainee();

    virtual ~TestListeChainee();

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
};

//------------------- Autres définitions dépendantes de <TestListeChainee>

#endif // TESTLISTECHAINEE_H_
