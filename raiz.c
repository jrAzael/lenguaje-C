//ingresar un numero si es positivo calcular la raiz cuadrada
//si es negativo indicar que tiene raiz imaginaria
#include <stdio.h>
#include <math.h>

int main (){
    int numero;
    float raiz;
    printf("Ingrese un numero:");
    scanf("%d",&numero);
    if (numero>=0){
        raiz=sqrt(numero);
        printf("La raiz cuadrada de %d es %.2f\n",numero,raiz);
    }else{
        printf("El numero %d tiene raiz imaginaria\n",numero);
    }
    return 0;
}