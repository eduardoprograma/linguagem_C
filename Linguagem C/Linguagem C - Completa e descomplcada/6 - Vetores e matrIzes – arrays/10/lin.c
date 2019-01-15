/* Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.*/
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 100
/* inicio do código */
int main(void)
{
    /* declaração das variáveis */
    int matriz[NUMERO][NUMERO] = {0};
    int multiplos_7[NUMERO][NUMERO] = {0};
    int i, j;
    int multiplos_7i = 0, multiplos_7j = 0;

    /* bloco de comandos */
    for(i = 0; i <= 99; i++)
    {
        for(j = 0; j <= 99; j++)
        {
            multiplos_7i = i % 7;
            multiplos_7j = j % 7;
            if(multiplos_7i != 0 && multiplos_7j != 0)
            {
                matriz[i][j];
            }
            else
            {
                multiplos_7[i][j];
            }
        }
    }

    /* saída de dados */
    for(i = 0; i <= 99; i++)
    {
        for(j = 0; j <= 99; j++)
        {
            printf("%d\t", matriz[i][j]);
            if(i != 0 && (i % 10) == 0)
            {
                printf("\n");
            }
        }
    }
    int n = 0;
    printf("Se quiser saber quais sao os multiplos de 7, digite 1\nSe nao digite 2: ");
    scanf("%d", n);
    if(n == 1)
    {
        for(i = 0; i <= 99; i++)
        {
            for(j = 0; j <= 99; j++)
            {
                printf("%d\t", multiplos_7[i][j]);
            }
            if(i != 0 && (i % 10) == 0)
            {
                printf("\n");
            }
        }
    }
    else
    {
        return 0;
    }
}
/* fim do código */