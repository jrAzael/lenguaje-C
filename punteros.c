#include <stdio.h>
#include <stdlib.h>
int main (void){
    int i,n;
    int *buffer;
    printf("teclea la longitud del arreglo");
    scanf("%d",&i);
    int arreglo[i];

    buffer=(int*)malloc((i+1)*sizeof(int));
    if (buffer==NULL) exit(1);

    for(n=0;n<i;n++)
    buffer[n]=rand()%26+'1';
    buffer[arreglo[i]]='\0';
    printf("Random string: %d\n",buffer);
    free(buffer);
    return 0;
}