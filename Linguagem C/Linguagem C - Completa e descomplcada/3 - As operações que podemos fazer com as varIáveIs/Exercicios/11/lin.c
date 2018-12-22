/*Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. A área do círculo é A = p * raio^2, sendo p = 3.141592.*/
#include <stdio.h>
#include <math.h>
#define p 3.141592

/* Inicio do código */
int main(void)
{
    /* Declaração de varáveis */
    float A = 0, raio = 0;

    /* Entrada de dados */
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    /* Bloco de comandos */
    A = p * pow(raio, 2);

    /* Saída de dados */
    printf("\nA area da circunferencia; %.2f\n\n", A);
    return 0;
}
/* Fim do código */