#include <stdio.h>

void menu() {
    int a, b;
    printf("introduce la base del triangulo:");
    scanf("\n%d",&b);
    printf("introduce la altura del triangulo: ");
    scanf("\n%d",&a);
    float resultado= (a*b)/2;
    printf("el area del triangulo de base %d y altura %d es:%.1f\n",b,a,resultado);
    return;
}

int main() {

        menu();

}