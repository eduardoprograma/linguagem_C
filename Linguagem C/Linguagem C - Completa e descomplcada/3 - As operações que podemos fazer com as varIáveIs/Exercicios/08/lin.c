/*Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
#include <stdio.h>

int main(void)
{
    float F = 0, C = 0;
    printf("Digite a temperatura em Celsius para ser convertido em Fahrenhit: ");
    scanf("%f", &C);
    F = C * (9.0 / 5.0) + 32.0;
    printf("\nO valor em Fahrenheit %.2f%cF", F, 167);
    return 0;
}