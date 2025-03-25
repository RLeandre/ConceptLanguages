/*
    @Project TP1 
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Création et manipulation d'une pile et d'une liste chaînée d'entiers
*/

#ifndef EX2_H
#define EX2_H

#include <stdbool.h>

// Définition de la structure représentant un nœud de la pile
/*
    Structure représentant un nœud dans la pile
    @member nb : entier stocké dans le nœud
    @member next : pointeur vers le nœud suivant
*/
typedef struct Node {
    int nb;
    struct Node* next;
} Node;

/*
    Structure représentant la pile
    @member top : pointeur vers le nœud situé au sommet de la pile
*/
typedef struct Stack {
    Node* top;
} Stack;

// Déclarations des fonctions liées à la pile
void initStack(Stack* stack);      // Initialisation de la pile
bool isEmpty(Stack* stack);        // Vérification si la pile est vide
void push(Stack* stack, int value); // Empilage d'un entier dans la pile
int peek(Stack* stack);            // Accès au sommet de la pile
int pop(Stack* stack);             // Dépiler un entier
void reverseAndPrint(int* array, int size); // Renverser et afficher une liste d'entiers

#endif // EX2_H
