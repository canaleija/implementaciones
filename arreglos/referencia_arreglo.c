#include <stdio.h>

void modificarArreglo(int [], int);
void imprimirArreglo(int [], int);
void ordenarBurbuja(int [], int);
float calcularPromedio(float [], int);
int calcularMenor(int[], int);
int calcularMayor(int[], int);

int main()
{
    int arreglo [5] = {2,5,89,7,5};
    int arreglo2 [10] = {2,4,1,1,2,3,4,3,289,5};
    ordenarBurbuja(arreglo, 5);
    imprimirArreglo(arreglo,5);
    ordenarBurbuja(arreglo2,10);
    imprimirArreglo(arreglo2,10);
    return 0;
}

void modificarArreglo (int b[], int tam){
// recorrer el arreglo
int x;
for(x=0; x<tam; x++){

    b[x]*=2;
}

}

void imprimirArreglo(int arreglo[], int tam){
    int x;
    for(x=0;x<tam;x++){
        printf("%d\n",arreglo[x]);
    }
}

void ordenarBurbuja(int x [], int tam){
int y,i,j;

    // burbuja
    for(i=1; i<tam;i++){
        for(j=0; j<tam-1;j++){
            if(x[j]>x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }


}