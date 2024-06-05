
#include <stdio.h>
struct CD{
char titulo[100];
char artista[50];

};
int main (void){
    struct CD cd1;
 printf ("ingresa el titulo: ");
 scanf("%s",&cd1);  

 printf("%s\n",cd1.titulo);
 return 0; 
}