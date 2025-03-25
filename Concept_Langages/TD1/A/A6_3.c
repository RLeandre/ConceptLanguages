/*
    @Project TD1
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Programme implémentant le chiffrement de César utilisant ncurses pour terminal input/output
*/

#include <stdio.h>  /* printf et scanw */
#include <stdlib.h> /*malloc, free, rand, atoi*/
#include <string.h> /* manipulations de chaînes de caractères */
#include <ncurses.h> /* interface terminal ncurses */

/*
    @Function Description: 
    Cette fonction applique le chiffrement de César à un caractère donné en fonction d'une clé spécifiée.
    
    @Parameters:
    - char c: Le caractère à chiffrer. Ce caractère peut être une lettre majuscule ou minuscule.
    - int key: La clé de chiffrement (un entier). La clé détermine combien de positions le caractère sera décalé dans l'alphabet.

    @Returns:
    - char: Le caractère chiffré après application du décalage. Si le caractère n'est pas une lettre (majuscule ou minuscule), il est retourné inchangé.

    @Example:
    - chiffre_caesar('a', 3) -> 'd'
    - chiffre_caesar('z', 1) -> 'a'
    - chiffre_caesar('B', 2) -> 'D'

    @Note:
    - La fonction ignore les caractères non alphabétiques (espaces, chiffres, symboles).
    - Le décalage est effectué de manière circulaire, ce qui signifie que si le décalage dépasse 'z' ou 'Z', il recommence à 'a' ou 'A'.
*/
char chiffre_caesar(char c, int key) {
    // Si le caractère est une lettre minuscule
    if (c >= 'a' && c <= 'z') {
        return (c - 'a' + key) % 26 + 'a';  // Applique la clé et fait le modulo (ASCII -> alphabet) 26 pour le chiffrement
    }
    // Si le caractère est une lettre majuscule
    else if (c >= 'A' && c <= 'Z') {
        return (c - 'A' + key) % 26 + 'A';  // Applique la clé et fait le modulo (ASCII -> alphabet) 26 pour le chiffrement
    }
    else {
        return c;  // Si ce n'est ni une lettre minuscule ni majuscule, on ne modifie pas le caractère
    }
}

int main() {
    int key;  
    char c;   // Variable pour stocker chaque caractère entré par l'utilisateur

    initscr();     // Démarre l'interface ncurses
    raw();         // Mode raw pour que les touches soient lues immédiatement

    printw("Entrez la clé (un entier) : ");  
    scanw("%d", &key);  // Lecture de la clé (un entier)
    noecho();  // Désactive l'affichage des caractères pendant la saisie

    // Demander à l'utilisateur de saisir un mot à chiffrer
    printw("\nEntrez un mot à chiffrer (appuyez sur Entrée pour terminer) : ");
    refresh();  // Affiche immédiatement le message

    // Lire le mot et chiffrer chaque caractère au fur et à mesure
    while (true) {
        c = getch();  // Lecture du caractère saisi par l'utilisateur

        if (c == '\n') {  // Si la touche est Entrée, on termine la saisie
            break;
        }

        // Chiffrement du caractère saisi
        char chiffré = chiffre_caesar(c, key);
        printw("%c", chiffré);  // Affiche le caractère chiffré immédiatement
        refresh();  // Met à jour l'écran
    }

    // Afficher le message de fin
    printw("\nChiffrement terminé.\n");
    refresh();  // Affiche le message final
    getch();  // Attends que l'utilisateur appuie sur une touche pour terminer

    // Terminer le mode ncurses
    endwin();  // Fermeture propre de ncurses et retour à l'interface terminal classique

    return 0;  // Retourne 0 pour indiquer que le programme s'est exécuté correctement
}

/* gcc -o A6_3 A6_3.c -lncurses */
