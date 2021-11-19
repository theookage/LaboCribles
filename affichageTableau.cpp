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

void afficherCribles(const bool tab[], size_t taille, int nbColonnes, int
espacement){
	for (int j = 0; j <= nbColonnes; ++j){
		for (size_t i = 0; i < taille; ++i){
			cout << setw(espacement) << (tab[i] ? 'o' : 'x');
		}
		cout << endl;
	}
}

