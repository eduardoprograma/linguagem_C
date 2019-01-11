/* Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados do array C.*/
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 10
/* inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int A[NUMERO], B[NUMERO], C[NUMERO];
    int i;

    /* inicialzação */
    A[NUMERO] = B[NUMERO] = C[NUMERO] = 0;

    /* entrada de dados */
    for(i = 0; i <10; i++)
    {
        printf("Digite um numero inteiro para A: ");
        scanf("%d", &A[i]);
        printf("Digite um numero inteiro para B: ");
        scanf("%d", &B[i]);
    }

    /* bloco de comandos */
    for(i = 0; i < 10; i++)
    {
        C[i] = A[i] + B[i];
    }

    /* saida de dados */
    printf("Os valores de C sao:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\t", C[i]);
    }
    return 0;
}
/* fim do código */