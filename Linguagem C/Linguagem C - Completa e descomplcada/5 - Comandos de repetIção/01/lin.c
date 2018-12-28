/* Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente. */
#include <stdio.h>

/* Inicio do código */
int main(int argc, char const *argv[])
{
    /* Declaração de variáveis */
    int N, i;

    /* Entrada de dados */
    printf("Entre com um numero inteiro: ");
    scanf("%d", &N);

    /* Bloco de comando */
    for(i = 0; i <= N; i++)
    {
        printf("%d\t", i);
        if(i % 10 == 0 && N != 0)
        {
            printf("\n");
        }
    }
    return 0;
}
/* Fim do código */