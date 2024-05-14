#include <stdio.h>
/* selciionar el tipo de vehiculo eh indicar el peaje a pagar
segun un valor numerico
1 turismo, peaje $500
2 autobus, peaje $3000
3 motocicleta, peaje $300
caso  contrario vehiculo no autorizado
*/
int main (){
    int vehiculo;
    printf ("Ingrese el tipo de vehiculo:");
    printf ("1 turismo, 2 autobus, 3 motocicleta:");   
    scanf ("%d", &vehiculo);
    switch (vehiculo){
        case 1:
        printf ("Peaje a pagar $500\n");
        break;
        case 2:
        printf ("Peaje a pagar $3000\n");
        break;
        case 3:
        printf ("Peaje a pagar $300\n");
        break;
        default:
        printf ("vehiculo no autorizado\n");
    }

}