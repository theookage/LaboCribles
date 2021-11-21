/*
-----------------------------------------------------------------------------------
Nom du fichier :  main.cpp
Nom du Labo    :  Labo 6 - Cribles

Auteur(s)      :  Grégoire Guyot et Théo Coutaudier

Date creation  :  19-11-2021

Description    :  La fonction countTrueElement compte le nombre de valeur à true
                  dans le tableau.
                  La fonction listTrueElement liste les cases du tableau qui sont
                  à true.

Remarque(s)    :

Compilateur    :  Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <limits>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "countListTableau.h"
using namespace std;

size_t countTrueElement(const bool tab[], size_t taille){
   size_t count = 0; //intitialisation du counter qui sera retourner
   for (size_t i = 0; i < taille; ++i) {
      if (tab[i]) {
         count++;
      }
   }
   return count;
}
void listTrueElement(const bool tab[], size_t taille, int nbParLigne, int espace) {
   int count = 0;
   for (size_t i = 1; i < taille; ++i) {
      if(tab[i]) {
            cout << setw(espace) << i + 1;
            count++;
            //vérifie si le programme doit passé à la ligne
            if (!(count%nbParLigne) && count!=0){
               cout<<endl;
            }
      }
   }
   cout << endl;
}
