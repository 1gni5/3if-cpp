/*************************************************************************
                           TestTrajetCompose  -  Classe de test
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

// Réalisation de la classe <TestTrajetCompose> (fichier TestTrajetCompose.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TestTrajetCompose.h"
#include "TrajetSimple.h"
#include "Cellule.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TestTrajetCompose::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void TestTrajetCompose::RunAllUnitTest ( void ) {
    #ifdef MAP
    cout << "--- Running all unittests for TrajetCompose ---" << endl;
    #endif

    TestTrajetCompose::TestConstructeur ( );
}


void TestTrajetCompose::TestConstructeur ( void ) {
    #ifdef MAP
    cout << "--- TestConstructeur ---" << endl;
    #endif

    TrajetCompose trajetCompose;
}

//-------------------------------------------- Constructeurs - destructeur

TestTrajetCompose::TestTrajetCompose ( )
{
    #ifdef MAP
    cout << "Appel au constructeur de <TestTrajetCompose>" << endl;
    #endif
} //----- Fin de TestTrajetCompose


TestTrajetCompose::~TestTrajetCompose ( )
{
    #ifdef MAP
    cout << "Appel au destructeur de <TestTrajetCompose>" << endl;
    #endif
} //----- Fin de ~TestTrajetCompose

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
