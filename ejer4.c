#include <stdio.h>
#include <string.h>
struct empleado{
char nombre[50];
char sexo [20];
float sueldo;
};
int main (){
    int cant;
    printf("cuantos empleados va registrar: \n");
    scanf("%d",&cant);
    struct empleado ret[cant];
    printf("registre a los empleados\n");
    for ( int i = 0; i <cant; i++){
            printf ("ingrese el nombre del empleado: ");
    scanf("%s",&ret[i].nombre);

    printf ("ingrese el sexo del empleado: ");
    scanf("%s",&ret[i].sexo);

    printf ("ingrese el sueldo del empleado: ");
    scanf("%f",&ret[i].sueldo);
    }
    // mostrar la informacion de 5 empleados 
    printf("informacion de los empleados \n");
    for ( int i =0; i <5; i++){
    printf("nombre: %s\n",ret[i].nombre);
    printf("sexo:  %s\n",ret[i].sexo);
    printf("sueldo: %.2f\n",ret[i].sueldo);
    }
    float menorSueldo = ret[0].sueldo;
    int indice =0;
    for (int i=1; i<=cant;i++){
        if (ret[i].sueldo < menorSueldo){
            menorSueldo = ret[i].sueldo;
            indice =i;
        }

    }
    printf("empleado con menor sueldo \n");
    printf("nombre: %s\n",ret[indice].nombre);
    printf("sexo:  %s\n",ret[indice].sexo);
    printf("sueldo: %.2f\n",ret[indice].sueldo);
    return 0;
}