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
#include "TrajetSimple.h"
#include "Cellule.h"

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
    TestListeChainee::TestAjouter ( );
    TestListeChainee::TestRetirer ( );

    TestListeChainee::TestGetDebut ( );
    TestListeChainee::TestGetFin ( );
    TestListeChainee::TestAfficher ( );
}


void TestListeChainee::TestConstructeur ( void ) {
    #ifdef MAP
    cout << "--- TestConstructeur ---" << endl;
    #endif

    ListeChainee listeChainee;
}

void TestListeChainee::TestAjouter ( void ) {
    #ifdef MAP
    cout << "--- TestAjouter ---" << endl;
    #endif

    ListeChainee listeChainee;
    TrajetSimple* trajetSimple = new TrajetSimple("Paris", "Lyon", "TGV");
    Cellule* cellule = new Cellule(trajetSimple, NULL);

    listeChainee.Ajouter (cellule);
    listeChainee.Ajouter (cellule);
}

void TestListeChainee::TestRetirer ( void ) {
    #ifdef MAP
    cout << "--- TestRetirer ---" << endl;
    #endif

    ListeChainee listeChainee;
    TrajetSimple* trajetSimple = new TrajetSimple("Paris", "Lyon", "TGV");
    Cellule* cellule = new Cellule(trajetSimple, NULL);

    listeChainee.Ajouter (cellule);
    listeChainee.Retirer ( );
}
void TestListeChainee::TestGetDebut ( void ) {
    #ifdef MAP
    cout << "--- TestGetDebut ---" << endl;
    #endif

    ListeChainee listeChainee;
    TrajetSimple* trajetSimple = new TrajetSimple("Paris", "Lyon", "TGV");
    Cellule* cellule = new Cellule(trajetSimple, NULL);

    listeChainee.Ajouter (cellule);
    const Cellule* retour = listeChainee.GetDebut();
}

void TestListeChainee::TestGetFin ( void ) {
    #ifdef MAP
    cout << "--- TestGetFin ---" << endl;
    #endif

    ListeChainee listeChainee;
    TrajetSimple* trajetSimple = new TrajetSimple("Paris", "Lyon", "TGV");
    Cellule* cellule = new Cellule(trajetSimple, NULL);

    listeChainee.Ajouter (cellule);
    const Cellule* retour = listeChainee.GetFin();
}

void TestListeChainee::TestAfficher ( void ) {
    #ifdef MAP
    cout << "--- TestGetAfficher ---" << endl;
    #endif

    ListeChainee listeChainee;
    TrajetSimple* trajetSimple = new TrajetSimple("Paris", "Lyon", "TGV");
    Cellule* cellule = new Cellule(trajetSimple, NULL);

    listeChainee.Ajouter (cellule);
    listeChainee.Afficher ( );
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
