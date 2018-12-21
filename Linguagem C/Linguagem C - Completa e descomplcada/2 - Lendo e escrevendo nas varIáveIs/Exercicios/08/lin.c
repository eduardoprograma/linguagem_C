/*Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.*/
#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &x, &y);
    printf("\nValores lido: %d, %d.\n\n", y, x);
    return 0;
}