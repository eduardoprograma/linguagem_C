#include <stdio.h>
#include <stdlib.h>

main () {
    int contador;
    contador = 0;
    do
    {
        if (contador % 2 == 0) {
            printf("%d\n", contador);
        }
        contador += 2;
    } while (contador <= 100);
    
    printf("\n");
    system("pause");
    return 0;
}