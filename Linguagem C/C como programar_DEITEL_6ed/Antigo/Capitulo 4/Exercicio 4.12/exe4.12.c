#include <stdio.h>
#include <stdlib.h>

main () {
    int pares, soma;
    pares = 0;
    soma = 0;
    
    do
    {
        pares += 2;
        soma += pares;
        printf("%d ,", pares);
        
    } while (pares < 30);
    printf("\nA soma dos numeros pares e: %d\n\n", soma);
    system("pause");
    return 0;    
}