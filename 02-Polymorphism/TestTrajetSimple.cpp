/*************************************************************************
                           TestTrajetSimple  -  Classe de test
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

// Réalisation de la classe <TestTrajetSimple> (fichier TestTrajetSimple.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TestTrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TestTrajetSimple::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void TestTrajetSimple::RunAllUnitTest ( void ) {
    #ifdef MAP
    cout << "--- Running all unittests for TrajetSimple ---" << endl;
    #endif

    TestTrajetSimple::TestConstructeur ( );
    TestTrajetSimple::TestConstructeurCopie ( );
    TestTrajetSimple::TestGetVilleDepart ( );
    TestTrajetSimple::TestGetVilleArrivee ( );
    TestTrajetSimple::TestAfficher ( );
}


void TestTrajetSimple::TestConstructeur ( void ) {
    #ifdef MAP
    cout << "--- TestConstructeur ---" << endl;
    #endif

    TrajetSimple trajetSimple ("Paris", "Lyon", "TGV");
}

void TestTrajetSimple::TestConstructeurCopie ( void ) {
    #ifdef MAP
    cout << "--- TestConstructeurCopie ---" << endl;
    #endif

    TrajetSimple trajetSimple ("Paris", "Lyon", "TGV");
    TrajetSimple copieTrajet (trajetSimple);
}

void TestTrajetSimple::TestGetVilleDepart ( void ) {
    #ifdef MAP
    cout << "--- TestVilleDepart ---" << endl;
    #endif

    TrajetSimple trajetSimple ("Paris", "Lyon", "TGV");
    const char* villeDepart = trajetSimple.GetVilleDepart ( );
    cout << "Ville de départ: " << villeDepart << endl;
}

void TestTrajetSimple::TestGetVilleArrivee ( void ) {
    #ifdef MAP
    cout << "--- TestVilleArrivee ---" << endl;
    #endif

    TrajetSimple trajetSimple ("Paris", "Lyon", "TGV");
    const char* villeArrivee = trajetSimple.GetVilleArrivee ( );
    cout << "Ville de départ: " << villeArrivee << endl;
}

void TestTrajetSimple::TestAfficher ( void ) {
    #ifdef MAP
    cout << "--- TestAfficher ---" << endl;
    #endif

    TrajetSimple trajetSimple ("Paris", "Lyon", "TGV");
    trajetSimple.Afficher ( );
}

//-------------------------------------------- Constructeurs - destructeur

TestTrajetSimple::TestTrajetSimple ( )
{
    #ifdef MAP
    cout << "Appel au constructeur de <TestTrajetSimple>" << endl;
    #endif
} //----- Fin de TestTrajetSimple


TestTrajetSimple::~TestTrajetSimple ( )
{
    #ifdef MAP
    cout << "Appel au destructeur de <TestTrajetSimple>" << endl;
    #endif
} //----- Fin de ~TestTrajetSimple

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
