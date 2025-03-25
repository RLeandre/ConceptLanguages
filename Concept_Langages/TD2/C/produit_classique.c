/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : fait le produit des n entiers avec récursivté classique
*/

#include <stdio.h>

// Fonction récursive classique pour calculer le produit des n premiers entiers
int produit_classique(int n) {
    if (n == 0) {
        return 1;  // Cas de base : le produit des 0 premiers entiers est 1
    }
    return n * produit_classique(n - 1);
}
