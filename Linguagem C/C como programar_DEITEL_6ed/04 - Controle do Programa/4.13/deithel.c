/*Escreva um programa que calcule e imprima a soma dos inteiros pares de 2 a 30.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int x, soma = 0;

    /*Bloco de comandos*/
    for(x = 2; x <= 30; x += 2)
    {
        soma += x;
        printf("%d\t", x);
    }
    printf("\nA soma e %d\n", soma);
    system("pause");
    return 0;
}
/*Fim do código*/