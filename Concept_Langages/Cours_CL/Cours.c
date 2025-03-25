#include <stdio.h>


int main() {
    char C = 'a';
    int A = 256;
    int B = 129;    
    printf("Adresse de c = %p\n", (void*)&C);
    printf("code ASCII du caractere %c = %i\n", C, C);
    printf("Adresse de a = %p\n", (void*)&A);
    printf("Adresse de b = %p\n", (void*)&B);

    int *pt = NULL;
    *pt = 10;
    printf("%p\n",pt);
    printf("%d\n",*pt);
    return 0;
}
