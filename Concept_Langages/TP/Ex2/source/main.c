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
    initStack(&maPile);

    // Test : empiler des entiers dans la pile
    push(&maPile, 10);
    push(&maPile, 20);
    push(&maPile, 30);

    // Test : afficher l'élément au sommet de la pile
    printf("Élément au sommet de la pile : %d\n", peek(&maPile)); 
    
    // Test : dépiler un élément de la pile
    printf("Élément dépilé : %d\n", pop(&maPile));
    printf("Élément au sommet de la pile après dépilement : %d\n", peek(&maPile));

    // Libération de la mémoire en dépilant tous les éléments
    while (!isEmpty(&maPile)) { 
        pop(&maPile);
    }

    // Test : inversion et affichage d'un tableau d'entiers
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    reverseAndPrint(tableau, taille);

    return 0;
}
