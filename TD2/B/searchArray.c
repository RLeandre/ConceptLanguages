#include "searchArray.h"

int searchArray(int* array, int size, int element) {
    if (array == NULL) {
        return -1;  // Code d'erreur si le tableau n'existe pas
    }

    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;  // Retourne l'indice de l'élément trouvé
        }
    }

    return -1;  // Retourne -1 si l'élément n'est pas trouvé
}
