/*Usando a estrutura de repetição do/while*/
#include <stdio.h>
#include <stdlib.h>
main () {
    int contador = 1;
    
    do
    {
        printf("%d", contador);
    } while (++contador <= 10);
    printf("\n\n");
    system("pause");
    return 0;
}