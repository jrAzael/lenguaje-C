#include <stdio.h>

int main (void){
char cadena [10];
printf("un int ocupa %lu bytes\n",sizeof(int));
printf("un char ocupa %lu bytes\n",sizeof(char));
printf("un float ocupa %lu bytes\n",sizeof(float));
printf("un double ocupa %lu bytes\n",sizeof(double));
printf("cadena ocupa %lu bytes\n",sizeof(cadena));

}