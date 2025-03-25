/*
    @Project TD1
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Programme implémentant le chiffrement et déchiffrement de César
*/

#include <stdio.h>  /* printf, scanf */
#include <stdlib.h> /* malloc, free, atoi */
#include <string.h> /* Manipulations de chaînes de caractères */

/*
    @Function Description:
    Cette fonction applique le chiffrement de César à un caractère donné selon une clé spécifiée.
    
    @Parameters:
    - char c: Le caractère à chiffrer (lettre majuscule ou minuscule).
    - int key: La clé de chiffrement (entier définissant le décalage).

    @Returns:
    - char: Le caractère chiffré après application du décalage.
    - Les caractères non alphabétiques restent inchangés.
*/
char chiffre_caesar(char c, int key) {
    if (c >= 'a' && c <= 'z') {
        return (c - 'a' + key) % 26 + 'a';  // Décalage circulaire pour les minuscules
    }
    else if (c >= 'A' && c <= 'Z') {
        return (c - 'A' + key) % 26 + 'A';  // Décalage circulaire pour les majuscules
    }
    else {
        return c;  // Aucun changement pour les autres caractères
    }
}

/*
    @Function Description:
    Cette fonction applique le déchiffrement de César à un caractère donné selon une clé spécifiée.
    
    @Parameters:
    - char c: Le caractère à déchiffrer (lettre majuscule ou minuscule).
    - int key: La clé de chiffrement utilisée pour retrouver le texte original.

    @Returns:
    - char: Le caractère déchiffré.
    - Les caractères non alphabétiques restent inchangés.
*/
char dechiffre_caesar(char c, int key) {
    if (c >= 'a' && c <= 'z') {
        return (c - 'a' - key + 26) % 26 + 'a';  // Décalage circulaire inverse pour les minuscules
    }
    else if (c >= 'A' && c <= 'Z') {
        return (c - 'A' - key + 26) % 26 + 'A';  // Décalage circulaire inverse pour les majuscules
    }
    else {
        return c;  // Aucun changement pour les autres caractères
    }
}

int main() {
    int key;  // Variable stockant la clé de chiffrement
    char mot[100];  // Tableau de caractères pour stocker le mot à chiffrer
    char chiffré[100]; // Tableau pour stocker le texte chiffré
    int i;

    // Demander la clé à l'utilisateur
    printf("Entrez la clé (un entier) : ");
    scanf("%d", &key);

    // Demander le mot à chiffrer
    printf("Entrez un mot à chiffrer : ");
    scanf("%s", mot); // un tableau est déjà une adresse mémoire (pointeur)

    int len = strlen(mot); // Longueur du mot

    // Affichage du mot chiffré
    printf("Texte chiffré : ");
    for (i = 0; i < len; i++) {
        chiffré[i] = chiffre_caesar(mot[i], key);  // Appliquer le chiffrement et stocker dans le tableau chiffré
        printf("%c", chiffré[i]);
    }
    printf("\n");

    // Affichage du mot déchiffré
    printf("Texte déchiffré : ");
    for (i = 0; i < len; i++) {
        char dechiffré = dechiffre_caesar(chiffré[i], key);  // Appliquer le déchiffrement
        printf("%c", dechiffré);
    }
    printf("\n");

    return 0;
}

/* gcc -o A6_2 A6_2.c */
