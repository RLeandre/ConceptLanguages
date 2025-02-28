#ifndef UTIL_RAND_H
#define UTIL_RAND_H

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

// Initialise le générateur de nombres aléatoires (à appeler une seule fois au début)
void init_random();

// Génère un nombre entier aléatoire dans la plage maximale du générateur
int rand_int();

// Génère un nombre entier aléatoire entre 0 et seuil_haut
int rand_int_seuil_haut(int seuil_haut);

// Génère un nombre entier aléatoire entre un seuil_bas et seuil_haut
int rand_int_range(int seuil_bas, int seuil_haut);

// Génère un nombre réel entre 0 et 1
double rand_double_01();

// Génère un nombre réel à deux décimales entre un seuil bas et un seuil haut
double rand_double_range(double min, double max);

#endif // UTIL_RAND_H
