
/*
    @Project TD2
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Test la fonction de recherche dans une liste
*/

#include <stdio.h>
#include <stdlib.h>
#include "searchArray.h"

int main() {
    // Test avec un tableau statiquement alloué
    int staticArray[] = {1, 3, 5, 7, 9};
    int staticSize = sizeof(staticArray) / sizeof(staticArray[0]);
    int elementToSearch = 5;

    printf("Recherche dans le tableau statique:\n");
    int resultStatic = searchArray(staticArray, staticSize, elementToSearch);
    if (resultStatic != -1) {
        printf("Élément trouvé à l'indice %d\n", resultStatic);
    } else {
        printf("Élément non trouvé dans le tableau\n");
    }

    // Test avec un tableau dynamiquement alloué
    int* dynamicArray = (int*)malloc(5 * sizeof(int));  // Allocation dynamique
    if (dynamicArray == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return 1;
    }
    dynamicArray[0] = 10;
    dynamicArray[1] = 20;
    dynamicArray[2] = 30;
    dynamicArray[3] = 40;
    dynamicArray[4] = 5;

    int dynamicSize = 5;
    printf("\nRecherche dans le tableau dynamique:\n");
    int resultDynamic = searchArray(dynamicArray, dynamicSize, elementToSearch);
    if (resultDynamic != -1) {
        printf("Élément trouvé à l'indice %d\n", resultDynamic);
    } else {
        printf("Élément non trouvé dans le tableau\n");
    }

    // Libérer la mémoire allouée dynamiquement
    free(dynamicArray);

    return 0;
}
