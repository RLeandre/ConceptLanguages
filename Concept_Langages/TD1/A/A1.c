/*
    @Project TD1
    @Author Raeth Léandre
    @Created 2025
    @Program Description : Program pour faire la somme des paramètres passés en console
*/

#include <stdio.h> /*prints et scans*/
#include <stdlib.h> /*malloc, free, rand, atoi*/

int main(int argc, char* argv[]) {
    if (argc < 3) { /*Vérifie le nombre d'arguments*/
        printf("Mauvaise utilisation, 2 paramètres sont attendus, vous en avez donnez que %d\n", argc);
        return 0;
    }

    int sum = 0;

    for (int i=1; i<argc; i++) {
        int test = atoi(argv[i]); /*converti l'argument en int, si cela retourne 0, l'entier n'est pas valide*/
        if (test == 0 && argv[i][0] != '0'){ 
            printf("Il y a un problème avec l'argument %d (%s). Il n'as pas pu être trasnformer en int. réessayer !", i, argv[i]);
            return 0;
        }
        
        sum += test;
        
    }

    printf("%d\n", sum);
    return 0;
}

/*gcc -o A1 A1.c*/

/*
2) 

a: (Nlv + Nf + Nm + Np)/4 > 10 
b: Nm > (Nlv + Nf + Nm + Np)/4 && Nf > (Nlv + Nf + Nm + Np)/4
c: Nlv > 10 || Nm > 10 || Nf > 10 || Np > 10 
d: Nlv > 10 && Nm > 10 && Nf > 10 && Np > 10 
e: (Nlv + Nf)/2 > 10 || (Np + Nm)/2 > 10 
f : (Nlv + Nf + Nm + Np)/4 >= 10 && !((Nlv + Nf)/2 > 10 && (Np + Nm)/2 > 10 )

*/

