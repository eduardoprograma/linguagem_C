/* Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o menor valor contido nessa matriz */
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 3
/* inicio do código */
int main()
{
    /* declaração de varipaveis */
    int matriz[NUMERO][NUMERO][NUMERO] = {0};
    int i = 0, j = 0, k = 0;
    int menor = 0, maior = 0;

    /* entrada de dados */
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                printf("Digite Um valor inteiro: ");
                scanf("%i", &matriz[i][j][k]);
            }
        }
    }
    menor = matriz[i][j][k];

    /* bloco de comandos */
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {   
                if(menor >= matriz[i][j][k])
                {
                    menor = matriz[i][j][k];
                }
                else if (maior <= matriz[i][j][k])
                {
                    maior = matriz[i][j][k];
                }
            }
        }
    }
    /* saida de daos */
    printf("O menor numero da matris 3 x 3 e: %i\n\n", menor);
    return 0;
}
/* fim do código */