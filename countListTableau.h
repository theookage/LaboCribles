//
// Created by Théo on 19.11.2021.
//

#ifndef LABOCRIBLES_COUNTLISTTABLEAU_H
#define LABOCRIBLES_COUNTLISTTABLEAU_H


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
