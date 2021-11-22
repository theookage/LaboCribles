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

#ifndef LABOCRIBLES_COUNTLISTTABLEAU_H
#define LABOCRIBLES_COUNTLISTTABLEAU_H
///
/// Nom :  countTrueElement
/// But : Compte le nombre de valeur True dans un tableau
///
/// \param tab Le tableau à analyser
/// \param taille La taille du tableau en size_t
/// \return Le nombre de valeur True dans le tableau en size_t
/// Exception : n/a
size_t countTrueElement(const bool tab[], size_t taille);

///
/// Nom : listTrueElement
/// But : Affiche la position de chaque élément true
///
/// \param tab          tableau (bool)
/// \param taille       taille du tableau (size_t)
/// \param nbParLigne   Nombre d'élément par ligne
/// \param espace       espace d'affichage entre chaque élément (int)
///
/// Exception : n/a
void listTrueElement(const bool tab[], size_t taille, int nbcolonne, int espace);

#endif //LABOCRIBLES_COUNTLISTTABLEAU_H
