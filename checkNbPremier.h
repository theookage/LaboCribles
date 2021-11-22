/*
-----------------------------------------------------------------------------------
Nom du fichier : checkNbPremier.h
Nom du Labo    : Labo 6 - Cribles

Auteur(s)      : Grégoire Guyot et Théo Coutaudier

Date creation  : 19-11-2021

Description    : Utilise le théorème de Erathostène pour cribler le tableau et
 					  mettre à false les nombre qui ne sont pas premier. Commence par 2
 					  puis trouve le prochain diviseur premier donc 3 puis crible le
					  tableau à nouveau.

Remarque(s)    : Le premier diviseur est initalisé à 2 car c'est le premier nombre
 					  premier, c'est le cas dans le criblage d'Eratosthène également.

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABOCRIBLES_CHECKNBPREMIER_H
#define LABOCRIBLES_CHECKNBPREMIER_H


/// Nom : criblage
/// But : crible le tableau en commençant par la valeur 2
///
/// \param tab le tableau à cribler
/// \param taille la taille du tableau à cribler
/// Exception : n/a
void criblage(bool tab[], size_t taille);

/// Nom : criblageDiv
/// But : utilise le diviseur actuel et crible le tableau avec en mettant à false
///     : les nombres qui sont divisables par le divisieur actuel
///
/// \param tab le tableau à cribler
/// Exception : n/a
void criblageDiv(bool tab[]);

/// Nom : prochainDiv
/// But : trouver le prochain diviseur avec lequel cribler le tableau
///
/// \param tab à cribler
/// \return le prochain diviseur de size_t pour éviter les conversions avec les
///         autre types lorsque il est utilisé dans les calculs
/// Exception : n/a
size_t prochainDiv(const bool tab[]);
#endif //LABOCRIBLES_CHECKNBPREMIER_H
