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

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Ensemble::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//-------------------------------------------- Constructeurs - destructeur
//

Ensemble::Ensemble ( unsigned int cardMax = CARDINALITE_MAX)
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
	#ifdef MAP
    cout << "Appel au destructeur de <Ensemble>" << endl;
	#endif
} //----- Fin de ~Ensemble


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

