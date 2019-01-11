/* Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y. */
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 8
/* inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int vet[NUMERO] = {0};
    int x = 0, y = 0;
    int i, soma = 0;

    /* entrada de dados */
    for(i = 0; i <= 7; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vet[i]);
    }
    printf("Digite um valor para x (0 a 7): ");
    scanf("%d", &x);
    printf("Digite um valor para y (0 a 7): ");
    scanf("%d", &y);

    /* bloco de comando */
    soma = vet[x] + vet[y];
    printf("A soma das duas posicoes e: %d\n\n", soma);
    return 0;
}
/* fim do código */