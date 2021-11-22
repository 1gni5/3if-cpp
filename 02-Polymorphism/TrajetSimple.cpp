/*************************************************************************
                           TrajetSimple  -  description
                             -------------------
    début                : 15/11/2021
    copyright            : (C) 2021 par Jules DUCANGE et Saad GUESSOUS
    e-mail               : Jules.Ducange@insa-lyon.fr
                           Saad.Guessous@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetSimple::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


const char* TrajetSimple::GetVilleDepart( void ) const {
   return villeDepart;
} // ----- Fin de GetVilleDepart

const char* TrajetSimple::GetVilleArrivee( void ) const {
   return villeArrivee;
} // ----- Fin de GetVilleArrivee

void TrajetSimple::Afficher( void ) const {
    cout << "de " << villeDepart << " à " << villeArrivee << " en "
        << moyenTransport << endl;
}

//-------------------------------------------- Constructeurs - destructeur

TrajetSimple::TrajetSimple ( const char* VilleDepart, const char* VilleArrivee, const char* MoyenTransport)
{
    /* Allocation de la mémoire */
    villeDepart = new char [ strlen(VilleDepart) + 1 ];
    villeArrivee = new char [ strlen(VilleArrivee) + 1 ];
    moyenTransport = new char [ strlen(moyenTransport) + 1 ];

    /* Copie des valeurs */
    strcpy(villeDepart, VilleDepart);
    strcpy(villeArrivee, VilleArrivee);
    strcpy(moyenTransport, MoyenTransport);

#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple


TrajetSimple::~TrajetSimple ( )
{
    /* Libération de la mémoire */
    delete [] villeDepart;
    delete [] villeArrivee;
    delete [] moyenTransport;

#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de ~TrajetSimple

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
