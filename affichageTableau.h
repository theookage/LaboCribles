/*
-----------------------------------------------------------------------------------
Nom du fichier : affichageTableau.h
Nom du Labo    : Labo 6 - Cribles

Auteur(s)      : Grégoire Guyot et Théo Coutaudier

Date creation  : 10-11-2021

Description    :

Remarque(s)    :

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABOCRIBLES_AFFICHAGETABLEAU_H
#define LABOCRIBLES_AFFICHAGETABLEAU_H

#include <cstdlib>
#include <iostream>
#include <iomanip>

void afficherCribles(const bool tab[], size_t taille, int nbColonnes, int space);

#endif //LABOCRIBLES_AFFICHAGETABLEAU_H
