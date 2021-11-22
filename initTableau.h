/*
-----------------------------------------------------------------------------------
Nom du fichier :  saisieIsCorrect.cpp
Nom du labo    :  Labo 6 - Cribles

Auteur(s)      :  Théo Coutaudier

Date creation  :  12-11-2021

Description    :  Ajoute une valeur par défault les cases du tableau


Remarque(s)    :  Ne peut remplir que les valeurs par défault true ou false

Compilateur :  Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABOCRIBLES_INITTABLEAU_H
#define LABOCRIBLES_INITTABLEAU_H
///
/// Nom : initTableau
/// But : Ajoute une valeur par défault à toute les cases d'un tableau booléen
///
/// \param tab      le tableau à initialiser (tableau bool)
/// \param taille   la taille du tableau (en size_t)
/// \param valeur   la valeur bool avec la quelle initialiser le tableau (true false)
/// Exception : n/a
void initTableau(bool tab[], size_t taille, bool valeur);

#endif //LABOCRIBLES_INITTABLEAU_H
