/*Escreva um programa que imprima do número 1 ao 4 na mesma linha. Escreva o programa usando os seguintes métodos: 
a) Usando uma instrução printf sem especificadores de conversão. 
b) Usando uma instrução printf com identificadores de conversão. 
c) Usando quatro instruções printf.*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int A = 1, B = 2, C = 3, D = 4;

    /*a) Usando uma instrução printf sem especificadores de conversão.*/
    printf("1, 2, 3, 4\n");
    /*b) Usando uma instrução printf com identificadores de conversão.*/
    printf("%d, %d, %d, %d\n", A, B, C, D);
    /*c) Usando quatro instruções printf.*/
    printf("1, ");
    printf("2, ");
    printf("3, ");
    printf("4\n");
}
/*Fim do código*/