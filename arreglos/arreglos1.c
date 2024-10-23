#include <stdio.h>

int main()
{
    // declaracion de un arreglo
    int x[]= {0,1,2,3,4,5,6,7,8,9};
    int y,i,j;

    // burbuja
    for(i=1; i<10;i++){
        for(j=0; j<10-1;j++){
            if(x[j]>x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }

    // for mostrar los elementos
    for(y=0;y<10;y++){
        printf("%d\n",x[y]);

    }
    



    return 0;
}
