/*
    @Project TP1 
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Création et manipulation d'une pile d'entiers et d'une fonction de renversement de tableau.
*/

#include "ex2.h"
#include <stdio.h>

int main() {

    // Test : initialisation de la pile d'entiers
    Stack pile;
    initStack(&pile);

    // Test : ajout d'entiers dans la pile
    empiler(&pile, 10);
    empiler(&pile, 20);
    empiler(&pile, 30);

    // Test : afficher l'élément au sommet de la pile
    printf("Sommet de la pile: %d\n", consulterSommet(&pile)); 

    // Test : retirer un élément de la pile
    printf("Élément retiré: %d\n", depiler(&pile));
    printf("Sommet de la pile après retrait: %d\n", consulterSommet(&pile));

    // Libération de la mémoire en dépilant tous les éléments restants
    while (!estVide(&pile)) { 
        depiler(&pile);
    }

    // Test : renverser et afficher un tableau d'entiers
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    renverserEtAfficher(tableau, taille);

    return 0;
}
