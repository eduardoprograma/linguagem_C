/* Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores negativos ela possui. */
#include <stdio.h>
#include <stdlib.h>
#define MATRIZ 4
/* inicio do código */
int main()
{
    /* declaração de varíaveis */
    int matriz[MATRIZ][MATRIZ] = {0};
    int i, j, cont = 0;

    /* entrada de dados */
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Digite um numero positivo ou negativo: ");
            scanf("%i", &matriz[i][j]);
        }
    }

    /* bloco de comandos */
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(matriz[i][j] < 0)
            {
                cont++;
            }
        }
    }
    printf("Foram digitados %i numeros negativos nesta matriz.\n\n", cont);
    return 0;
}
/* fim do código */