/* Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor. */
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 10
/* inicio do código */
int main(void)
{
    /* declaração de variáveis */
    float vet[NUMERO] = {0}; 
    int aux = 0;
    int i, negativo = 0;
    float soma = 0.0;

    /* entrada de dados */
    for(i = 0; i <= 9; i++)
    {
        printf("Digite um numero real: ");
        scanf("%f", &vet[i]);
    }

    /* bloco de comandos */
    for(i = 0; i <= 9; i++)
    {
        aux = vet[i];
        if(aux < 0)
        {
            negativo++;
        }
        if((aux % 2) == 0)
        {
            soma = soma + vet[i];
        }
    }
    /* saída de dados */
    printf("\nA quantidade de numeros negativos %d\n", negativo);
    printf("\nA soma dos positivos %.2f\n", soma);
    return 0;
}
/* fim do código */
