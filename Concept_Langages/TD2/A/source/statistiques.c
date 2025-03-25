/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Librairie implémentant les fonctions de test de statistiques
*/

#include "statistiques.h"

void generer_statistiques(int nb_tirages, int min, int max) {
    int occurrences[max - min + 1];  // Tableau pour compter les occurrences

    // Initialisation des occurrences à 0
    for (int i = 0; i <= max - min; i++) {
        occurrences[i] = 0;
    }

    // Génération aléatoire des nombres et comptage
    for (int i = 0; i < nb_tirages; i++) {
        int valeur = rand_int_range(min, max);
        occurrences[valeur - min]++;  // Incrémentation de la case correspondante
    }

    // Affichage des résultats en pourcentage
    printf("Résultats après %d tirages :\n", nb_tirages);
    for (int i = 0; i <= max - min; i++) {
        double pourcentage = (occurrences[i] / (double)nb_tirages) * 100.0;
        printf("Valeur %d : %d occurrences (%.2f%%)\n", i + min, occurrences[i], pourcentage);
    }
}
