/*
-----------------------------------------------------------------------------------
Nom du fichier : saisieVerification.cpp

Nom du labo    : Labo 6 - Cribles

Auteur(s)      :  Grégoire Guyot et Théo Coutaudier

Date creation  : 19-11-2021

Description    : Vérifie que la saisie de l'utilisateur est valide et conforme à la
                 saisie demandés

Remarque(s)    : - Vérifie si la valeur est du bon type
                 - Vérifie si la valeur est dans les bonnes bornes
                 - Si la valeur est fausse alors un message d'erreur s'affiche
                   et l'utilisateur doit resaisir une valeur

Compilateur : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <iostream>
#include <limits>
#include <string>
#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;

int testSaisie(int saisieMin, int saisieMax)
{
   int nbreSaisies;
   bool erreurSaisie;
   do {
      cin >> nbreSaisies;
      //verifie que la saisie correspond au type
      //verifie aussi que la aisie et entre saisieMin et saisieMax
      erreurSaisie = (cin.fail() or
                     (nbreSaisies < saisieMin or nbreSaisies > saisieMax));
      if(erreurSaisie){
         cin.clear();
         cout << "Erreur saisie, valeurs autorisees ["
              << saisieMin << "-"<< saisieMax << "]" << endl;
      }
      VIDER_BUFFER;
   } while(erreurSaisie);
   return nbreSaisies;
}

