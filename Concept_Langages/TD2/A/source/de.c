/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Librairie implémentant les fonctions nécessaire au jeu de dé
*/


#include "de.h"


int afficher_menu() { //affiche le menu et retourne le choix
    int nombre;
    printf("avec combien de dés voulez vous jouer ?  ");
    printf("Tapez 1,2,3 ou 4 ");
    scanf("%d", &nombre);
    printf("Vous avez choisi : %d\n dé(s)", nombre);
    return nombre;
} 

void lancer_des(int *des, int nb_des) { // lance et relance les des identiques
    int relance;
    do {
        relance = 0;
        for (int i=0;i<nb_des;i++) {
            des[i] = rand_int_range(1,6);
        }
        for (int i = 0; i < nb_des; i++) {
            for (int j = i + 1; j < nb_des; j++) {
                if (des[i] == des[j]) {
                    des[j] = rand_int_range(0,6);
                    relance = 1; // Il faut revérifier
                }
            }
        }
    } while (relance);
}

int calculer_score(int *des, int nb_des) {
    int total = 0;
    for (int i = 0; i < nb_des; i++) {
        total += des[i];
    }
    return total;
}

void afficher_res(int total, int nb_des) { // affiche le résultat 
    int seuil = (12 * nb_des) / 3; // 2/3 du score max possible

    if (total > seuil) {
        printf("Bravo ! Vous avez gagné avec %d points (+%d au-dessus du seuil de %d) !\n", total, total - seuil, seuil);
    } else {
        printf("Dommage... Il vous manque %d points pour gagner (score : %d, seuil : %d).\n", seuil - total, total, seuil);
    }
} 

// gcc -c de.c    # Produit de.o



/* 
Le fichier .o permet de recompiler uniquement les fichiers 
modifiés sans recompilation complète, accélérant le processus 
de build.
*/

// gcc de.o -o de

