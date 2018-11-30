/*Faça um programa que carregue uma matriz M de ordem 4x6 e uma segunda matriz N de ordem 6x4, calcule e imprima a soma das linhas de M com as colunas de N. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elementos da matriz*/
#define QUATRO 4
#define SEIS 6

/*Inicio*/
main()
{
    /*Localização*/
    setlocale(LC_ALL, "Portuguese-brazilian");

    /*Declaração de variáveis*/
    int vetorM[QUATRO][SEIS] = {0}, num = 0;
    int vetorN[SEIS][QUATRO] = {0};
    int vetorSoma[QUATRO][SEIS] = {0};
    int i, j;

    /*Entrda de dados*/
    printf("Digite os numeros interiros da primeira Matriz:\n");
    for(i = 0; i < QUATRO; i++)
    {
        for(j = 0; j < SEIS; j++)
        {
            printf("Digite o número da linha %d e coluna %d: ", i +1, j + 1);
            scanf("%d", &num);
            vetorM[i][j] = num;
        }
        printf("\n");
    }

    printf("Digite os numeros interiros da segunda Matriz:\n");
    for(i = 0; i < SEIS; i++)
    {
        for(j = 0; j < QUATRO; j++)
        {
            printf("Digite o número da linha %d e coluna %d: ", i +1, j + 1);
            scanf("%d", &num);
            vetorN[i][j] = num;
        }
        printf("\n");
    }

    /*Bloco de comando*/
    /*Soma entre as Matrizes*/
    for(i = 0; i < QUATRO; i++)
    {
        for(j = 0; j < SEIS; j++)
        {
            vetorSoma[i][j] = vetorM[i][j] + vetorN[j][i];
        }
    }
    
    /*Saída de dados*/
    printf("\nAnova matriz:\n");
    for(i = 0; i < QUATRO; i++)
    {
        for(j = 0; j < SEIS; j++)
        {
            printf("%d\t", vetorSoma[i][j]);
        }
        printf("\n");
    }
    
    /*FIM*/
    system("pause");
    return 0;
}