/*Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.*/
#include <stdio.h>

int main(void)
{
    char x = 'A';
    char y = 'B';
    char z = 'C';
    printf("\nValore lido: %c\nValore lido: %c\nValore lido: %c\n", x, y, z);
    return 0;
}