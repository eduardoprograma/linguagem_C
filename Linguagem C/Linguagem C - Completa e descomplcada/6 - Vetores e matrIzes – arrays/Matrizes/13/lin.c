/* Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma dos elementos dessa matriz que não pertencem à diagonal principal nem à diagonal secundária. */
#include <stdio.h>
#include <stdlib.h>
#define MATRIZ 5
/* inicio do código */
int main()
{
    /* declaração de variáveis */
    int matriz[MATRIZ][MATRIZ] = {0};
    int i  = 0, j = 0;
    int soma = 0;

    /* Entrada de dados */
    while(i < 5)
    {
        while(j < 5)
        {
            printf("Digite um numero inteiro: ");
            scanf("%i", &matriz[i][j]);
            j++;
        }
        i++;
        j = 0;
    }

    /* bloco de comandos */
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(i == 0)
            {
                if(j != 0)
                {
                    if(j != 4)
                    {
                        soma += matriz[i][j];
                    }
                }
            }
            else if(i == 1)
            {
                if(j != 1)
                {
                    if(j != 3)
                    {
                        soma += matriz[i][j];
                    }
                }
            }
            else if(i == 2)
            {
                if(j != 2)
                {
                    soma += matriz[i][j];
                }
            }
            else if(i == 3)
            {
                if(j != 1)
                {
                    if(j != 3)
                    {
                        soma += matriz[i][j];
                    }
                }
            }
            else if(i == 4)
            {
                if(j != 0)
                {
                    if(j != 4)
                    {
                        soma += matriz[i][j];
                    }
                }
            }
        }
    }
    
    /* saida de dados */
    printf("A soma : %i\n\n", soma);
    return 0;
}
/* fim do código */