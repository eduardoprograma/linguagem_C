/* Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em que cada posição deverá armazenar a soma dos números de cada coluna da matriz. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MATRIZ 3
/* inicio do código */
int main()
{
    /* declaração de variáveis */
    int matriz[MATRIZ][MATRIZ]= {0};                //matriz principal;
    int i, j, aux = 0, cont = 0;                                       //contadores;
    int soma[MATRIZ] = {0};                      //matriz resultado da soma;

    /* entrada de dados */
    for(i = 0; i < 3; i++)                          //contagem de linhas;
    {
        for(j = 0; j < 3; j++)                      //contagem de colunas;
        {
            printf("Digite um numero inteiro: ");   //entrada de dados;
            scanf("%i", &matriz[i][j]);             //armazenamento de dados;
        }
    }

    /* bloco de comando */
    for(i = 0; i < 3; i++)                          //contagem de linhas;
    {
        for(j = 0; j < 3; j++)                      //contagem de colunas;
        {
            /* soma */
            if(j == 0 || cont != 1){
                aux = matriz[i][j];
                soma[j] += aux;
                cont++;
            }
            else if(j == 1 || cont != 1){
                aux = matriz[i][j];
                soma[j] += aux;
                cont++;
            }
            else if(j == 2 || cont != 1){
                aux = matriz[i][j];
                soma[j] += aux;
                cont++;
            }
            cont = 0;
        }
    }

    /* saida de dados */
    for(i = 0; i < 3; i++)                          //contagem de linhas;
    {
        for(j = 0; j < 3; j++)                      //contagem de colunas;
        {
            printf("%i\t", matriz[i][j]);           //impressão dos valores;
            if(j == 2)
            {
                printf("\n");
            }
        }
    }
    for(j = 0; j < 3; j++)                          //contagem das colunas;
    {
        printf("%i\t", soma[j]);                 //impressão do resultado da soma;
        if(j == 2)
        {
            printf("\n");
        }
    }
    return 0;
}
/* fim do código */