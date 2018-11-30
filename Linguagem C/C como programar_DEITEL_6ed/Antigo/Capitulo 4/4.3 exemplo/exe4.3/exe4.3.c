/*Repetição controlada por contador*/
#include <stdio.h>
#include <stdlib.h>
main () {
    int contador = 0;
    
    while(contador < 10){
        ++contador;
        printf("%d\n", contador);
    }  
     system("pause");
     return 0;
}