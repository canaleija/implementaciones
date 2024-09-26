#include <stdio.h>

/*
for 
controlar 
	variable de control 
	inicia
	hasta donde debe de llegar

for (A;B;C)
	A cual es la variable de control y donde inicia
	B hasta donde debe de llegar
	C que tan rápido cambia la variable de control para lograr B


*/

int main()
{
    int x;
    for(x=0;x>-17;x=x-1){
        printf("%d\n",x);
    }
    printf("El ultimo valor de X es: %d\n",x);
}
