/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Test et implémentation de l'expérience de statistiques
*/

#include "statistiques.h"

int main() {
    init_random();  // Initialisation du générateur aléatoire

    int nb_tirages = 100000;
    int min = 0;
    int max = 5;

    generer_statistiques(nb_tirages, min, max);

    return 0;
}