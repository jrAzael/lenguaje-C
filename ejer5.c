#include <stdio.h>

int main (){
    int array [10] = {1,2,3,4,5,6,7,8,9,0};
    int len = sizeof(array)/sizeof(int);
    printf("los bytes del arreglo son : %ld\n",sizeof(array));
    printf("cada entero tiene: %ld bytes\n",sizeof(int));
    printf("el arreglo tiene %d elemnets\n",len);
    return 0;

}