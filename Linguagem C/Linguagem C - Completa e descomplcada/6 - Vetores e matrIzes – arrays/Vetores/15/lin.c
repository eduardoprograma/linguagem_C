/* Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela. */
#include <stdio.h>
#include <stdlib.h>
#define VETOR 10
/* inicio do código */
int main()
{
    /* Declaração de variáveis */
    int vetor[VETOR] = {0}; //declaração do vetor principal
    int i, j, ord = 10;      //contador

    /* entrada de dados */
    for(i = 0; i < 10; i++)
    {
        printf("Controle %d.\n",i + 1);
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    /* bloco de comandos */
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(vetor[i] < vetor[j])
            {
                ord = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = ord;
            }
        }
    }

    /* saída de dados */
    puts("Ordem crescente.");
    for(i = 0; i < 10; i++)
    {
        printf("%d\t", vetor[i]);
    }
}
/* fim do código */