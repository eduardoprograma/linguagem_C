/* Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores pares foram armazenados nesse vetor. */
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 10
/* inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int vet[NUMERO] = {0};
    int i, pares = 0, divi = 0;

    /* entrada de dados */
    for(i = 0; i <= 9; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vet[i]);
        divi = vet[i] % 2;
        if(divi == 0)
        {
            pares++;
        }
    }

    /* saída de dados */
    printf("O numero de valores pares foram %d.\n\n", pares);
    return 0;
}
/* fim do código */