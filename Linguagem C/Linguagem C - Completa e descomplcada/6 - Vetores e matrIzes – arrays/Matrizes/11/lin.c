/* Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma dos elementos dessa matriz que estão acima da diagonal principal. */
#include <stdio.h>
#include <stdlib.h>
#define MATRIZ 5
/* inicio do código */
int main()
{
    /* declaração de variáveis */
    int matriz[MATRIZ][MATRIZ] = {0};
    int i, j;
    int soma = 0;

    /* entrada de dados */
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Digite um numero inteiro: ");
            scanf("%i", &matriz[i][j]);
        }
    }

    /* bloco de comandos */
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(i == 0)
            {
                if(j < 5)
                {
                    soma += matriz[i][j];
                }
            } 
            else if(i == 1)
            {
                if(j != 0)
                {
                    if(j < 5)
                    {
                        soma += matriz[i][j];
                    }
                }
            }
            else if(i == 2)
            {
                if(j != 0)
                {
                    if(j != 1)
                    {
                        if(j < 5)
                        {
                            soma += matriz[i][j];
                        }
                    }
                }
            }
            else if(i == 3)
            {
                if(j != 0)
                {
                    if(j != 1)
                    {
                        if(j != 2)
                        {
                            if(j < 5)
                            {
                                soma += matriz[i][j];
                            }
                        }
                    }
                }
            }
            else if(i == 4)
            {
                if(j == 4)
                {
                    if(j < 5)
                    {
                        soma += matriz[i][j];
                    }
                }
            }
        }
    }
    printf("A soma: %i\n\n", soma);
    return 0;
}
/* fim do código */