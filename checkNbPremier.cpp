
#include "checkNbPremier.h"

using namespace std;
size_t tailleCriblage;
size_t multiplicateur = 2;  // commence a 2$

void criblage(bool tab[], size_t taille) { // size t ?
	tailleCriblage = taille;
	while(multiplicateur < tailleCriblage) {  // tester taille / 2 pour opti
		criblageMult(tab);
      multiplicateur = prochainMult(tab);
	}
}

void criblageMult(bool tab[]){
	for(size_t i = multiplicateur - 1; i < tailleCriblage; ++i){
		if ((i + 1) % multiplicateur == 0){
			tab[i] = false;
		}
	}
}

size_t prochainMult(const bool tab[]){
	for(size_t i = multiplicateur; i < tailleCriblage; ++i){ // [1, 1, 1, 0, 1]
		if(tab[i]){
			return i + 1;
		}
	}
}