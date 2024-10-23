#include <stdio.h>



void modificarArreglo(int [], int);

int main(int argc, char const *argv[])
{
    int arreglo [5] = {2,5,89,7,5};
    modificarArreglo(arreglo,5); 
    int x;
    for(x=0;x<5;x++){
        printf("%d\n",arreglo[x]);
    }
    return 0;
}

void modificarArreglo (int b[], int tam){
// recorrer el arreglo
int x;
for(x=0; x<tam; x++){

    b[x]*=2;
}

}
