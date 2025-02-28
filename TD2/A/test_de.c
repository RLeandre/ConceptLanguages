#include "de.h"

int main() {
    int nb_des;
    int des[4];

    init_random();

    // Demander le nombre de dés
    nb_des = afficher_menu();

    if (nb_des < 1 || nb_des > 4) {
        printf("Choix invalide !\n");
        return 1;
    }

    // Lancer les dés
    lancer_des(des, nb_des);

    // Afficher les dés
    printf("Résultat des dés : ");
    for (int i = 0; i < nb_des; i++) {
        printf("%d ", des[i]);
    }
    printf("\n");
    
    // Calculer et afficher le score
    int total = calculer_score(des, nb_des);
    afficher_res(total, nb_des);

    return 0;
    
}
