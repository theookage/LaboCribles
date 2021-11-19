/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom du Labo    : Labo 6 - Cribles

Auteur(s)      : Grégoire Guyot et Théo Coutaudier

Date creation  : 19-11-2021

Description    :

Remarque(s)    : n/a

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <limits>
#include "affichageTableau.h"
#include "countListTableau.h"

using namespace std;

int main() {
   int saisieUser=0;
   cin>>saisieUser;
	bool tab[saisieUser] = {1, 0, 1};

	afficherCribles(tab, 3, 2, 3);

   cout << "il y a " << countTrueElement(tab[3], ) << " elements" << endl;
   listTrueElement()
	cout << "Merci d'avoir joue. Appuyez sur ENTER pour terminer le programme...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return EXIT_SUCCESS;
}


