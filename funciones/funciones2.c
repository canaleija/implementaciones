#include <stdio.h>

void modificar (int*,int);


int main()
{
    // duplicar información
    // int * j;
    int x = 78;
    int *g,*t =&x;

    printf("%d\n",x);
    // cambiar directamente el valor de x
    modificar(t,67);

    printf("%d\n",x);

    return 0;
}

// utilizar una referencia a un espacio de memoria
void modificar (int *p, int nuevo){

    *p = nuevo;

}
// valor, se duplica, es quiere decir que le valor 
// original no sufre ninguna afectación 