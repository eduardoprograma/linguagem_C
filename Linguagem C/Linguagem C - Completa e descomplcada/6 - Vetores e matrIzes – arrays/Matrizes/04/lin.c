/* Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores maiores do que 10 ela possui. */
#include <stdio.h>
#include <stdlib.h>
#define MATRIZ 4
/* inicio do código */
int main()
{
    /* declaração das varíaveis */
    int matriz[MATRIZ][MATRIZ] = {0};
    int i, j, cont = 0;

    /* entrdada de dados */
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Digite um numero inteiro: ");
            scanf("%i", &matriz[i][j]);
        }
    }

    /* bloco de comando */
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(matriz[i][j] > 10)
            {
                cont++;
            }
        }
    }
    printf("\nExistem %i numeros maiores que 10\n\n", cont);
    return 0;
}
/* fim do código */