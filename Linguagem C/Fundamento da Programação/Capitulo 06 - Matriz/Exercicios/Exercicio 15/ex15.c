/*Faça um programa que carregue uma matriz 5x5 e crie dois vetores de cinco posições cada um , que contenham, respectivamente, as somas das linhas e das colunas da matriz. Escreva a matriz e os vetores criados.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elemnetos da Matriz ou do Vetor*/
#define MATRIZ 5

/*INICIO*/
main()
{
    setlocale(LC_ALL, NULL);

    /*DECLARAÇÃO DE VARIÁVEIS*/
    int matrizNum[MATRIZ][MATRIZ] = {0};
    int vetorUm[MATRIZ] = {0};
    int VetorDois[MATRIZ] ={0};
    int i, j;

    /*ENTRADA DE DADOS*/
    printf("Digite 25 numeros para compor nossa Matriz:\n\n");
    for(i = 0; i < MATRIZ; i++)
    {
        for(j = 0; j < MATRIZ; j++)
        {
             printf("L%d C%d: Digite um número: ", i + 1, j + 1);
             scanf("%d", &matrizNum[i][j]);
        }
        printf("\n");
    }
    
    /*BLOCO DE COMANDO*/
    /*SOMA LINHA*/
    for(i = 0; i < MATRIZ; i++)
    {
        for(j = 0; j < MATRIZ; j++)
        {
            vetorUm[i] += matrizNum[i][j];
        }
    }
    
    /*SOMA COLUNA*/
    for(i = 0; i < MATRIZ; i++)
    {
        for(j = 0; j < MATRIZ; j++)
        {
            VetorDois[i] += matrizNum[j][i];
        }
    }
    
    /*SAÍDA DE DADOS*/

    /*MATRIZ DIGITADA*/
    printf("\nTabela da Matriz digitada:\n\n");
    for(i = 0; i < MATRIZ; i++)
    {
        for(j = 0; j < MATRIZ; j++)
        {
            printf("%d\t", matrizNum[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    /*MATRIZ CALCULO DE SOMA LINHA*/
    printf("\nTabela da soma de cada linha:\n\n");
    for(i = 0; i < MATRIZ; i++)
    {
        printf("%d\t", vetorUm[i]);
    }
    printf("\n\n");

    /*MATRIZ CALCULO DE SOMA COLUNA*/
    printf("\nTabela da soma de cada coluna:\n\n");
    for(i = 0; i < MATRIZ; i++)
    {
        printf("%d\t", VetorDois[i]);
    }
    printf("\n\n");
    
    /*ENCERRAMNTO*/
    system("pause");
    return 0;
}
/*FIM DO CÓDIGO*/