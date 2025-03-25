/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : fait la puissance de n d'un entier avec récursivté terminale
*/

#include <stdio.h>

// Fonction récursive terminale avec un accumulateur
int puissance_terminal(int n, int p, int accumulateur) {
    if (p == 0) {
        return accumulateur;  // Cas de base : n^0 = accumulateur
    }
    return puissance_terminal(n, p - 1, n * accumulateur);  // Mise à jour de l'accumulateur
}

int puissance_terminal_init(int n, int p) {
    return puissance_terminal(n, p, 1);  // Initialisation de l'accumulateur à 1
}
