#include <stdio.h>


void prueba ();

int main()
{
    prueba(19);
    return 0;
}

void prueba (int n){

    printf("Hola\n");
    if(n>0){
        n = n - 1;
        prueba(n);
    } 
   
}