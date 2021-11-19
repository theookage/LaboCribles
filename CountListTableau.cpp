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

#include <limits>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

size_t countTrueElement(const bool tab[], size_t taille{
   size_t count = 0;
   for (size_t i = 0; i < taille; ++i) {
      if (tab[i]) {
         count++;
      }
   }
   return count;
}

void listTrueElement( const bool tab[], size_t taille, int espace) {
   cout<<setw(espace);
   for (size_t i = 1; i < taille; ++i) {
      if(tab[i]) {
            cout << i + 1;
      }
   }
}
