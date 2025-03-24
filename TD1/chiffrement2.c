#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char chiffre_caesar(char c, int key) {
    if (c >= 'a' && c <= 'z') {
        return (c - 'a' + key) % 26 + 'a';
    }
    else if (c >= 'A' && c <= 'Z') {
        return (c - 'A' + key) % 26 + 'A';
    }
    else {
        return c;
    }
}

char dechiffre_caesar(char c, int key) {
    if (c >= 'a' && c <= 'z') {
        return (c - 'a' - key + 26) % 26 + 'a';
    }
    else if (c >= 'A' && c <= 'Z') {
        return (c - 'A' - key + 26) % 26 + 'A';
    }
    else {
        return c;
    }
}

int main() {
    int key;
    char mot[100]; 
    int i;

    printf("Entrez la clé (un entier) : ");
    scanf("%d", &key);


    printf("Entrez un mot à chiffrer : ");
    scanf("%s", mot);


    int len = strlen(mot);

    for (i = 0; i < len; i++) {
        char chiffré = chiffre_caesar(mot[i], key);
        printf("%c", chiffré);
    }

    printf("\n");

    return 0;
}
