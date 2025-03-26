#ifndef EX2_H
#define EX2_H

#include <stdbool.h>

// Définition d'un nœud de la pile
typedef struct Node {
    int nb;
    struct Node* next;
} Node;

// Définition de la pile
typedef struct Stack {
    Node* top;
} Stack;

// Fonctions de manipulation de la pile
void initialiserPile(Stack* pile);   // Initialisation de la pile
bool estVide(Stack* pile);           // Vérifier si la pile est vide
void empiler(Stack* pile, int valeur); // Empiler un entier dans la pile
int consulterSommet(Stack* pile);     // Consulter le sommet de la pile
int depiler(Stack* pile);             // Dépiler un entier
void renverserEtAfficher(int* tableau, int taille); // Renverser et afficher une liste d'entiers

#endif // EX2_H
