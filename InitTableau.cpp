/*
-----------------------------------------------------------------------------------
Nom du fichier :  initTableau.cpp
Nom du labo    :  Labo 6 - Cribles

Auteur(s)      :  Théo Coutaudier et Grégoire Guyot

Date creation  :  12-11-2021

Description    :  Ajoute une valeur par défault les cases du tableau

Remarque(s)    :  Ne peut remplir que les valeurs par défault true ou false

Compilateur    :  Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include "initTableau.h"

using namespace std;

void initTableau(bool tab[], size_t taille, bool valeur) {
   for (size_t i = 0; i < taille; ++i) {
      tab[i] = valeur;
   }
}