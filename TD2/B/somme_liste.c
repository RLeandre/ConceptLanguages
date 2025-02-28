#include "somme_liste.h"

int sommeListe(int *array, size_t size, int *computed_sum) {
    if (array == NULL || computed_sum == NULL) {
        return -1;  // Code d'erreur si pointeur NULL
    }

    *computed_sum = 0;
    for (size_t i = 0; i < size; i++) {
        *computed_sum += array[i];
    }

    return 0;  // Succès
}
