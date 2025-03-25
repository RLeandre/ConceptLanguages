/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Test de la libraire util_rand
*/


#include "util_rand.h"

int main() {
    // Initialiser le générateur de nombres aléatoires
    init_random();

    // Tester les différentes fonctions de génération aléatoire
    printf("Rand int: %d\n", rand_int());
    printf("Rand int seuil_haut (100): %d\n", rand_int_seuil_haut(100));
    printf("Rand int range (10-20): %d\n", rand_int_range(10, 20));
    printf("Rand double: %f\n", rand_double_01());
    printf("Rand double range (1.5-3.5): %f\n", rand_double_range(1.5, 3.5));

    return 0;
}
