#ifndef LABOCRIBLES_CHECKNBPREMIER_H
#define LABOCRIBLES_CHECKNBPREMIER_H

#include <cstdlib>
#include <iostream>

void criblage(bool tab[], int taille);

void criblageMult(int taille, bool tab[], int multiplicateur);

int prochainMult(const bool tab[], int taille, int multActuel);
#endif //LABOCRIBLES_CHECKNBPREMIER_H
