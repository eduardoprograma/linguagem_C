/* Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita, do primeiro número pelo segundo. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declare as variáveis */
    int num1, num2, deslocamento = 0;

    /* Entrada de dados */
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);

    /* Bloco de comandos */
    deslocamento = num2 << num1;
    printf("\nDeslocamento:%d\n", deslocamento);

    deslocamento = num2 >> num1;
    printf("\nDeslocamento:%d\n", deslocamento);

    /* Término */
    return 0;
}
/* Fim do código */