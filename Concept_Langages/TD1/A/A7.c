/*
    @Project TD1
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Programme permettant de convertir un int en chiffre romains
*/

#include <stdio.h> /* printf, scanf */

void int_romain(int nombre) {
    int valeurs[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *nb_romains[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    for (int i = 0; i < 13; i++) {
        while (nombre >= valeurs[i]) {
            printf("%s", nb_romains[i]);
            nombre -= valeurs[i]; /* Algorithme Glouton*/
        }
    }
    printf("\n");
}

int main() {
    int nombre;

    printf("Entrez un nombre : ");

    scanf("%d", &nombre);

    int_romain(nombre);

    return 0;
}
/* gcc -o A7 A7.c */