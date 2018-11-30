#include <stdio.h>
#include <stdlib.h>
main () {
    int contador;
    contador = 0;
    
    do
    {
        contador++;
        printf("%2d\t\n", contador);
    } while (contador < 10);
    system("pause");
    return 0;
}