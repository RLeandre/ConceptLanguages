/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Structure de la librairie implémentant les fonctions de test de statistiques
*/

#ifndef STATISTIQUES_H // Vérifie si STATISTIQUES_H n'est pas défini pour éviter les inclusions multiples
#define STATISTIQUES_H

#include <stdio.h> // printf et scanf
#include "util_rand.h"  // Inclut la bibliothèque pour les nombres aléatoires

void generer_statistiques(int nb_tirages, int min, int max);

#endif 
