/*
-----------------------------------------------------------------------------------
Nom du fichier :  saisieIsCorrect.cpp
Nom du labo    :  Labo 6 - Cribles

Auteur(s)      :  Théo Coutaudier

Date creation  :  12-11-2021

Description    :  Vérifie que la saisie de l'utilisateur est valide et conforme à la
                  saisie demandés

Remarque(s)    :  - Vérifie si la valeur est du bon type
                  - Vérifie si la valeur est dans les bonnes bornes
                  - Si la valeur est fausse alors un message d'erreur s'affiche
                    et l'utilisateur doit resaisir une valeur

Compilateur :  Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO5_1_SAISIEVERIFICATION_H
#define LABO5_1_SAISIEVERIFICATION_H

///
/// Nom : testSaisie
/// But : Demande à l'utilisateur de saisir un nombre
///       et vérifie qu'elle correspond aux parametres ci-dessous
///
/// \param saisieMin la valeur minimum que l'utilisateur peut saisir
/// \param saisieMax la valeur maximum que l'utilisateur peut saisir
/// \return la valeur saisie par l'utilisateur (en int)
/// Exception : n/a
int testSaisie(int saisieMin, int saisieMax);

#endif //LABO5_1_SAISIEVERIFICATION_H
