/*Faça um programa que carregue uma matriz 8x6 de inteiros, calcule e mostre a soma dos elementos das linhas pares da matriz.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ELEMENTOS DA MATRIZ*/
#define LINHA 8
#define COLUNA 6

/*INICIO*/
main()
{
    /*LOCALIZAÇÂO*/
    setlocale(LC_ALL, "Portuguese-br");

    /*DECLARAÇÃO DE DADOS*/
    int matrizUnica[LINHA][COLUNA] = {0};
    int i, j;
    int soma = 0;

    /*ENTRADA DE DADOS*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("L:%d, C:%d _Digite um numero inteiro: ");
            scanf("%d", &matrizUnica[i][j]);
        }
        printf("\n");
    }
    
    /*BLOCO DE COMANDO*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            if((matrizUnica[i][j] % 2) == 0)
            {
                soma += matrizUnica[i][j];
            }
            else
            {
                matrizUnica[i][j];
            }
        }
    }
    
    /*SAÍDA DE DADOS*/
    printf("A soma dos numeros pares da matriz e: %d\n\n", soma);
    system("pause");
    return 0;
}