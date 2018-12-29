/* Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares. */
#include <stdio.h>

/* Inicio do código */int main(void)
{
    /* Declaração de variável */
    int N, i, j;

    /* Entrada de dados */
    printf("Digite um numero: ");
    scanf("%d", &N);

    /* Blocos de comando */
    for(i = 0; i <= N; i++)
    {
        for(j = 0; j <= N; j++)
        {
            if((i / 1) == i && (i / j) == 1)
            {
                printf("%i\t", i);
            }
        } 
        if((i % 10) == 0)
        {
            printf("\n");
        }
    }
    return 0;
}
/* Fim do código */