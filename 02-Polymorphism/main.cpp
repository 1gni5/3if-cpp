#include "Catalogue.h"
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include <cstring>

#include <iostream>
using namespace std;

void AfficherMenu()
{
  cout << "Voici le menu du projet, veuillez choisir un numéro : " << endl; 
  cout << "\t1. Afficher le catalogue " << endl \
    << "\t2. Ajouter un trajet simple " << endl \
    << "\t3. Ajouter un trajet composée " << endl\
    << "\t4. Rechercher un trajet " << endl\
    << "\t5. Quitter le menu" << endl;
}

char* InputString ( void ) {
  char* buffer = new char[2048];
  cin >> buffer;

  char* str = new char[strlen(buffer) + 1];
  strcpy(str, buffer);

  delete [] buffer;
  return str;
}

TrajetSimple* RecupererTrajet()
{
  char* villeDepart = NULL;
  char* villeArrivee = NULL;
  char* transport = NULL;

  cout << "Ville de départ : ";
  villeDepart = InputString();

  cout << "Ville d'arrivée : ";
  villeArrivee = InputString();

  cout << "Moyen de transport : ";
  transport = InputString();

  TrajetSimple* trajet = new TrajetSimple(villeDepart, villeArrivee, transport);

  delete [] villeDepart;
  delete [] villeArrivee;
  delete [] transport;

  return trajet;
}

void Rechercher(Catalogue& catalogue) {
  const char* VilleDepart = NULL;
  const char* VilleArrivee = NULL;

  cout << "Ville de départ : ";
  VilleDepart = InputString();

  cout << "Ville d'arrivée : ";
  VilleArrivee = InputString();
  
  catalogue.Rechercher(VilleDepart, VilleArrivee);

  delete [] VilleArrivee;
  delete [] VilleDepart;
}

int main()
{
  cout << "//////////////////////////////////////////////////////////////////////////" << endl \
      << "// Bienvenue au projet POO2 réalisé par Jules DUCANGE et Saad GUESSOUS  //" << endl \
      << "// Ce projet consiste à pouvoir gérer un catalogue de trajet.           //" << endl \
      /*<< "// Le projet inclue la méthode de recherche complexe.                   //" <<endl \*/
      << "//////////////////////////////////////////////////////////////////////////" << endl;
  cout << endl;

  Catalogue catalogue ;
  int nbTrajets;
  while(1)
  {
    AfficherMenu();
    int choix;
    cin >> choix;
    switch(choix)
    {
      case 1 : {
        catalogue.Afficher();
        break;
      }
      case 2 : {
        TrajetSimple* trajet = RecupererTrajet();
        catalogue.Ajouter(trajet);
        break;
      }
      case 3: {
        cout << "Veuillez rentrer le nombre de trajets dans votre trajet composé" <<endl;
        cin >> nbTrajets;
        TrajetCompose* trajetCompose = new TrajetCompose();
        for( int i = 0; i < nbTrajets; i++)
        {
          trajetCompose->AjouterTrajet(RecupererTrajet());
        }
        catalogue.Ajouter(trajetCompose);
        break;
      }
      case 4: {
        Rechercher(catalogue);
        break;
      }
      case 5: {
        return 0;
      }
      default: {
        cout << "Choix incorrect." <<endl;
        cin >> choix;
        continue;
      }
    }
  }

  return 0;
}
