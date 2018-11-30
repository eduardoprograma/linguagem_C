/*Faça um programa que carregue uma matriz 6x10, some as colunas individualmente e acumule as somas na 7ªlinha da matriz. Mostre o resultado de cada coluna.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ELEMENTOS DAS MATRIZES E VETORES*/
#define LINHA 6
#define COLUNA 10

/*INICIO*/
main()
{
    /*LOCALIZAÇÃO*/
    setlocale(LC_ALL, "Portuguese-br");

    /*DECLARAÇÃO DE VARIÁVEIS*/
    int matrizEdu[LINHA][COLUNA] = {0}, i , j;
    int matrizSoma[1][COLUNA] = {0};
    
    /*ENTRADA DE DADOS*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j <COLUNA; j++)
        {
            printf("Linha:%d, Coluna:%d: _Digite um numero inteiro: ", i +1, j + 1);
            scanf("%d", &matrizEdu[i][j]);
        }
        printf("\n");
    }
    
    /*BLOCO DE COMANDOS*/
        /*SAÍDA DE DADOS*/
        printf("\nTABELA DIGITADA PELO USUARIO\n");
        for(i = 0; i < LINHA; i++)
        {
            for(j = 0; j <COLUNA; j++)
            {
                printf("%d\t", matrizSoma[1][j]);
            }
            printf("\n");
        }

        /*SOMA DAS COLUNAS*/
        for(j = 0; j < COLUNA; j++)
        {
            for(i = 0; i< LINHA; i++)
            {
                matrizSoma[1][j] += matrizEdu[i][j];
            }
        }
                
    /*SAÍDA DE DADOS*/
    printf("\nTABELA SOMA DAS COLUNAS NA 7 LINHA.\n");
    for(j = 0; j < COLUNA; j++)
    {
        printf("%d\t", matrizSoma[1][j]);
    }
    printf("\n");
    system("pause");
    return 0;
}

/*FIM DO CÓDIGO*/