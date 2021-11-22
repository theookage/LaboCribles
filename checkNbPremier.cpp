/*
-----------------------------------------------------------------------------------
Nom du fichier : checkNbPremier.cpp
Nom du Labo    : Labo 6 - Cribles

Auteur(s)      : Grégoire Guyot et Théo Coutaudier

Date creation  : 10-11-2021

Description    : Utilise le théorème de Erathostène pour cribler le tableau et
 					  mettre à false les nombre qui ne sont pas premier. Commence par 2
 					  puis trouve le prochain diviseur premier donc 3 puis crible le
					  tableau à nouveau.

Remarque(s)    : Le premier diviseur est initalisé à 2 car c'est le premier nombre
 					  premier, c'est le cas dans le criblage d'Eratosthène également.

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include "checkNbPremier.h"

using namespace std;

size_t tailleCriblage;
size_t diviseur = 2;  //Commence à 2

void criblage(bool tab[], size_t taille){
	tailleCriblage = taille;
   //Exception de tab[0] qui n'est pas prise en compte par criblageDiv
   tab[0] = false;
	while(diviseur * diviseur < tailleCriblage){
		criblageDiv(tab);
      diviseur = prochainDiv(tab);
	}

}

void criblageDiv(bool tab[]){
	for(size_t i = diviseur; i <= tailleCriblage; ++i){
		if (i % diviseur == 0 && i != diviseur){
			tab[i-1] = false;
		}
	}
}

size_t prochainDiv(const bool tab[]){
	for(size_t i = diviseur; i < tailleCriblage; ++i){
		if(tab[i]){
			return ++i;
		}
	}
}