/*Faça um programa que carregue uma matriz 20x10 com números inteiros e some cada uma das colunas, armazenando o resultado da soma em uma vetor. A seguir, multiplique cada elemento da matriz pela soma da coluna e mostre a matriz resultante.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elementos dos vetores e das matrizes*/
#define LINHA 20    //Agrupamento dos números
#define COLUNA 10   //Agrupemento dos números
#define SLINHA 1    //Soma das colunas

/*Inicio*/
main()
{
    /*Localização*/
    setlocale(LC_ALL, "Portuguese-brazilian");
    
    /*Declaração de varáveis*/
    int vetorNum[LINHA][COLUNA] = {0}, num = 0;
    int vetorSoma[SLINHA] = {0}, k = 0;
    int vetorMult[LINHA][COLUNA] = {0};
    int i, j;

    /*Entrada de dados*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("Digite um numero inteiro para a linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &num);
            vetorNum[i][j] = num;
        }
        printf("\n");
    }
    
    /*Bloco de comando*/
    /*Soma das colunas*/
    for(j = 0; j < COLUNA; j++)
    {
        for(i = 0; i < LINHA; i++)
        {
            vetorSoma[k] += vetorNum[i][j];
        }
    }

    /*Multiplicação*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            vetorMult[i][j] = vetorSoma[k] * vetorNum[i][j];
        }
    }
    
    /*Saída de dados*/
    printf("\n\nNova matriz:\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("%d\t", vetorMult[i][j]);
        }
        printf("\n");
    }
    
    /*Fim do código*/
    system("pause");
    return 0;
}