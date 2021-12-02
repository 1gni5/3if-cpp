/*************************************************************************
                           TestCatalogue  -  Classe de test
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

// Réalisation de la classe <TestCatalogue> (fichier TestCatalogue.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TestCatalogue.h"
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include "Cellule.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TestCatalogue::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void TestCatalogue::RunAllUnitTest ( void ) {
    #ifdef MAP
    cout << "--- Running all unittests for Catalogue ---" << endl;
    #endif

    TestCatalogue::TestConstructeur ( );
    TestCatalogue::TestAjouterTrajet ( );
    TestCatalogue::TestAfficher ( );
}


void TestCatalogue::TestConstructeur ( void ) {
    #ifdef MAP
    cout << "--- TestConstructeur ---" << endl;
    #endif

    Catalogue catalogue;
}

void TestCatalogue::TestAjouterTrajet ( void ) {
    #ifdef MAP
    cout << "--- TestAjouterTrajet ---" << endl;
    #endif

    TrajetSimple* trajetSimple = new TrajetSimple("Le Havre", "Lisbonne", "Chaise roulante");
    TrajetCompose* trajetCompose = new TrajetCompose();
    trajetCompose->AjouterTrajet(new TrajetSimple("Whaou", "St Étienne", "Ski"));
    trajetCompose->AjouterTrajet(new TrajetSimple("St Étiemne", "Stockholmes", "Rollers"));

    Catalogue catalogue;
    catalogue.Ajouter(trajetSimple);
    catalogue.Ajouter(trajetCompose);
}

void TestCatalogue::TestAfficher ( void ) {
    #ifdef MAP
    cout << "--- TestAfficher ---" << endl;
    #endif

    TrajetSimple* trajetSimple = new TrajetSimple("Le Havre", "Lisbonne", "Chaise roulante");
    TrajetCompose* trajetCompose = new TrajetCompose();
    trajetCompose->AjouterTrajet(new TrajetSimple("Whaou", "St Étienne", "Ski"));
    trajetCompose->AjouterTrajet(new TrajetSimple("St Étiemne", "Stockholmes", "Rollers"));

    Catalogue catalogue;
    catalogue.Ajouter(trajetSimple);
    catalogue.Ajouter(trajetCompose);
    catalogue.Afficher();
}

//-------------------------------------------- Constructeurs - destructeur

TestCatalogue::TestCatalogue ( )
{
    #ifdef MAP
    cout << "Appel au constructeur de <TestCatalogue>" << endl;
    #endif
} //----- Fin de TestCatalogue


TestCatalogue::~TestCatalogue ( )
{
    #ifdef MAP
    cout << "Appel au destructeur de <TestCatalogue>" << endl;
    #endif
} //----- Fin de ~TestCatalogue

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
