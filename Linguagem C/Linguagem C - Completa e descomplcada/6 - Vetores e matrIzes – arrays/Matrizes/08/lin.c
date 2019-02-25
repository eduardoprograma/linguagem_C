/* Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus elementos são da forma:
A[i][j] = 2i + 7j – 2 se i < j 
A[i][j] = 3i^2 - 1 se i = j 
A[i][j] = 4i^3 + 5j^2 + 1 se i > j */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MATRIZ 10
/* inicio do código */
int main()
{
    /* declaração de variáveis */
    int A[MATRIZ][MATRIZ] = {0};
    int i, j;

    /* bloco de comando */
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(i < j)
            {
                A[i][j] = 2 * i + 7 * j - 2;
            }
            else if(i == j)
            {
                A[i][j] = (3 * pow(i, 2)) - 1;
            }
            else if(i > j)
            {
                A[i][j] = (4 * pow(i, 3)) + (5 * pow(j, 2)) + 1;
            }
        }
    }

    /* saída de dados */
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("%i\t", A[i][j]);
            if(j == 9)
            {
                printf("\n");
            }
        }
    }
    return 0;        
}
/* fim do código */