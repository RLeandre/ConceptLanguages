/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Librairie implémentant la gestioon et création d'aléatoire
*/

#include "util_rand.h"


// Initialise le générateur avec une graine aléatoire
void init_random() {
    srand(clock()); // Utilisation de clock() pour utiliser les millisecondes
}

// Retourne un entier aléatoire dans la plage maximale du générateur
int rand_int() {
    printf("RAND_MAX = %d\n", RAND_MAX);
    return rand();
}

// Retourne un entier aléatoire entre 0 et seuil_haut
int rand_int_seuil_haut(int seuil_haut) {
    return rand() % (seuil_haut + 1);
}

// Retourne un entier aléatoire entre seuil_bas et seuil_haut
int rand_int_range(int seuil_bas, int seuil_haut) {
    return seuil_bas + rand() % (seuil_haut - seuil_bas + 1);
}

// Retourne un nombre réel entre 0 et 1
double rand_double_01() {
    return (double)rand() / RAND_MAX;
}

// Retourne un nombre réel à deux décimales entre seuil_bas et seuil_haut
double rand_double_range(double seuil_bas, double seuil_haut) {
    double range = seuil_haut - seuil_bas;
    return seuil_bas + ((double)rand() / RAND_MAX) * range;
}
