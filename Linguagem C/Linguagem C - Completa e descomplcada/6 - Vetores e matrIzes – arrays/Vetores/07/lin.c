/* Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor. */
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 10
/* inicio do código */
int main(void)
{
    /* declare as variaveis */
    int X[NUMERO] = {0};
    int i, maior = 0, menor = 0;

    /* entrada de dados */
    for(i = 0; i <= 9; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &X[i]);
        menor = maior = X[i];
    }
    /* bloco de comandos*/
    for(i = 0; i<= 9; i++)
    {
        if(X[i] > maior)
        {
            maior = X[i];
        }
        if(X[i] < menor)
        {
            menor = X[i];
        }
    }

    /* saída de dados */
    printf("O numero maior %d, e o numero menor %d\n\n", maior, menor);
    return 0;
}
/* fim do código */