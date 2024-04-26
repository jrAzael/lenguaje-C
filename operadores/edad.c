#include <stdio.h>
int main ()

{
// Declaracion de variable
char nombre[20];
int a_actual, a_nac, edad;

// Entrada de datos

printf ("\n ingrese su nombre:");
scanf ("%s", nombre);
printf ("\n Ingrese el año de su nacimiento:");
scanf ("%d", & a_nac);
printf ("\n Ingrese el año actual:");
scanf ("%d", & a_actual);
// Proceso
edad= a_actual-a_nac;
// Salida
printf ("\n  Su Nombre es: %s", nombre);
printf ("\n  Su Edad actual es: %d", edad);
if (edad>=18)
{
printf (" Es mayor de Edad \n");
}
return 0;
// Fin del main
}