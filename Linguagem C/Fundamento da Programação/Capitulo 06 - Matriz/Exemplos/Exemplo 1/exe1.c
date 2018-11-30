/*Faça um programa que carregue uma matriz 2x2, calcule  e mostre uma matriz resultante que será a matriz digitadad multiplicada palo maior  elemento da matriz.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Elementos do vetor*/
#define LINHA 2
#define  COLUNA 2

/*INICIO*/
main()
{
    setlocale(LC_ALL, "portuguese-brazilian");
    
    /*Declare as varáveis*/
    int vetor1[LINHA][COLUNA] = {0}, vetor2[LINHA][COLUNA] = {0};
    int i, j, maior;
    maior = vetor1 [1][1];

    /*Entrada de dados*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("Digite um numero inteiro: ");
            scanf("%d", vetor1[i][j]);
        }
    }

    /*Bloco de comando*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            if (vetor1[i][j] > maior) {
                maior = vetor1[i][j];
            } 
        }
    }
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            vetor2[i][j] = maior * vetor1[i][j];
        }
    }
    for(i = 0; i < LINHA; i++)
    {
        
        for(j = 0; j < COLUNA; j++)
        {
            printf("\no resultado é: %d\n", vetor2[i][j]);
        }
    }
    system("pause");
    return 0;
}