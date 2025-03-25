/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : fait la puissance de n d'un entier avec récursivté classique
*/


#include <stdio.h>

// Fonction récursive classique pour calculer n à la puissance p
int puissance_classique(int n, int p) {
    if (p == 0) {
        return 1;  // Cas de base : n^0 = 1
    }
    return n * puissance_classique(n, p - 1);  // Appel récursif
}
