/*
-----------------------------------------------------------------------------------
Nom du fichier : affichageTableau.h
Nom du Labo    : Labo 6 - Cribles

Auteur(s)      : Grégoire Guyot et Théo Coutaudier

Date creation  : 10-11-2021

Description    : Affiche un tableau de bool en affichant un 'O' lorsque la valeur
                 est true et 'X' lorsque la valeur est false.

Remarque(s)    : n/a

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABOCRIBLES_AFFICHAGETABLEAU_H
#define LABOCRIBLES_AFFICHAGETABLEAU_H

#include <cstdlib>
#include <iostream>
#include <iomanip>

/// Nom : afficherCribles
/// But : afficher le tableau
///
/// \param tab tableau à afficher
/// \param taille taille du tableau
/// \param nbColonnes nombre de colonnes à afficher
/// \param space nombre d'espaces entre les caractères du tableau
/// Exceptions : n/a
void afficherCribles(const bool tab[], size_t taille, int nbColonnes, int space);

#endif //LABOCRIBLES_AFFICHAGETABLEAU_H
