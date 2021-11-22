/*
-----------------------------------------------------------------------------------
Nom du fichier :  countListTableau.cpp
Nom du Labo    :  Labo 6 - Cribles

Auteur(s)      :  Grégoire Guyot et Théo Coutaudier

Date creation  :  19-11-2021

Description    :  La fonction countTrueElement compte le nombre de valeur à true
                  dans le tableau.
                  La fonction listTrueElement liste les cases du tableau qui sont
                  à true.

Remarque(s)    : n/a

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
/// Nom : listBoolElement
/// But : Affiche la position de chaque élément à true ou false
///
/// \param tab          tableau (bool)
/// \param taille       taille du tableau (size_t)
/// \param nbParLigne   Nombre d'élément par ligne
/// \param espace       espace d'affichage entre chaque élément (int)
/// \param valeur       bool indiquant s'il faut récupérer les valeurs true ou false
/// Exception : n/a
void listBoolElement(const bool tab[], size_t taille, int nbcolonne, int espace,
                     bool valeur);

#endif //LABOCRIBLES_COUNTLISTTABLEAU_H
