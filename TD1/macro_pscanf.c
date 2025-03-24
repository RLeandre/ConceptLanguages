#include <stdio.h>

#define pscanf(msg, format, var) do { \
    printf("%s", msg); \
    scanf(format, var); \
} while(0)


int main() {
    int age;
    char initial;

    pscanf("Entrez votre âge : ", "%d", &age);

    pscanf("Entrez votre initiale : ", " %c", &initial);  

    printf("Vous avez %d ans et votre initiale est '%c'.\n", age, initial);

    return 0;
}
