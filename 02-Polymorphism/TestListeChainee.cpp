/*************************************************************************
                           TestListeChainee  -  Classe de test
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

// Réalisation de la classe <TestListeChainee> (fichier TestListeChainee.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TestListeChainee.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TestListeChainee::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void TestListeChainee::RunAllUnitTest ( void ) {
    #ifdef MAP
    cout << "--- Running all unittests for ListeChainee ---" << endl;
    #endif

    TestListeChainee::TestConstructeur ( );
}


void TestListeChainee::TestConstructeur ( void ) {
    #ifdef MAP
    cout << "--- TestConstructeur ---" << endl;
    #endif

    ListeChainee listeChainee;
}

//-------------------------------------------- Constructeurs - destructeur

TestListeChainee::TestListeChainee ( )
{
    #ifdef MAP
    cout << "Appel au constructeur de <TestListeChainee>" << endl;
    #endif
} //----- Fin de TestListeChainee


TestListeChainee::~TestListeChainee ( )
{
    #ifdef MAP
    cout << "Appel au destructeur de <TestListeChainee>" << endl;
    #endif
} //----- Fin de ~TestListeChainee

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
