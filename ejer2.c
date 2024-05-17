#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        printf("Ingrese el valor del elemento %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        printf("Elemento %d: %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}


