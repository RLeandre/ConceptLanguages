/*
A)

1)
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Wrong usage, at least 2 parameters expected only given %d\n", argc);
        return 0;
    }
    int sum = 0;
    for (int i=1;i<argc;i++) {
        int test = atoi(argv[i]);
        if (test == 0 && argv[i][0] != '0'){ 
            printf("There is a problem with args %d (%s). It could not be transformed in int. Please retry !", i, argv[i]);
            return 0;
        }
        
        sum += test;
        
    }
    printf("%d\n", sum);
    return 0;
}

/*
2) 

a: (Nlv + Nf + Nm + Np)/4 > 10 
b: Nm > (Nlv + Nf + Nm + Np)/4 && Nf > (Nlv + Nf + Nm + Np)/4
c: Nlv > 10 || Nm > 10 || Nf > 10 || Np > 10 
d: Nlv > 10 && Nm > 10 && Nf > 10 && Np > 10 
e: (Nlv + Nf)/2 > 10 || (Np + Nm)/2 > 10 
f : (Nlv + Nf + Nm + Np)/4 >= 10 && !((Nlv + Nf)/2 > 10 && (Np + Nm)/2 > 10 )
*/

