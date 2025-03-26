/*
    @Project TP1 
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Création et manipulation d'une liste chaînée d'entiers
*/

#ifndef LISTEINT_H
#define LISTEINT_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structure d'un maillon de la liste chaînée
typedef struct maillon
{
    int val;  // Valeur du maillon
    struct maillon *p_suiv;  // Pointeur vers le suivant
} maillon_int;

/*
    Ajoute un élément en tête de liste
*/
int ajout_tete_v3(maillon_int **p_p_tete, maillon_int *p_nv_elt);

/*
    Crée un élément avec une valeur aléatoire
*/
maillon_int *init_elt();

/*
    Affiche tous les éléments de la liste
*/
void parcourir(maillon_int *p_tete);

/*
    Insère un élément en début de liste
*/
maillon_int *inserer1(maillon_int *p_tete, maillon_int *p_nv_elt);

/*
    Insère un élément dans la liste en ordre croissant
*/
void inserer2(maillon_int **prem, maillon_int *e);

/*
    Supprime le premier élément de la liste
*/
void supprimer_debut(maillon_int **prem);

/*
    Supprime un élément de la liste par valeur
*/
void supprime_elt(maillon_int **prem, int nb);

/*
    Détruit la liste entière
*/
void detruire_liste(maillon_int **prem);

/*
    Sauve la liste dans un fichier binaire
*/
void sauver_liste(maillon_int *prem);

/*
    Charge une liste depuis un fichier binaire
*/
maillon_int *load_liste();

#endif // LISTEINT_H
