#include <stdio.h>
#include <stdlib.h>


int main() { 
    int e1 = 10;
    int e2 = 20;

    void * p1 = &e1;
    void * p2 = &e2;
    void * p3 = NULL; 

    
    p3 = (int*)malloc(sizeof(int));

    *(int*)p3 = *(int*)p1; 
    *(int*)p1 = *(int*)p2;
    *(int*)p2 = *(int*)p3;

 
    printf("valeur échangé de e1 : %d et e2 : %d\n", e1,e2);
    free(p3);
    return 0;




}