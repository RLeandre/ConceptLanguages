#include "somme_liste.h"
#include "../A/util_rand.h"  // Utilisation de ta bibliothèque pour les nombres aléatoires
#include <stdlib.h>

#define SIZE 10

int main() {
    int array[SIZE];

    // Initialisation du générateur de nombres aléatoires
    init_random();

    // Remplissage du tableau avec des nombres entre 1 et 100
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand_int_range(1, 100);
    }

    int sum;
    if (sommeListe(array, SIZE, &sum) == 0) {
        printf("Somme du tableau: %d\n", sum);
    } else {
        printf("Erreur: Pointeur NULL détecté.\n");
    }

    return 0;
}
