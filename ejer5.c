#include <stdio.h>
#include <string.h>
struct atleta {
char deporte[20];
char nombre [20];
char pais [20];
float noMedallas;
};
int main (){
    struct atleta imp[10];
    printf("registre a los atletas\n");
    for ( int i = 0; i <10; i++){
    printf ("ingrese el deporte del atleta: ");
    scanf("%s",&imp[i].deporte);
    printf ("ingrese el nombre del atleta: ");
    scanf("%s",&imp[i].nombre);
    printf ("ingrese el pais del atleta: ");
    scanf("%s",&imp[i].pais);
    printf ("ingrese el numero de medallas: ");
    scanf("%f",&imp[i].noMedallas);
    }
    // mostrar la informacion de 5 empleados 
    printf("informacion de los atletas \n");
    for ( int i =0; i <10; i++){
    printf("informacion del atleta \n");
    printf("deporte: %s\n",imp[i].deporte);
    printf("nombre:  %s\n",imp[i].nombre);
    printf("pais: %s\n",imp[i].pais);
    printf("medallas: %.2f\n",imp[i].noMedallas);

    }
    float menorSueldo = imp[0].noMedallas;
    int indice =0;
    for (int i=1; i<=10;i++){
        if (imp[i].noMedallas > menorSueldo){
            menorSueldo = imp[i].noMedallas;
            indice =i;
        }

    }
    printf("informacion del atleta \n");
    printf("deporte: %s\n",imp[indice].deporte);
    printf("nombre:  %s\n",imp[indice].nombre);
    printf("pais: %s\n",imp[indice].pais);
    printf("medallas: %.2f\n",imp[indice].noMedallas);

    return 0;
}