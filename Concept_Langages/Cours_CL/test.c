#include <ncurses.h>

int main() {
    initscr();  // Initialise ncurses
    printw("Hello, ncurses!"); // Affiche le texte
    refresh();  // Met à jour l'affichage
    getch();    // Attend une touche
    endwin();   // Quitte ncurses
    return 0;
}
