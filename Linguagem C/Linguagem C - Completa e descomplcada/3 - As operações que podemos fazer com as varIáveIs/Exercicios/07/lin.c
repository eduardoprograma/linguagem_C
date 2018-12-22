/*Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.*/
#include <stdio.h>
#define DOLAR 3.90

int main(void)
{
    float real = 0, conversoa = 0;
    printf("Digite o valor para conversão em R$ ");
    scanf("%f", &conversoa);
    real = conversoa / DOLAR;
    printf("\nO valor convertido para $ %.2f", real);
    return 0;
}