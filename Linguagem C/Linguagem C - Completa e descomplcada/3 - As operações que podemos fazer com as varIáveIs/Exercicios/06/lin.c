/*Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.*/
#include <stdio.h>

int main(void)
{
    float quilometro = 0, velocidade = 0;

    printf("Entre com o valor em quilometros a ser convertido: ");
    scanf("%f", &quilometro);
    velocidade = (quilometro) / 36;
    printf("\nO valor convertido de km/h para m/s e (%.2f m/s)\n\n", velocidade);
    return 0;
}