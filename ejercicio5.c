#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int calif ;
    printf("Introduce la calificacion: ");
    scanf("%i", &calif);
    switch(calif){
        case 1: printf("Muy deficiente\n"); break;
        case 2: printf("Insuficiente\n"); break;
        case 3: printf("Insuficiente\n"); break;
        case 4: printf("Insuficiente\n"); break;
        case 5: printf("Suficiente\n"); break;
        case 6: printf("Bien\n"); break;
        case 7: printf("Notable\n"); break;
        case 8: printf("Notable\n"); break;
        case 9: printf("Sobresaliente\n"); break;
        case 10: printf("Sobresaliente\n"); break;
        default: printf("Calificacion no valida\n");


    }
}