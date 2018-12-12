/*c) Escreva um programa que calcule o valor de e^x usando a fórmula e^(x = 1 + x/1! + x*x/2! + (X*X*X)/3!)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    float x, e = 2.72, resultado = 0;

    /*Entrada de dados*/
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    /*Bloco de comando*/
    x = (1 + x / 1) + (x * x / 2) + ((x * x * x) / 6);
    resultado = pow(e, x);

    printf("\nO valor de e : %.2f\n\n", resultado);

    system("pause");
    return 0;
}
/*Fim código*/