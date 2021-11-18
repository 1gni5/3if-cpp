//---------- Réalisation du module <TestTrajet> (fichier TestTrajet.cpp)

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;
//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"

///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//---------------------------------------------------- Variables statiques

//------------------------------------------------------ Fonctions privées
//static type nom ( liste de paramètres )
// Mode d'emploi :
//
// Contrat :
//
// Algorithme :
//
//{
//} //----- fin de nom

static void TestTrajetSimpleConstructor( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
} //----- fin de TestTrajetSimpleConstructor


static void TestTrajetSimpleGetVilleDepart( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  cout << "Ville de départ : " << trajetSimple.GetVilleDepart() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestTrajetSimpleGetVilleArrivee( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  cout << "Ville d'arrivée : " << trajetSimple.GetVilleArrivee() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ( )
{
  TestTrajetSimpleConstructor();
  TestTrajetSimpleGetVilleDepart();
  TestTrajetSimpleGetVilleArrivee();
  return 0;
}
