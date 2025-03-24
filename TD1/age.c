#include <stdio.h>

int main() {
    int ageLu;
    
    printf("Entrez votre âge : ");
    if (scanf("%d", &ageLu) != 1) {
        printf("Erreur : Vous devez entrer un nombre entier.\n");
        return 1;
    }

    printf("Vous avez %d ans.\n", ageLu);
    return 0;
}
