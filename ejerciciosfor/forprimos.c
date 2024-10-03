#include <stdio.h>

int main()
{

    /*
    12345...     11     
    primo: divisible() solo entre si mismo y uno
     */
    // analizar un valor de x contador divis
  
    
    int x;

    for(x=1;x<=100;x++){
    int j;
    int cd = 0;
    for(j=1; j<=x;j++){
        if(x%j == 0)
            cd++;
    }
    if(cd>2){
        printf("%d\n",x);
    }else{
        printf("%d es primo\n",x);
    }

    }


    
    return 0;
}
