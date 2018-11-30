/*O que o seguinte programa imprime?*/
#include <stdio.h> 
#include <stdlib.h>
main() { 
    int contador = 1; 
    while (contador <= 10) 
        { 
            
            if (contador % 2) {
                printf("%s\n%s\n", "****", "+ + + + + + + +");
            }
            
            ++contador;
    }
    getchar();
    return 0; 
}