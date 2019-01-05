/* Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O programa tem de retornar o maior e o menor número lido. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int n, maior = 0, menor = 0;
    
    /* entrada de dados */
    printf("Digite um numero inteiro(-1 para finalizar): ");
    scanf("%d", &n);
    menor = n;
    /* bloco de comandos */
    while(n != -1)
    {
        printf("Digite um numero inteiro(-1 para finalizar): ");
        scanf("%d", &n);
        if(n > maior)
        {
            maior = n;
        }
        if(n < menor && n != -1)
        {
            menor = n;
        }
    }
    printf("\nO numero maior: %d... O numero menor: %d\n", maior, menor);
}/* Fim do código */