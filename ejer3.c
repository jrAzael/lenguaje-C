#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    char *arreglo = (char *)malloc(n * sizeof(char));
    for (int i = 0; i < n; i++){
        printf("Ingrese el valor del elemento %d: ", i);
        scanf(" %c", &arreglo[i]);
    }
    for (int i = n-1; i >= 0; i--){
        printf("Elemento %d: %c\n", i, arreglo[i]);
    }
    free(arreglo);
    return 0;
}
//investigar el sistema de interpolacion de newton, lagranch , los sistemas de furier, y tambien investigar como detectar matematicamente la huella digital
