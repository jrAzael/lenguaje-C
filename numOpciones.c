// menu
#include <stdio.h>
int main()
{
    int numero, opcion, cubo;
    printf("\tMENU");
    printf("\n1.cubo de un numero");
    printf("\n2.numero par o impar");
    printf("\n3.salir");
    printf("\nOpcion:");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Ingrese un numero:");
        scanf("%d", &numero);
        cubo = numero * numero * numero;
        printf("El cubo de %d es %d\n", numero, cubo);
        break;
    case 2:
        printf("Ingrese un numero:");
        scanf("%d", &numero);
        if (numero % 2 == 0)
        {
            printf("El numero %d es par\n", numero);
        }
        else
        {
            printf("El numero %d es impar\n", numero);
        }
        break;
    case 3:
        printf("Saliendo del programa\n");
        break;
    default:
        printf("Opcion no valida\n");
    }
}