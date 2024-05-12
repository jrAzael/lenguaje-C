/*
calcular tarifas de saldo de celulares 
y oner precios 
de 1000 a 1500 premiun 
de 500 a 999 intermedia 
de 100 a 499 basica
// solo con if anidados 
*/
#define tarifa3 "premium"
#define tarifa2 "intermedia"
#define tarifa1 "basica"

#include <stdio.h>

int main (){
int precio ;
printf ("ingresa tu presupuesto\n");
scanf("%i",&precio);

if (precio>99 && precio <500 ){
    printf ("tu tarifa es de %s\n",tarifa1);
}
if (precio>=500 && precio <1000 ){
    printf ("tu tarifa es de %s\n",tarifa2);
}
if (precio>=1000 && precio <=1500 ){
    printf ("tu tarifa es  %s\n",tarifa3);
}
return 0;
}