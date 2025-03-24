#include <stdio.h>
#include <stdlib.h>

void swap_int(void* p1, void* p2, size_t size) {

        void * p3  = malloc(sizeof(p1));
        *p3 = *p1;
        *p1 = *p2;
        *p2 = *p3;
    
    
}

int main() {
    int v1 = 10;
    int v2 = 20;

    printf("valeur avant échange de v1 : %d et v2 : %d\n", v1,v2);
    if (sizeof(v1) == sizeof(v2)) {
        swap_int(&v1,&v2,sizeof(v1));
    } else {
        printf("Utilisez des variables de mêmes types !");
    }
    printf("valeur après échange de v1 : %d et v2 : %d\n", v1,v2);

    char c1 = 'A';
    char c2 = 'B';

    printf("valeur avant échange de c1 : %d et c2 : %d\n", c1,c2);
    if (sizeof(c1) == sizeof(c2)) {
        swap_int(&c1,&c2,sizeof(c1));
    } else {
        printf("Utilisez des variables de mêmes types !");
    }
    printf("valeur après échange de v1 : %d et v2 : %d\n", c1,c2);


    double f1 = 10.5;
    double f2 = 20.2;

    printf("valeur avant échange de d1 : %f et d2 : %f\n", f1,f2);
    if (sizeof(f1) == sizeof(f2)) {
        swap_int(&f1,&f2,sizeof(f1));
    } else {
        printf("Utilisez des variables de mêmes types !");
    }
    printf("valeur après échange de d1 : %d et d2 : %d\n", f1,f2);

}