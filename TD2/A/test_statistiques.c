#include "statistiques.h"

int main() {
    init_random();  // Initialisation du générateur aléatoire

    int nb_tirages = 100000;
    int min = 0;
    int max = 5;

    generer_statistiques(nb_tirages, min, max);

    return 0;
}