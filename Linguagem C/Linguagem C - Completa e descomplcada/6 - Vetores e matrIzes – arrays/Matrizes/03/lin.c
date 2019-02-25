/* Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida na tela. */
#include <stdio.h>
#include <stdlib.h>
#define MATRIZ 5
/* inicio do código */
int main()
{
    /* declaração de variáveis */
    int matriz[MATRIZ][MATRIZ] = {0};
    int i = 0, j = 0;

    /* entrada de dados */
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }

    /* saida de dados */
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%i\t", matriz[i][j]);
            if(j == 4)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
/* fim do código */