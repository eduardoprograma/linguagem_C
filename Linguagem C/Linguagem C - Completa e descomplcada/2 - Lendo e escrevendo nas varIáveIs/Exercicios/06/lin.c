/*Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.*/
#include <stdio.h>

int main(void)
{
    double x = 100000000;

    printf("\nValor lido: %.3e", x);
    return 0;
}