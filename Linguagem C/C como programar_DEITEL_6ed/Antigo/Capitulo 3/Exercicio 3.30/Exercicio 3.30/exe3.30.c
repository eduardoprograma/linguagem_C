/*O que o seguinte programa imprime?*/
#include <stdio.h> 
main() { 
    int linha = 10, coluna; 
    while (linha >= 1) { 
        coluna = 1; 
        while (coluna <= 10) { 
            
            if (linha % 11) {
                printf("?&s", "<");
            }
           
            ++coluna;
        } 
        --linha; 
        printf("\n");
    }
    getchar();
    return 0; 
}