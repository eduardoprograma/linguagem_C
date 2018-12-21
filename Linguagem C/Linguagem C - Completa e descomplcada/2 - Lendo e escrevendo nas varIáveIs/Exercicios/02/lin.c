/*Escreva um programa que leia um número inteiro e depois o imprima.*/
#include <stdio.h>

int main(void)
{
    unsigned int x, y;

    printf("Digite dois numeros inteiros: ");
    scanf ("%u%u", &x, &y);
    printf("\nOs numeros digitados sao: %u, %u\n\a", x, y);
    return 0;
}