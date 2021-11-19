
#include "checkNbPremier.h"

using namespace std;

void criblage(bool tab[], int taille) { // size t ?
	int premierMult = 2; // commence a 2
	while(premierMult < taille) {  // tester taille / 2 pour opti
		criblageMult(taille, tab, premierMult);
		premierMult = prochainMult(tab, taille, premierMult);
	}
}

void criblageMult(int taille, bool tab[], int multiplicateur){
	for(int i = multiplicateur - 1; i < taille; ++i){
		if ((i + 1) % multiplicateur == 0){
			tab[i] = false;
		}
	}
}

int prochainMult(const bool tab[], int taille, int multActuel){
	for(int i = multActuel; i < taille; ++i){ // [1, 1, 1, 0, 1]
		if(tab[i]){
			return i + 1;
		}
	}
}