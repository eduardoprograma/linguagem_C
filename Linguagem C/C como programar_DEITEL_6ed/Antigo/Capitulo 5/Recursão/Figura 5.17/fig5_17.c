#include <stdio.h>
#include<stdlib.h>
long fatorial(long);
main () {
    int i;
    
    for(i = 1; i <= 10; i++)
    {
        printf("%2d! = %ld\n", i, fatorial(i));
    }
    return 0;
}
/*Definição recursiva da função fatorial*/
long fatorial(long numero)
{
    
    if (numero <= 1) {
        return 1;
    }
    else
    {
        return(numero * fatorial(numero - 1));
    }
    
    
}