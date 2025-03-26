/*
    @Project TP1
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Création et manipulation d'une pile et inversion d'un tableau d'entiers
*/

#include "ex2.h"
#include <stdio.h>

int main() {

    // Test : initialisation de la pile
    Stack maPile;
    initialiserPile(&maPile);

    // Test : empiler des entiers dans la pile
    empiler(&maPile, 10);
    empiler(&maPile, 20);
    empiler(&maPile, 30);

    // Test : afficher l'élément au sommet de la pile
    printf("Élément au sommet de la pile : %d\n", consulterSommet(&maPile)); 
    
    // Test : dépiler un élément de la pile
    printf("Élément dépilé : %d\n", depiler(&maPile));
    printf("Élément au sommet de la pile après dépilement : %d\n", consulterSommet(&maPile));

    // Libération de la mémoire en dépilant tous les éléments
    while (!estVide(&maPile)) { 
        depiler(&maPile);
    }

    // Test : inversion et affichage d'un tableau d'entiers
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    renverserEtAfficher(tableau, taille);

    return 0;
}
