#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

    int i [10], x;
    float f [10], y;

    int main (void){
        printf("\tEntero\t\tFlotante\n\n");
        for (x=0; x<10; x++){
            printf("Elemento %d:\t%d\t\t%d\n", x, &i[x], &f[x]);

        }
        return 0;

    }
