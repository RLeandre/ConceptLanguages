/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Strcture de la librairie implémentant la gestioon et création d'aléatoire
*/

#ifndef UTIL_RAND_H // Vérifie si UTIL_RAND_H n'est pas défini pour éviter les inclusions multiples
#define UTIL_RAND_H

#include <stdlib.h> // malloc, free, atoi 
#include <time.h> // gestion du temps (utilisée pour srand)
#include <stdio.h> // printf, scanf

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

#endif // UTIL_RAND_H // Fin de la directive de préprocesseur pour éviter les inclusions multiples
