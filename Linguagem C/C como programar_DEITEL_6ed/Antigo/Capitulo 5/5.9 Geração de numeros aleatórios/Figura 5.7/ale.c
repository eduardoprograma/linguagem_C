/*Inteiros em uma ajustada e deslocada produzidos por 1 + rand()%6*/
#include <stdio.h>
#include <stdlib.h>
main () {
    int i;
    
    for(i = 1; i <= 20; i++)
    {
        printf("%10d", 1 + (rand()%6));
        
        if (i % 5 == 0) {
            printf("\n");
        }
         
    }
    return 0;   
}