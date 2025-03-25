/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : fait le produit des n entiers avec récursivté terminale
*/

#include <stdio.h>

// Fonction récursive terminale avec un accumulateur
int produit_terminal(int n, int accumulateur) {
    if (n == 0) {
        return accumulateur;  // Cas de base : on retourne l'accumulateur
    }
    return produit_terminal(n - 1, n * accumulateur);  // Appel récursif avec l'accumulateur mis à jour
}

int produit_terminal_init(int n) {
    return produit_terminal(n, 1);  // Initialisation de l'accumulateur à 1
}
