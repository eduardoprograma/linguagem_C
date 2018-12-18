/*Escreva um programa que calcule e imprima o produto dos inteiros ímpares de 1 a 15.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x, y, d = 0, i = 0;

    /*Bloco de comandos*/
    for(y = 1; y <= 10; y++)
    {
        i++;
        for(x = 0; x <= 15; x++)
        {
            d = x % 2;
            if(d == 1)
            {
                printf("%d x %d = %d\t", x, i, x * i);
            }
            if((x % 15) == 0)
            {
                printf("\n");
            }
        }
    }
    system("pause");
    return 0;
}
/*Fim do código*/