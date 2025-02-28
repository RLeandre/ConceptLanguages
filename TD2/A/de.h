#ifndef DE_H
#define DE_H

#include <stdlib.h>
#include <stdio.h>
#include "util_rand.h"

int afficher_menu(); // affiche le menu et retourne le choix

void lancer_des(int *des, int nb_des); // lance et relance les des identiques

int calculer_score(int *des, int nb_des); // calcul le score 

void afficher_res(int total, int nb_des); // affiche les des et le résultat 


#endif