#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    hola (0-100 / 15,23,45,67,89)
    x > = 15    x <= 20
    cuando están en el rango
    cuando no
    x   y   res  and
    1   1    1    or
    1   1    1
    1   0    1
    0   1    1
    0   0    0
    */
   int x; // x 12 45  15
   for(x=0; x<=100;x++){
        if(x==15 || x==23 || x==45 || x==67 || x==89){
            
            printf("%d hola\n",x);
        }else{
            printf("%d\n",x);
        }

   }
    return 0;
}
