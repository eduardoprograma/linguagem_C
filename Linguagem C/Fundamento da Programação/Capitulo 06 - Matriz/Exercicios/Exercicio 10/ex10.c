/*Faça um programa que carregue uma matriz 5x5 com números inteiros, calcule e mostre a soma:
* Dos elementos da linha 4;
* Dos elementos da coluna 2;
* Dos elementos da diagonal principal;
* Dos elementos da diagonal secundária;
* De todos os elementos da matriz.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elementos da Matriz*/
#define LINHA 5
#define COLUNA 5

/*Inicio*/
main()
{
    /*Localização*/
    int vetorNum[LINHA][COLUNA] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25}, num, i, j;
    int vetorSoma[LINHA][COLUNA] = {0};

    /*Entrada de dados*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("Digite um numero real para %d, %d: ", i + 1, j +1);
            scanf("%d", &num);
            vetorNum[i][j] += num;
        }
        printf("\n");
    }
    
    /*Bloco de comando*/
    printf("\nResolução:\n\n");
    /*Dos elementos da linha 4*/
    for(i = 4; i < LINHA; i++)
    {
        printf("Elementos da linha %d :\t", i);
        for(j = 0; j < COLUNA; j++)
        {
            printf("%d\t", vetorNum[i][j]);
        }
    }
    printf("\n\n");
    
    /*Dos elementos da coluna 2*/
    printf("Elementos da coluna %d :\t", 2);
    for(i = 0; i < LINHA; i++)
    {
        for(j = 1; j < 2 && j > 0; j++)
        {
            printf("%d\t", vetorNum[i][j]);
        }
    }
    printf("\n\n");

    /*Dos elementos da diagonal principal*/
    printf("Elementos da diagonal principal: ");
    for(i = 0; i < LINHA; i++)
    {
        printf("%d\t", vetorNum[i][i]);
    }
     printf("\n\n");

    /*Dos elementos da diagonal secundária*/
    printf("Elementos da diagonal secundária: ");
    j = 5;
    for(i = 0; i < LINHA; i++)
    {
        j -= 1;
         printf("%d\t", vetorNum[i][j]);
    }
    printf("\n\n");

    /*De todos os elementos da matriz*/
    printf("Matriz:\n");
    printf("%13s\t%5s\t%5s\t%5s\t%5s\t\n", "Col1", "Col2", "Col3", "Col4", "Col5");
    for(i = 0; i < LINHA; i++)
    {
        printf("Linha %d\t", i);
        for(j = 0; j < COLUNA; j++)
        {
            printf("%5d\t", vetorNum[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    /*FIM*/
    system("pause");
    return 0;
}   