//---------- Réalisation du module <TestTrajet> (fichier TestTrajet.cpp)

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;
//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include "Cellule.h"
#include "ListeChainee.h"
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
  #ifdef MAP
    cout << "Appel à la méthode TestTrajetSimpleConstructor()" << endl;
  #endif
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
} //----- fin de TestTrajetSimpleConstructor


static void TestTrajetSimpleGetVilleDepart( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  #ifdef MAP
    cout << "Appel à la méthode TestTrajetSimpleGetVilleDepart()" << endl;
  #endif
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  cout << "Ville de départ : " << trajetSimple.GetVilleDepart() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestTrajetSimpleGetVilleArrivee( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  #ifdef MAP
    cout << "Appel à la méthode TestTrajetSimpleGetVilleDepart()" << endl;
  #endif
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  cout << "Ville d'arrivée : " << trajetSimple.GetVilleArrivee() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart


static void TestTrajetSimpleAfficher( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  cout << "Trajet "; trajetSimple.Afficher();
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestCelluleConstructeur( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  TrajetSimple *pointeurTrajetSimple = &trajetSimple;
  Cellule cellule = Cellule( pointeurTrajetSimple, NULL );
} //----- fin de TestTrajetSimpleGetVilleDepart


static void TestCelluleGetValeur( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  TrajetSimple *pointeurTrajetSimple = &trajetSimple;
  Cellule cellule = Cellule( pointeurTrajetSimple, NULL );
  cout << "Valeur de la cellule " << cellule.GetValeur() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestCelluleGetSuivante( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  TrajetSimple *pointeurTrajetSimple = &trajetSimple;
  Cellule cellule = Cellule( pointeurTrajetSimple, NULL );
  cout << "Cellule suivante : " << cellule.GetSuivante() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestCelluleAfficher( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  TrajetSimple *pointeurTrajetSimple = &trajetSimple;
  Cellule cellule = Cellule( pointeurTrajetSimple, NULL );
  cellule.Afficher( );
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestListeChaineeConstructeur( void )
// Mode d'emploi : Test le constructeur de ListeChainee.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  TrajetSimple *pointeurTrajetSimple = &trajetSimple;
  Cellule cellule = Cellule( pointeurTrajetSimple, NULL );
  ListeChainee* listeChainee = new ListeChainee ();
  delete listeChainee;
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestListeChaineeAjouter( void )
// Mode d'emploi : Test le constructeur de ListeChainee.
//
{
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  TrajetSimple *pointeurTrajetSimple = &trajetSimple;
  Cellule* cellule = new Cellule ( pointeurTrajetSimple, NULL );
  ListeChainee* listeChainee = new ListeChainee ();
  listeChainee->AjouterFin(cellule);
  delete listeChainee;
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestListeChaineeRetirer( void )
// Mode d'emploi : Test le constructeur de ListeChainee.
//
{
  #ifdef MAP
    cout << "Appel à la méthode TestListeChaineeRetirer()" << endl;
  #endif
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  TrajetSimple *pointeurTrajetSimple = &trajetSimple;
  Cellule* cellule = new Cellule ( pointeurTrajetSimple, NULL );
  ListeChainee* listeChainee = new ListeChainee ();
  listeChainee->AjouterFin(cellule);
  Cellule* celluleSupprimee = listeChainee->RetirerFin();
  celluleSupprimee->Afficher();
  delete listeChainee;
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestTrajetComposeConstructor( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  #ifdef MAP
    cout << "Appel à la méthode TestTrajetComposeConstructor()" << endl;
  #endif
  TrajetCompose trajetCompose;
} //----- fin de TestTrajetComposeConstructor


static void TestTrajetComposeGetVilleDepart( void )
// Mode d'emploi : Test le constructeur de TrajetCompose.
//
{
  #ifdef MAP
    cout << "Appel à la méthode TestTrajetComposeGetVilleDepart()" << endl;
  #endif
  TrajetSimple trajetSimple ("Paris", "Lyon", "TGV");
  Trajet* testTrajet = &trajetSimple;
  TrajetCompose trajetCompose;
  trajetCompose.AjouterTrajetFin(testTrajet);
  cout << "Ville de départ : " << trajetCompose.GetVilleDepart() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart

static void TestTrajetComposeGetVilleArrivee( void )
// Mode d'emploi : Test le constructeur de TrajetSimple.
//
{
  #ifdef MAP
    cout << "Appel à la méthode TestTrajetComposeGetVilleArrivee()" << endl;
  #endif
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  Trajet* testTrajet = &trajetSimple;
  TrajetCompose trajetCompose = TrajetCompose();
  trajetCompose.AjouterTrajetFin(testTrajet);
  cout << "Ville d'arrivée : " << trajetCompose.GetVilleArrivee() << endl;
} //----- fin de TestTrajetSimpleGetVilleDepart


static void TestTrajetComposeAfficher( void )
// Mode d'emploi : Test le constructeur de TrajetCompose.
//
{
  #ifdef MAP
    cout << "Appel à la méthode TestTrajetComposeAfficher()" << endl;
  #endif
  TrajetSimple trajetSimple = TrajetSimple("Paris", "Lyon", "TGV");
  Trajet* testTrajet = &trajetSimple;
  TrajetCompose trajetCompose = TrajetCompose();
  trajetCompose.AjouterTrajetFin(testTrajet);
  cout << "Trajet "; trajetCompose.Afficher();
} //----- fin de TestTrajetComposeGetVilleDepart


//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ( )
{
  // /* Test de TrajetSimple */
  // cout << " ----- Test de TrajetSimple ----- " << endl;
  // TestTrajetSimpleConstructor();
  // TestTrajetSimpleGetVilleDepart();
  // TestTrajetSimpleGetVilleArrivee();
  // TestTrajetSimpleAfficher();

  // /* Test de Cellule */
  // cout << " ----- Test de Cellule ----- " << endl;
  // TestCelluleConstructeur();
  // TestCelluleGetValeur();
  // TestCelluleGetSuivante();
  // TestCelluleAfficher();

  // /* Test de ListeChainee */
  // cout << " ----- Test de ListeChainee ----- " <<endl;
  // TestListeChaineeConstructeur();
  // TestListeChaineeAjouter();
  // TestListeChaineeRetirer();
  
  /* Test de TrajetCompose */
  cout << " ----- Test de TrajetCompose ----- " <<endl;
  TestTrajetComposeConstructor();
  TestTrajetComposeGetVilleDepart();
  // TestTrajetComposeGetVilleArrivee();
  // TestTrajetComposeAfficher();
  return 0;
}
