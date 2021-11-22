
#include "checkNbPremier.h"

using namespace std;
size_t tailleCriblage;
size_t diviseur = 2;  //Commence à 2

void criblage(bool tab[], size_t taille) {
	tailleCriblage = taille;
   //Exception de tab[0] qui n'est pas prise en comtpe par criblageDiv
   tab[0] = false;
	while(diviseur * diviseur < tailleCriblage) {
		criblageDiv(tab);
      diviseur = prochainDiv(tab);
	}

}

void criblageDiv(bool tab[]){
	for(size_t i = diviseur; i <= tailleCriblage; ++i){
		if (i % diviseur == 0 && i != diviseur){
			tab[i-1] = false;
		}
	}
}

size_t prochainDiv(const bool tab[]){
	for(size_t i = diviseur; i < tailleCriblage; ++i){
		if(tab[i]){
			return ++i;
		}
	}
}