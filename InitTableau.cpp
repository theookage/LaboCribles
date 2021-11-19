/*
------------------------------------------------------
Nom du fichier : <nom du fichier>.<xxx>
Auteur(s) : Theo Coutaudier
Date creation : <jj.mm.aaaa>
Nom Labo :
Description :

Remarque(s) :
Compilateur : Mingw-w64 g++ 11.2.0
------------------------------------------------------
*/

#include <cstdlib>
#include "initTableau.h"

using namespace std;

void initTableau(bool tab[], size_t taille, bool valeur) {
   for (size_t i = 0; i < taille; ++i) {
      tab[i]= valeur;
   }
}