/* Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.*/
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 100
/* inicio do código */
int main(void)
{
    /* declaração das variáveis */
    int matriz[NUMERO] = {0};
    int multiplos_7[NUMERO] = {0};
    int i, j;
    int multiplos_7j = 0;

    /* bloco de comandos */
    for(i = 0, j = 1; i <= 99; i++, j++)
    {
        multiplos_7j = j % 7;
        if(multiplos_7j != 0)
        {
            matriz[i] = j;
        }
        else
        {
            multiplos_7[i] = j;
        }
    }

    /* saída de dados */
    for(i = 0, j = 1, j; i <= 99; i++, j++)
    {
        if(matriz[i] != 0)
        {
            printf("%.1d\t", matriz[i]);
        }
        if(matriz[i] == 0)
        {
            printf("MM\t");
        }
        if(j % 10 == 0)
        {
            printf("\n");
        }
    }

    int n = 0;
    printf("\nSe quiser saber quais sao os multiplos de 7, digite 1\nSe nao digite 2: ");
    scanf("%d", &n);
    if(n == 1)
    {
        for(i = 0, j = 1; i <= 99; i++, j++)
        {
            if(matriz[i] != 0)
            {
                printf("%s\t", "NM");
            }
            if(matriz[i] == 0)
            {
                printf("%d\t", multiplos_7[i]);
            }
            if(j % 10 == 0)
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