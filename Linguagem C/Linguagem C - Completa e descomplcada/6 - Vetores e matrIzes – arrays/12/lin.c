/* Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela. */
#include <stdio.h>
#include <stdlib.h>
#define POSICAO 10
/* incio do código */
int main()
{
    /* declaração de variáveis */
    float vetor[POSICAO] = {0};
    int i, j;

    /* bloco de comandos */
        /* entrada de dados */
        for(i = 0; i <= 9; i++)
        {
            printf("Digite numeros reais ou interios: ");
            scanf("%f", &vetor[i]);
        }

        /* comparação */
        puts("Numeros que se repetem");
        for(i = 0; i <= 9; i++)
        {
            for(j = 0; j <= 9; j++)
            {
                if(i != j && vetor[i] == vetor[j] && i < j)
                {
                    printf("vetor[%d] = vetor[%d] == %f\t\n", i, j, vetor[i]);
                }
            }
        }
    /* fim do bloco de comandos */
    return 0;
}
/* fima do código */