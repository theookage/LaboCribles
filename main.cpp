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
#include "saisieVerification.h"
#include "initTableau.h"
#include "checkNbPremier.h"

using namespace std;

int main() {
   const unsigned int MIN = 2;   //testSaisie
   const unsigned int MAX = 100; //testSaisie
   const bool valeur = true;    //initTableau
   const int space = 3;          //setw()
   size_t taille = size_t(testSaisie(MIN, MAX));
	bool tab[taille];

   initTableau(tab, taille, valeur);
	
	criblage(tab, taille);
	afficherCribles(tab, taille, 10, space);


   cout << "Il y a " << countTrueElement(tab, taille)
        << " nombre premier" << endl;

   listTrueElement(tab, taille, space, 3);

	cout << "Merci d'avoir joue. Appuyez sur ENTER pour terminer le programme...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return EXIT_SUCCESS;
}


