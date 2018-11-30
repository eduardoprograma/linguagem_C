/*Faça um programa que carregue duas matrizes 3x8 com números inteiros, calcule e mostre:
* A soma das duas matrizes, resultando em uma terceira matriz também de ordem 3x8;
* A diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3x8.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elementos da Matrix*/
#define LINHA 3
#define COLUNA 8

/*Inicio*/
main()
{
    /*Localização*/
    setlocale(LC_ALL, "pt-br");

    /*Declaração das variáveis*/
    int vetorM[LINHA][COLUNA] = {0};
    int vetorN[LINHA][COLUNA] = {0};
    int vetorSoma[LINHA][COLUNA] = {0};
    int vetorSub[LINHA][COLUNA] = {0};
    int num = 0, i, j;

    /*Entrada de dados*/
    printf("Digite números inteiros para primeira matriz:\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("Digite um número para linha %d e coluna  %d: ", i + 1, j + 1);
            scanf("%d", &num);
            vetorM[i][j] = num;
        }
    }
    printf("Digite números inteiros para segunda matriz:\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("Digite um número para linha %d e coluna  %d: ", i + 1, j + 1);
            scanf("%d", &num);
            vetorN[i][j] = num;
        }
    }

    /*Bloco de comando*/
    /*Soma*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            vetorSoma[i][j] = vetorM[i][j] + vetorN[i][j];
        }
    }

    /*Subtração*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            vetorSub[i][j] = vetorM[i][j] - vetorN[i][j];
        }
    }
    
    /*Saída de dados*/
    printf("\nNova matriz:'Caso soma'\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("%d\t", vetorSoma[i][j]);
        }
        printf("\n");
    }
    printf("\nNova Matriz:'Caso subtração'\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("%d\t", vetorSub[i][j]);
        }
        printf("\n");
    }
    
    /*FIM*/
    system("pause");
    return 0;
}
