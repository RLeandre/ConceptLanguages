/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Test l'erreur StackOverlow
*/

#include <stdio.h>

void stackOverflow() {
    int largeArray[10000];  // Utilisation excessive de la pile
    printf("Adresse de largeArray: %p\n", (void *)largeArray);
    stackOverflow();  // Appel récursif sans fin
}

int main() {
    stackOverflow();
    return 0;
}
