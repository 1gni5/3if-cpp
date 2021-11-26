/*************************************************************************
                           TestCellule  -  Classe de test
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

// Réalisation de la classe <TestCellule> (fichier TestCellule.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TestCellule.h"
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TestCellule::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void TestCellule::RunAllUnitTest ( void ) {
    #ifdef MAP
    cout << "--- Running all unittests for Cellule---" << endl;
    #endif

    TestCellule::TestConstructeur ( );
    TestCellule::TestGetValeur ( );
}

void TestCellule::TestConstructeur ( void ) {
    #ifdef MAP
    cout << "--- TestConstructeur ---" << endl;
    #endif

    Trajet* trajet = new TrajetSimple("Lyon", "Paris", "TGV");
    Cellule cellule (trajet, NULL);
}

void TestCellule::TestGetValeur ( void ) {
    #ifdef MAP
    cout << "--- TestGetValeur ---" << endl;
    #endif

    Trajet* trajet = new TrajetSimple("Lyon", "Paris", "TGV");
    Cellule cellule (trajet, NULL);
    const Trajet* retour = cellule.GetValeur ( );
}

//-------------------------------------------- Constructeurs - destructeur

TestCellule::TestCellule ( )
{
    #ifdef MAP
    cout << "Appel au constructeur de <TestCellule>" << endl;
    #endif
} //----- Fin de TestCellule


TestCellule::~TestCellule ( )
{
    #ifdef MAP
    cout << "Appel au destructeur de <TestCellule>" << endl;
    #endif
} //----- Fin de ~TestCellule

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
