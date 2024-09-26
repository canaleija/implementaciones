#include <stdio.h>


int main()
{
    int x = 1;
    // x=x+1 y acumulacion de 1 (++)
    int j;
    scanf("%d",&j);
    
    for(;x<=j;){
        printf("%d\n",x);
        x++;
    }
    printf("El ultimo valor de x es: %d\n",x);
    return 0;
}
