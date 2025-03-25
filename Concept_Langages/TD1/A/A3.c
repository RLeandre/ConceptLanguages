/*
    @Project TD1
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Program pour demander l'âge et l'afficher
*/

#include <stdio.h> /*prints et scans*/

int main() {

    int ageLu;
    
    printf("Entrez votre âge : ");

    if (scanf("%d", &ageLu) != 1) { /*le nombre n'est pas entier*/
        printf("Erreur : Vous devez entrer un nombre entier.\n");
        return 1;
    }

    printf("Vous avez %d ans.\n", ageLu);
    return 0;
}

/*gcc -o A3 A3.c*/
