/*Uma aplicação interessante dos computadores é para desenhar gráficos de linhas e de barras (chamados algumas vezes "histogramas"). Escreva um programa que leia cinco números (cada um deles entre 1 e 30). Para cada número lido, seu programa deve imprimir uma linha contendo aquele número de asteriscos adjacentes. Por exemplo, se seu programa ler o número sete, deve imprimir *******.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x1, x2, x3, x4, x5;
    int x;

    /*Entrada de dados*/
    printf("Digite cinco numeros inteiros de 1 a 30(-1 para o primeiro numero para encerrar): ");
    scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5);

    /*Bloco de comandos*/
    do
    {
        for(x = 1; x <= x1; x++)
        {
            printf("x");
        }
        printf("\n");
        for(x = 1; x <= x2; x++)
        {
            printf("x");
        }
        printf("\n");
        for(x = 1; x <= x3; x++)
        {
            printf("x");
        }
        printf("\n");
        for(x = 1; x <= x4; x++)
        {
            printf("x");
        }
        printf("\n");
        for(x = 1; x <= x5; x++)
        {
            printf("x");
        }
        printf("\n");
        printf("Digite cinco numeros inteiros de 1 a 30(-1 para o primeiro numero para encerrar): ");
        scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5);
    } while (x1 !=-1);
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/