#include <stdio.h>
#include <stdlib.h>

main () {
    int num, resto, contador;

    num = 0;
    contador = 1;
    resto = 0;
    
    while(contador <= 100){
        contador++;
        num++;
        printf("*");
        
        if (num == 10){
            printf("\n");
            num = 0;
        }
        
    }
    system("pause");
    return 0;
}