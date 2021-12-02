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
    TestTrajetCompose::TestAjouterTrajet ( );
    TestTrajetCompose::TestRetirerTrajet ( );
    TestTrajetCompose::TestAfficher ( );
    TestTrajetCompose::TestGetVilleDepart ( );
    TestTrajetCompose::TestGetVilleArrivee ( );
}


void TestTrajetCompose::TestConstructeur ( void ) {
    #ifdef MAP
    cout << "--- TestConstructeur ---" << endl;
    #endif

    TrajetCompose trajetCompose;
}

void TestTrajetCompose::TestAjouterTrajet ( void ) {
    #ifdef MAP
    cout << "--- TestAjouterTrajet ---" << endl;
    #endif

    TrajetCompose trajetCompose;
    TrajetSimple* trajetSimple = new TrajetSimple("Paris", "Lyon", "TGV");

    trajetCompose.AjouterTrajet(trajetSimple);
    trajetCompose.AjouterTrajet(new TrajetSimple("Lyon", "Toulouse", "Trotinette"));
}

void TestTrajetCompose::TestRetirerTrajet ( void ) {
    #ifdef MAP
    cout << "--- TestRetirerTrajet ---" << endl;
    #endif

    TrajetCompose trajetCompose;
    TrajetSimple* trajetSimple = new TrajetSimple("Paris", "Lyon", "TGV");

    trajetCompose.AjouterTrajet(trajetSimple);
    trajetCompose.AjouterTrajet(new TrajetSimple("Lyon", "Toulouse", "Trotinette"));
    trajetCompose.RetirerTrajet();
}

void TestTrajetCompose::TestAfficher ( void ) {
    #ifdef MAP
    cout << "--- TestAfficher ---" << endl;
    #endif

    TrajetCompose trajetCompose;
    TrajetSimple* trajetSimple = new TrajetSimple("Paris", "Lyon", "TGV");
    trajetCompose.AjouterTrajet(trajetSimple);
    trajetCompose.AjouterTrajet(new TrajetSimple("Lyon", "Toulouse", "Trotinette"));

    trajetCompose.Afficher();
}

void TestTrajetCompose::TestGetVilleDepart ( void ) {
    #ifdef MAP
    cout << "--- TestGetVilleDepart ---" << endl;
    #endif

    TrajetCompose trajetCompose;
    trajetCompose.AjouterTrajet(new TrajetSimple("Fes", "Marrakech", "Chameau"));
    trajetCompose.AjouterTrajet(new TrajetSimple("Marrakech", "Bruxelles", "Soucoupe-volante"));
    cout << "Ville de départ : " << trajetCompose.GetVilleDepart() << endl;
}

void TestTrajetCompose::TestGetVilleArrivee( void ) {
    #ifdef MAP
    cout << "--- TestGetVilleArrivee ---" << endl;
    #endif

    TrajetCompose trajetCompose;
    trajetCompose.AjouterTrajet(new TrajetSimple("Fes", "Marrakech", "Chameau"));
    trajetCompose.AjouterTrajet(new TrajetSimple("Marrakech", "Bruxelles", "Soucoupe-volante"));
    cout << "Ville d'arrivée : " << trajetCompose.GetVilleArrivee() << endl;
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
