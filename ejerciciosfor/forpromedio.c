/*
dar por parte del usario una cantidad n de 
calificaciones, por medio de un ciclo for
pedir esas n calificaciones, una vez terminado
de pedir cada una de ellas, dar el promedio de
las mismas
pedir n
implementar un acumulador
dividir el acumulador / n
y fuera del ciclo mostrar el promedio
*/
#include <stdio.h>

int main()
{  

    int n,x;
    printf("Ingrese el numero de calificaciones:\n");
    scanf("%d",&n);
    float aux,acumulador = 0;
    for(x=1; x<=n;x++){
        printf("\nIngrese la cal %d: ",x);
        scanf("%f",&aux);
        acumulador +=aux;
    }
    printf("Promedio = %f\n",acumulador/n);
    /* code */
    return 0;
}
