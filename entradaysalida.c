#include <stdio.h>

int main()
{
    // declarar un variable para colocar un valor
    // ingresado por el usuario
    int entero;
    int entero2;

    printf("Ingresa un valor: ");
    scanf("%d",&entero);
    printf("Ingresa un valor: ");
    scanf("%d",&entero2);
    // se llama la funcion para que el usuario
    // ingrese el valor
    
    printf("El valor 1 ingresado es: %d\n",entero);
    printf("El valor 2 ingresado es: %d\n",entero2);
    printf("El res de multiplicar: %d\n",entero2*entero);
    double div = entero2*entero+34;
    printf("El res de dividir: %f\n",div);
    return 0;
}
