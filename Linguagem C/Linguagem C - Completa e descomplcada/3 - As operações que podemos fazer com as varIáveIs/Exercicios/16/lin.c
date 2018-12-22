/* Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois (utilize os operadores de deslocamento de bits). */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int n, divis = 0, multiplicacao = 0;

    /* Entrada de dados */
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    /* Bloco de comandos */
    multiplicacao = n << 1;
    divis = n >> 1;

    /* Saída de dados */
    printf("\nO produto do numero %d: %d\nA divisao do numero %d: %d\n\n", n, multiplicacao, n, divis);
    return 0;
}

/* Fim do código */