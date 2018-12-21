/*Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.*/
#include <stdio.h>

int main(void)
{
    float x, y;
    printf("Digite dois valores de numeros reais: ");
    scanf("%f%f", &x, &y);
    printf("\nValores lidos: %.2f, %.2f", y, x);
    return 0;
}