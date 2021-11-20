/*
-----------------------------------------------------------------------------------
Nom du fichier : affichageTableau.cpp
Nom du Labo    : Labo 6 - Cribles

Auteur(s)      : Grégoire Guyot et Théo Coutaudier

Date creation  : 10-11-2021

Description    :

Remarque(s)    :

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include "affichageTableau.h"

using namespace std;

void afficherCribles(const bool tab[], size_t taille, int nbColonnes, int space){
		for (size_t i = 0; i < taille; ++i){ // int ou size t
			if (!(i % (static_cast<unsigned long long int>(nbColonnes))) && i != 0){
				cout << endl;
			}
			cout << setw(space) << (tab[i] ? '0' : 'X');
		}
		cout << endl;
}
// fontionne avec 5 10
