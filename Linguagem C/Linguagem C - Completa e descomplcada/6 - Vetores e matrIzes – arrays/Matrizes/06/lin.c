/* Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos em sua diagonal principal. */
#include <stdio.h>
#include <stdlib.h>
#define MATRIZ 3
/* inicio do código */
int main()
{
    /* declaração e variáveis */
    int matriz[MATRIZ][MATRIZ] = {0};
    int i, j;

    /* entrada de dados */
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Digite um numero inteiro: ");
            scanf("%i", &matriz[i][j]);
        }
    }

    /* saida de dados */
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i == j)
            {
                printf("%i\t", matriz[i][j]);
            }
            else
            {
                printf(" \t");
            }
            if(j == 2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
/* fim do código */