#include <stdio.h>

int main()
{


    int x = 0;
    int bandera =  0; // 0 activada 1 activada
    do {
    printf("Ingresa un numero: \n");
    scanf("%d",&x);
    // bloque para determinar si es primo o no
    int j = 1;
    int cd = 0;
    while( j<=x){
        if(x%j == 0)
            cd++;
        j++;
    }
    if(cd>2){
        bandera = 0;
    }else{
        bandera = 1;
    }

    }while(bandera==1);


    return 0;
}
