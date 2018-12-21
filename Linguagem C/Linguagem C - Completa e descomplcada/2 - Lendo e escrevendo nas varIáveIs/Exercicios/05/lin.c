/*Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu.*/
#include <stdio.h>

int main(void)
{
    float x = 3.14159;

    printf("\nValor lido com saida float: %.2f\n", x);
    printf("Valor lido com saida int: %d\n\n", x);
    return 0;
}