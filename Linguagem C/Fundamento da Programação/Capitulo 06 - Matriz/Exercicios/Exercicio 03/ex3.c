/*faça um programa que carregue uma matriz 6x3 calcule e mostre:
* O maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
* O menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Numero de elementos da Matriz*/
#define LINHA 6
#define COLUNA 3

/*Inicio*/
main()
{
    /*Localização*/
    setlocale(LC_ALL, "portuguese-brazilian");

    /*Declaração de dados*/
    int mat[LINHA][COLUNA] = {0};
    int i, j, cont = 0, num;
    int maior = 0, menor, posicaox = 0, posicaoy = 0;
    int posicaoxm = 0, posicaoym = 0;

    /*Entrada de dados*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("Digite um número inteiro: ");
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
            if(mat[i][j] > maior)
            {
                maior = mat[i][j];
                posicaox = i;
                posicaoy = j;
            }
        }
    }
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            if(mat[i][j] < menor)
            {
                menor = mat[i][j];
                posicaox = i;
                posicaoy = j;
            }
        }
    }
    printf("\nO maior vetor é: %d e sua posição na matriz é [%d][%d]\n", maior, posicaox, posicaoy);
    printf("\nO menor vetor é: %d e sua posição na matriz é [%d][%d]\n", menor, posicaoxm, posicaoym);
    printf("\n");
    for(i = 0; i < LINHA; i++)
    {
       for(j = 0; j < COLUNA; j++)
       {
           printf("%d\t", mat[i][j]);
       }
       printf("\n");
    }
    system("pause");
    return 0;
}