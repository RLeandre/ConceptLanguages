#include "ex2.h"
#include <stdio.h>
#include <stdlib.h>

// Initialiser la pile
void initialiserPile(Stack* pile) {
    pile->top = NULL;
}

// Vérifier si la pile est vide
bool estVide(Stack* pile) {
    return pile->top == NULL;
}

// Empiler un élément dans la pile
void empiler(Stack* pile, int valeur) {
    Node* nouveau = (Node*)malloc(sizeof(Node));
    if (nouveau == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return;
    }
    nouveau->nb = valeur;
    nouveau->next = pile->top;
    pile->top = nouveau;
}

// Consulter le sommet de la pile
int consulterSommet(Stack* pile) {
    if (estVide(pile)) {
        printf("Erreur : La pile est vide\n");
        return -1;
    }
    return pile->top->nb;
}

// Dépiler un élément
int depiler(Stack* pile) {
    if (estVide(pile)) {
        printf("Erreur : Impossible de dépiler, la pile est vide\n");
        return -1;
    }
    Node* temp = pile->top;
    int valeur = temp->nb;
    pile->top = temp->next;
    free(temp);
    return valeur;
}

// Fonction pour renverser et afficher un tableau
void renverserEtAfficher(int* tableau, int taille) {
    printf("Tableau original : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Utilisation d'une pile pour inverser le tableau
    Stack pile;
    initialiserPile(&pile);
    for (int i = 0; i < taille; i++) {
        empiler(&pile, tableau[i]);
    }
    printf("Tableau inversé : ");
    for (int i = 0; i < taille; i++) {
        tableau[i] = depiler(&pile);
        printf("%d ", tableau[i]);
    }
    printf("\n");
}
