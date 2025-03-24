#include <stdio.h>
#include <stdlib.h>
#define NB 100
int* fonctionX(){
    int tab[NB] = { 0 };
    //...
    return tab;
}
    int main(){
    int* t = fonctionX();
    for (int i = 0; i < NB; i++){
        t[i] = rand() % 100;
        printf("t[%d]=%d\n", i, t[i]); // accès à une zone mémoire non valide, "Segmentation fault"
    }
    return 0;
}




#include <stdio.h>
int *fun(){
    int x = 5;
    return &x;
    // x est une varuable locale et seras détruite à la fin de la fonction 
}
int main(){
    int *p = fun(); //p pointe vers une zone mémoire non valide 
    fflush(stdin);
    printf("%d\n", *p); // accès à cette zone mémoire non valide, "Segementation fault" 
    return 0;
}