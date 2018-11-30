/*Faça um programa que carregue uma matriz 3x5 com números inteiros, calcule e mostre a quantidade de elementos entre 15 e 20.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elementos da Matriz*/
#define LINHA 3
#define COLUNA 5

/*Inicio*/
main()
{
    /*Define a linguagem*/
    setlocale(LC_ALL, "portuguese-brazilian");

    /*Declare as varáveis*/
    int mat[LINHA][COLUNA] = {0};
    int i, j, num, cont = 0;

    /*Entrada de dados*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("Digite o %dº número da linha %d: ", j, i);
            scanf("%d", &num);
            mat[i][j] = num;
        }
        printf("\n");
    }

    /*Bloco de comando*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            if(mat[i][j] >= 15 && mat[i][j] <= 20)
            {
                cont++;
            }
        }
    }
    
    /*Saída de dados*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf(" %d,\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n A quantidade de números entre 15 e 20 é: %d\n\n", cont);
    system("pause");
    return 0;
}