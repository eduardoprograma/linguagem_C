/* Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    unsigned int n, complemento = 0;
    /* Entrada de dados */
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    /* Bloco de comandos */
    complemento = ~n;

    /* Saída de dados */
    printf("\nO complemento do numero %d: %d\n\n", n, complemento);
    return 0;
}
/* Fim do código */