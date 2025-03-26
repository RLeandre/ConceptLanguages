/*
    @Project TP1 
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Création et manipulation d'une liste chaînée d'entiers
*/

#include <stdio.h>  /* pour les fonctions printf et scanf */
#include <stdlib.h> /* pour malloc, free, rand, atoi */
#include "listeint.h"

/*
    Affiche le menu des options disponibles.
    @input : void
    @output : int, choix de l'utilisateur
*/
int menu() {

    int choix = 0;

    printf("1. Créer une liste d'entiers compris entre 0 et 20, avec une taille aléatoire entre 1 et 20\n"
           "2. Ajouter un élément entier aléatoire (compris entre 0 et 20) en tête de liste\n"
           "3. Insérer un élément entier aléatoire dans sa position appropriée dans la liste (ordre croissant)\n"
           "4. Supprimer l'élément de tête\n"
           "5. Supprimer tous les éléments ayant une valeur donnée\n"
           "6. Détruire la liste\n"
           "7. Sauvegarder la liste courante en binaire dans le fichier \"saveliste.bin\"\n"
           "8. Charger une liste depuis le fichier \"saveliste.bin\"\n");

    scanf("%d", &choix);
    rewind(stdin); 

    return choix;
}


int main() {

    maillon_int *premier = NULL;

    maillon_int *nouveau; 
    
    int fin = 0;
    int i, nb;

    srand((unsigned)time(NULL));
    
    // Boucle principale jusqu'à la fin du programme
    while (!fin) {
        i = menu();  // Affiche le menu et récupère le choix de l'utilisateur
        
        if (i == 1) { // Créer une liste de taille aléatoire
            nb = rand() % 20 + 1;
            for (int j = 0; j < nb; j++) {
                nouveau = init_elt();  // Crée un nouvel élément
                ajout_tete_v3(&premier, nouveau);  // Ajoute cet élément en tête de liste
            }
            parcourir(premier);  // Affiche la liste après ajout des éléments
        } 
        else if (i == 2) { // Ajouter un élément entier aléatoire en tête de liste
            nouveau = init_elt();  // Crée un nouvel élément
            if (ajout_tete_v3(&premier, nouveau) == 0)
                parcourir(premier);  // Affiche la liste après ajout
            else
                printf("Erreur lors de l'ajout en tête de liste\n");
        } 
        else if (i == 3) { // Insérer un élément entier aléatoire dans sa place dans la liste (ordre croissant)
            nouveau = init_elt();  // Crée un nouvel élément
            inserer2(&premier, nouveau);  // Insère l'élément à sa place dans la liste
            parcourir(premier);  // Affiche la liste après insertion
        } 
        else if (i == 4) { // Supprimer l'élément de tête
            supprimer_debut(&premier);  // Supprime l'élément en tête de liste
            parcourir(premier);  // Affiche la liste après suppression
        } 
        else if (i == 5) { // Supprimer un élément ayant une valeur donnée
            printf("Valeur à supprimer : ");
            scanf("%d", &nb);  // Demande la valeur à supprimer
            supprime_elt(&premier, nb);  // Supprime l'élément avec la valeur spécifiée
            parcourir(premier);  // Affiche la liste après suppression
        } 
        else if (i == 6) { // Détruire la liste
            detruire_liste(&premier);  // Détruit toute la liste
            parcourir(premier);  // Affiche la liste après destruction (devrait être vide)
        } 
        else if (i == 7) { // Sauvegarder la liste
            sauver_liste(premier);  // Sauvegarde la liste dans un fichier binaire
        } 
        else if (i == 8) { // Charger une liste depuis un fichier
            premier = load_liste();  // Charge la liste depuis le fichier binaire
            parcourir(premier);  // Affiche la liste après chargement
        } 
        else {  // Si l'utilisateur entre une option invalide
            fin = 1;  // Met fin au programme
        }
    }

    return 0;
}
