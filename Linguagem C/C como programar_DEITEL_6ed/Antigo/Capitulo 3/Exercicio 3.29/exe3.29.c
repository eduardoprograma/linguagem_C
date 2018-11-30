/*O que o seguinte programa imprime?*/
#include <stdio.h> 
#include <stdlib.h>
main() { 
    int contador = 1; 
    while (contador <= 10) 
        { 
            printf("%s\n", contador % 2 ? "****" : "+ + + + + + + +"); 
            ++contador;
    }
    getchar();
    return 0; 
}