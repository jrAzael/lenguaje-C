#include <stdio.h>
#include <string.h>
struct empleado{
char nombre[50];
char sexo [20];
float sueldo;
};
int main (){
    // declarar eh inicializar la variable de empleado
    struct empleado emple;
    // solicitar y almacenar la informcion
    printf ("ingrese el nombre del empleado: ");
    scanf("%s",&emple.nombre);

    printf ("ingrese el sexo del empleado: ");
    scanf("%s",&emple.sexo);

    printf ("ingrese el sueldo del empleado: ");
    scanf("%f",&emple.sueldo);
    // mostrar la informacion del empleado
    printf("informacion del empleadoo \n");
    printf("nombre: %s\n",emple.nombre);
    printf("sexo:  %s\n",emple.sexo);
    printf("sueldo: %.2f\n",emple.sueldo);
    
    return 0;

}
