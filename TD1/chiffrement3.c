#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>

// Fonction de chiffrement de César
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

int main() {
    int key;
    char c;

    // Initialisation de ncurses
    initscr();
    raw();  // Mode raw pour que les touches soient lues immédiatement
    keypad(stdscr, TRUE); // Pour gérer les touches spéciales

    // Demander la clé
    printw("Entrez la clé (un entier) : ");
    refresh();
    scanw("%d", &key);  // Lecture directe d'un entier
    noecho();  // Désactiver à nouveau l'affichage

    // Demander à saisir le mot
    printw("\nEntrez un mot à chiffrer (appuyez sur Entrée pour terminer) : ");
    refresh();  // Afficher immédiatement

    // Lire le mot et chiffrer chaque caractère au fur et à mesure
    while (true) {
        c = getch();  // Lecture du caractère

        if (c == '\n') {  // Si c'est la touche Enter, on termine
            break;
        }

        char chiffré = chiffre_caesar(c, key);
        printw("%c", chiffré);  // Afficher le caractère chiffré immédiatement
        refresh();  // Mettre à jour l'écran
    }

    printw("\nChiffrement terminé.\n");
    refresh();  // Afficher le message final
    getch();  // Attendre que l'utilisateur appuie sur une touche

    // Terminer ncurses
    endwin();
    return 0;
}

