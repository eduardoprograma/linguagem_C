/*Faça um programa que carregue uma matriz 3x3 com números reais e receba um valor, números digitados pelo usuário, calcule e mostre a matriz resultante da multiplicação do número digitado por elemento da matriz.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elementos da matriz*/
#define LINHA 3
#define COLUNA 3

/*Inicio*/
main()
{
    /*Localização*/
    setlocale(LC_ALL, "portuguese");

    /*Declaração de variáveis*/
    float vetorNum[LINHA][COLUNA] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, num = 0.0;
    int i, j;

    /*Entrada de dados*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("Digite um numero real: ");
            scanf("%f", &num);
            vetorNum[i][j] *= num;
        }
    }

    /*Saída de dados*/
    printf("\nA matriz resultante dosvalores digitados são:\n\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("%.2f\t", vetorNum[i][j]);
        }
        printf("\n");
    }
    
    /*FIM*/
    system("pause");
    return 0;
}