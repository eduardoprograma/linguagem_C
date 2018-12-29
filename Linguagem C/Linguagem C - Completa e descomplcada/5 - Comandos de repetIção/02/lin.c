/* Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. */
#include <stdio.h>

/* Inicio do código */int main(void)
{
    /* Declaração de variável */
    int N, i;

    /* Entrada de dados */
    printf("Digite um numero: ");
    scanf("%d", &N);

    /* Blocos de comando */
    for(i = N; i >= 0; i--)
    {
        printf("%d\t", i);
        if(i % 10 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}
/* Fim do código */