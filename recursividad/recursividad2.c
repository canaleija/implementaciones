#include <stdio.h>


int factorialIterativo(int);
int factorialRecursivo(int);


int main()
{
    int n, res;
    scanf("%d", &n);
    res = factorialRecursivo(n);
    printf("%d\n", res);
    return 0;
}


int factorialIterativo(int n){

    int res = 1;

    for (int i = n; i > 0; i--)
    {
        res*=i;
    }

    return res;

}

int factorialRecursivo(int n){
    if(n== 1) return 1;
    return n * factorialRecursivo(n-1);
}
