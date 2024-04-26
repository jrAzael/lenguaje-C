#include <stdio.h>
#include <string.h>
struct atleta {
char deporte[20];
char nombre [20];
char pais [20];
float noMedallas;
};
int main (){

    struct atleta imp;
    printf ("ingrese el deporte del atleta: ");
    scanf("%s",&imp.deporte);
    printf ("ingrese el nombre del atleta: ");
    scanf("%s",&imp.nombre);
    printf ("ingrese el pais del atleta: ");
    scanf("%s",&imp.pais);
    printf ("ingrese el numero de medallas: ");
    scanf("%f",&imp.noMedallas);
    
    printf("informacion del atleta \n");
    printf("deporte: %s\n",imp.deporte);
    printf("nombre:  %s\n",imp.nombre);
    printf("pais: %s\n",imp.pais);
    printf("medallas: %.2f\n",imp.noMedallas);

    
    return 0;

}