/*Ouvimos sempre como os computadores são velozes. Como você pode determinar a rapidez com que seu equipamento realmente funciona? Escreva um programa com um loop while que conte de 1 a 3.000.000, de 1 em 1. Toda vez que a contagem atingir um múltiplo de 1.000.000, imprima este número na tela. Use seu relógio para cronometrar quanto tempo leva cada milhão de repetições do loop.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int x = 0, multiplo = 0;

    /*Bloco de comando*/
    while(x <= 3000000)
    {
        x++;
        multiplo = x % 1000000;
        if(multiplo == 0)
        {
            printf("%d\n", x);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/