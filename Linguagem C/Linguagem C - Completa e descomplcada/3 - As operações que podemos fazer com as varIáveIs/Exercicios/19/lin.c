/* Elabore um programa que leia dois números inteiros e exiba o resultado das operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles. */
#include <stdio.h>

/* Incio do código */
int main(void)
{
    /* Declara as variáveis */
    int num1, num2, res = 0;

    /* Entrada de dados */
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);

    /* Bloco de comandos */

    /* “ou exclusivo” */
    printf("\n|| Exclusivo\n");
    res = num2 ^ num1;
    printf("\nResultado: %d\n", res);
    res = num1 ^ num2;
    printf("\nResultado: %d\n\n", res);

    /* “ou bit a bit” */
    printf("\n|| bit a bit\n");
    res = num2 | num1;
    printf("\nResultado: %d\n", res);
    res = num1 | num2;
    printf("\nResultado: %d\n\n", res);

    /* “e bit a bit” */
    printf("\n& bit a bit\n");
    res = num2 & num1;
    printf("\nResultado: %d\n", res);
    res = num1 & num2;
    printf("\nResultado: %d\n\n", res);
    return 0;
}
/* Fim do código */