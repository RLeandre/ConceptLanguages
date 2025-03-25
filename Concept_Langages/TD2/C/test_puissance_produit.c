/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : test les différents puissances et produit terminale et classique
*/

#include <stdio.h>
#include "produit_classique.c"
#include "produit_terminal.c"
#include "puissance_classique.c"
#include "puissance_terminal.c"


int produit_classique(int n);
int produit_terminal_init(int n);
int puissance_classique(int n, int p);
int puissance_terminal_init(int n, int p);

int main() {
    int n = 5;
    int p = 3;

    // Test du produit des n premiers entiers
    printf("Produit des %d premiers entiers (récursivité classique) : %d\n", n, produit_classique(n));
    printf("Produit des %d premiers entiers (récursivité terminale) : %d\n", n, produit_terminal_init(n));

    // Test de la puissance
    printf("\n%d à la puissance %d (récursivité classique) : %d\n", n, p, puissance_classique(n, p));
    printf("%d à la puissance %d (récursivité terminale) : %d\n", n, p, puissance_terminal_init(n, p));

    return 0;
}
