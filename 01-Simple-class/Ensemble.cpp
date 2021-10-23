/*************************************************************************
                           Ensemble  -  ensemble mathématiques
                             -------------------
    début                : 22-10-2021
    copyright            : (C) 2021 par Jules Ducange
    e-mail               : jules.ducange@insa-lyon.fr
*************************************************************************/

//----- Réalisation de la classe <Ensemble> (fichier Ensemble.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Ensemble.h"

//------------------------------------------------------------- Constantes
const string ENDL = "\r\n";

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void Ensemble::Afficher ( void ) {
  cout << cardinaliteCourante << ENDL;
  cout << cardinaliteMaximum << ENDL;
  cout << "{}" << ENDL;
} //---- Fin de Afficher

//-------------------------------------------- Constructeurs - destructeur
//

Ensemble::Ensemble ( unsigned int cardMax )
  :cardinaliteCourante{0}, cardinaliteMaximum{cardMax},
   elements{new int[cardMax]}
{
#ifdef MAP
  cout << "Appel au constructeur de <Ensemble>" << endl;
#endif
} //----- Fin de Ensemble

Ensemble::Ensemble ( int*, unsigned int )
{
#ifdef MAP
  cout << "Appel au constructeur de <Ensemble>" << endl;
#endif
} //----- Fin de Ensemble


Ensemble::~Ensemble ( )
{
  delete [] elements;
#ifdef MAP
  cout << "Appel au destructeur de <Ensemble>" << endl;
#endif
} //----- Fin de ~Ensemble


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

