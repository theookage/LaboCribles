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

void nombrePremier(const int tab[], size_t taille, int chiffre) {
   unsigned pos = 0;
   bool nbDivisible;
   for (int i = 0; i <= chiffre; ++i) {
      nbDivisible = false;
      for (int j = 0; j < i; ++j) {
         if (i%j){
            nbDivisible=true;
         }
      }
      if(!nbDivisible){
         tab[pos] = i;
         pos++;
      }
   }
}
