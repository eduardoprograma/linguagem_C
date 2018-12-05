/*O que o seguinte programa imprime? 
ttinclude <stdio.h> main() { int x = 1, total = 0, y; while (x <= 10) { y = x * x printf("%ã\n", y); total += y); ++x; } printf("O total e %d\n", total); return 0; }*/

#include <stdio.h> 
#include <stdlib.h>
/*Inicio do código*/
int main() 
{ 
    /*Declaração de varáveis*/
    int x = 1, total = 0, y;

    /*Bloco de comandos*/ 
    while (x <= 10) 
    { 
        y = x * x; 
        printf("%d\n", y); 
        total += y; ++x; 
    } 

    /*Saída de dados*/
    printf("O total e %d\n", total); 
    system("pause");
    return 0; 
}