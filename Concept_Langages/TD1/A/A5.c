/*
    @Project TD1
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Macro pour scanf + printf
*/


#include <stdio.h> /*prints et scans*/

#define pscanf(msg, format, var) do { \
    printf("%s", msg); \
    scanf(format, var); \
} while(0)
/*do while évite les erreurs dans if else*/

int main() {
    int age;
    char initial;

    pscanf("Entrez votre âge : ", "%d", &age);

    pscanf("Entrez votre initiale : ", " %c", &initial);  

    printf("Vous avez %d ans et votre initiale est '%c'.\n", age, initial);

    return 0;
}

/*gcc -o A5 A5.c*/
/* gcc -E A5.c -o A5.i */
