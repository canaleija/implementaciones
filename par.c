#include <stdio.h>

/*
if / %

dado un valor ingresado por el usario (int decimal)
determinar si es par o impar

scanf
calculo del modulo

*/

int main()
{
    int x;
    scanf("%d",&x);
    int res = x%2;
    if(res==0){
        printf("%d es un valor par\n",x);

    }else{
        printf("%d es un valor impar\n",x);

    }
    return 0;
}
