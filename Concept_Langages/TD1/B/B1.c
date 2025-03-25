
#include <stdio.h>
#include <stdlib.h>

#define NB 100

int* fonctionX(){
    int tab[NB] = { 0 };
    //...
    return tab; 
    // tab est une variable locale et seras détruite à la fin de la fonction 
}
int main(){
    int* t = fonctionX(); // pointe vers une zone mémoire non valide 
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
    // x est une variable locale et seras détruite à la fin de la fonction 
}
int main(){
    int *p = fun(); //p pointe vers une zone mémoire non valide 
    fflush(stdin);
    printf("%d\n", *p); // accès à cette zone mémoire non valide, "Segementation fault" 
    return 0;
}


void main() {
    int *ptr;
    //...
    {
      int x = 5;
      ptr = &x; 
      // x est une variable locale et sera détruite à la fin
    }
    //...
    printf("%d\n", *ptr); // Accès à une zone de mémoire non valide. Erreur type : Segmentation fault
  }

  #include <stdio.h>



void main() {
  int *piDat;

  *piData = 10; // piData n'est pas initialisé, et on essaie de mettre une valeur à l'intérieur. Erreur type : Segmentation fault

  printf("%d\n", *piData); 
}




int main() {

  int *piData = NULL;

  piData = malloc(sizeof(int) * 10); 

  if (piData == NULL) {
    return -1;
  }

  free(piData);

  free(piData); 
  // piData a déjà été libéré. Erreur type : double free or corruption

  return 0;
}



int main() {
  int *piBuffer = NULL;

  int n = 10;

  piBuffer = malloc(sizeof(int) * n);

  if (piBuffer == NULL) {
    fprintf(stderr, "Out of memory!\n");
    exit(1);
  }

  printf("Size of allocated array is %d\n", sizeof(piBuffer)); 
  // sizeof(piBuffer) est la taille du pointeur, pas de la zone mémoire allouée

  free(piBuffer);

  return 0;
}