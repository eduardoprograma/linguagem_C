/*Faça um programa que carregue uma matriz 12x13 e divida todos os elementos de cada linha pelo maior elemento em módulo daquele linha. Escreva a matriz lida e a modificada.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elementos da matriz ou do vetor*/
#define LINHA 12
#define COLUNA 13
#define COLUNA_UNICA 1

/*INICIO*/
main()
{
    /*LOCALIZAÇÃO*/
    setlocale(LC_ALL, "");

    /*DECLARAÇÃO DE VARÁVEIS*/
    float matrizNum[LINHA][COLUNA] = {0};
    int i, j;
    float matrizDiv[LINHA][COLUNA] = {0};
    float vetorMaior[LINHA] = {0}, menor = 0, maior = 0;
    int k = 0;
    
    /*ENTREDA DE DADOS*/
    printf("Você digiterá 156 números:\n\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0;j < COLUNA; j++)
        {
            printf("L%d C%d: Digite um número: ", i + 1, j + 1);
            scanf("%f", &matrizNum[i][j]);
        }
        printf("\n");
    }
    
    /*BLOCO E COMANDOS*/
    for(i = 0; i < LINHA; i++)
    {
        /*PROCURA DO MAIOR NÚMERO DA LINHA*/
        for(j = 0; j < COLUNA; j++)
        {
            if(matrizNum[i][j] > maior)
            {
                maior = matrizNum[i][j];
            }
            else
            {
                menor = matrizNum[i][j];
            }
        }
        vetorMaior[i] = maior;
        maior = 0;
    }

    /*DIVISÃO*/
    for(i = 0; i < LINHA; i++)
    {
        /*DIVISÃO*/
        for(i = 0; i < LINHA; i++)
        {
            for(j = 0; j < COLUNA; j++)
            {
                matrizDiv[i][j] = matrizNum[i][j] / vetorMaior[i];
            }
        }
    }
    
    /*SAÍDA DE DADOS*/
    /*MATRIZ FORNECIDA PELO USUÁRIO*/
    printf("\nMatriz forncida pelo usuário:\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < LINHA; j++)
        {
            printf("%.2f\t", matrizNum[i][j]);
        }
        printf("\n");
    }

    /*MATRIZ FORNECIDA PELO SISTEMA*/
    printf("\nMatriz forncida pelo SISTEMA:\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < LINHA; j++)
        {
            printf("%.2f\t", matrizDiv[i][j]);
        }
        printf("\n");
    }
    
    /*MATRIZ FORNECIDA PELO SISTEMA*/
    printf("\nMatriz forncida pelo SISTEMA:\n");
    for(i = 0; i < LINHA; i++)
    {
        printf("%.2f\t", vetorMaior[i]);
    }
    system("pause");
    return 0;
}
/*FIM DO CÓDIGO*/
