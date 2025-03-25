/*
    @Project TD1
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Programme pour lire plusieurs chars
*/

#include <stdio.h> /*prints et scans*/

int main() {
    char c1, c2, c3;  

    printf("Entrez trois caractères : ");
    scanf("%c %c %c", &c1, &c2, &c3);  

    printf("Vous avez saisi : '%c', '%c', '%c'\n", c1, c2, c3);

    return 0;
}

/*gcc -o A4 A4.c*/