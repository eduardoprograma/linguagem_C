/*Escreva um programa em C que utilize um loop para imprimir a seguinte tabela de valores:
pagina 124.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de varáveis*/
    int x = 0;

    /*Bloco de comando e saída de dados*/
    printf("%s\t%s\t%s\t%s\t\n", "N", "N*10", "N*100", "N*1000");
    while(x < 10)
    {
        x++;
        printf("%d\t%d\t%d\t%d\t\n", x, x * 10, x * 100, x * 1000);
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/