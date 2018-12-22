/*Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação: 
h^2 = a^2 + b^2
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula dada. Imprima o resultado.*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    /* Declaração de variáveis */
    float h = 0, a, b;

    /* Entrada de dados */
    printf("Entre com o valor dos dois catetos: ");
    scanf("%f%f", &a, &b);

    /* Bloco de comandos */
    h = sqrt(pow(a, 2) + pow(b, 2));

    /* Saída de dados */
    printf("\nO valor a da hipotenusa e: %.2f\n\n", h);
    return 0;
}
