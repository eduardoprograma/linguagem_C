/*O que o seguinte programa imprime?*/
#include <stdio.h> 
main() { 
    int linha = 10, coluna; 
    while (linha >= 1) { 
        coluna = 1; 
        while (coluna <= 10) { 
            printf ("?&s", linha % 2 ? "<" : ">"); 
            ++coluna;
        } 
        --linha; 
        printf("\n");
    }
    getchar();
    return 0; 
}