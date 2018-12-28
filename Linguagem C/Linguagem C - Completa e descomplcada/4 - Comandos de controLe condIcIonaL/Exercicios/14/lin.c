/* Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    int n, resto = 0;

    /* Entrada de dados */
    printf("Entre com um numero inteiro: ");
    scanf("%d", &n);

    /* Bloco de comandos */
    if(n % 3 == 0)
    {
        printf("\nEste numero e divisivel por 3.\n");
    }
    if(n % 5 == 0)
    {
        printf("\nEste numero e divisivel por 5.\n");
    }

    return 0;
}
/* Fim do código */