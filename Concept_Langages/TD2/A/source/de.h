
/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Strcture de la librairie implémentant les fonctions nécessaire au jeu de dé
*/

#ifndef DE_H // Vérifie si DE_H n'est pas défini pour éviter les inclusions multiples
#define DE_H

#include "util_rand.h"


int afficher_menu(); // affiche le menu et retourne le choix

void lancer_des(int *des, int nb_des); // lance et relance les des identiques

int calculer_score(int *des, int nb_des); // calcul le score 

void afficher_res(int total, int nb_des); // affiche les des et le résultat 


#endif