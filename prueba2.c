#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z;
 
    x = 2;
    y = 4;
    z = pow(x,y);
 
    printf("%lf to the power of %lf is %lf\n", x, y, z);

    if(0){
        printf("la potencia es igual a 9.0\n");
    }else{
         printf("la potencia es diferente a 9.0\n");
    }

    return 0;
}
