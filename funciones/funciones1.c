#include <stdio.h>

// protipos
void saludar();
double promediar (double, double, double);


int main()
{
    // argumentos
    double res = promediar(4,7,8);
    printf("%f\n",res);
    res = promediar(14,7.4,8.34);
    printf("%f\n",res);
    res = promediar(-1.4,7.5,2);
    printf("%f\n",res);
    return 0;
}

// implementaciones(codificación) de mis funciones

double promediar (double a, double b, double c){
return (a+b+c)/3;

}
void saludar(){
    printf("Hola, buen dia!\n");

}