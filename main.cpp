/*
-----------------------------------------------------------------------------------
Nom du fichier :  main.cpp
Nom du Labo    :  Labo 6 - Cribles

Auteur(s)      :  Grégoire Guyot et Théo Coutaudier

Date creation  :  19-11-2021

Description    :  L'utilisateur choisi une valeur entre 2 et 100, le programme va
                  créer un tableau avec le nombre de valeur choisis par l'utilisateur,
                  un algorithme va chercher les nombres premier entre 0 et la
                  valeur saisie.

Remarque(s)    :  La saisie de l'utilisateur est controlée
                  Le constante peuvent être modifier pour afficher les tableau sur
                  plus/moins de colonne ou plus d'espace entre les valeurs
                  Lors de la création du tableau, il y a un avertissement, car le
                  tableau pourrait être crée, mais cela n'arrive pas.

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <limits> // utilisée pour vider le buffer avec numeric_limits<streamsize>
#include "affichageTableau.h"
#include "countListTableau.h"
#include "saisieVerification.h"
#include "initTableau.h"
#include "checkNbPremier.h"

using namespace std;

int main() {

   //--------------------------------------
   // Décalaration constante
   //--------------------------------------

   const unsigned int   MIN         =    2;    //valeur minimum testSaisie
   const unsigned int   MAX         =  100;    //valeur maximum testSaisie
   const int            space       =    3;    //espace pour le setw()
   const int            nbcolonne   =   10;    //définir taille affichage tableau
	const bool           valeur      = true;    //initTableau


   //--------------------------------------
   // Saisie utilisateur et création tableau
   //--------------------------------------

   cout << "Nombre de valeurs [" << MIN << " - " << MAX << "] : ";
   size_t taille = size_t(testSaisie(MIN, MAX));
	bool tab[taille];

   //--------------------------------------
   // Initialisation tableau et affichage
   //--------------------------------------

   cout << endl << "initialisation du tableau... " << endl;
   initTableau(tab, taille, valeur); //initialisation du tableau
   afficherCribles(tab, taille, nbcolonne, space); //affichage du tableau

   //--------------------------------------
   // Modification tableau et affichage
   //--------------------------------------

   cout << endl << "modification du tableau... " << endl;
	criblage(tab, taille); //modification du tableau
	afficherCribles(tab, taille, nbcolonne, space); //affichage du tableau

   //--------------------------------------
   // Affichage liste des nombres premiers
   //--------------------------------------

   cout << endl << "Il y a " << countTrueElement(tab, taille)
        << " nombre premier" << endl;
   //liste de tout les nombres premiers
   listBoolElement(tab, taille, nbcolonne , space, valeur);

   //--------------------------------------
   // Fin de programme
   //--------------------------------------

	cout << endl << "Merci utilise le programme. Appuyez sur ENTER pour terminer le "
                   "programme...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return EXIT_SUCCESS;
}


