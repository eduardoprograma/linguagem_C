/*Escreva um programa em C que demonstre a diferença entre pré-decrementar e pósdecrementar usando o operador de decremento --.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x = 10;

    /*Bloco de comandos*/
    printf("Demosntrar o pre-decremneto:\n\n");
    printf("Valor a se iniciar %d\n", x);
    while(x > 0)
    {
        --x;
        printf("%d\t", x);
    }

    x = 10;     //Retorna valor inicial.
    printf("\n");

    printf("Demosntrar o pos-decremneto:\n\n");
    printf("Valor a se iniciar %d\n", x);
    while(x > 0)
    {
        x--;
        printf("%d\t", x);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
/*Fim do código*/