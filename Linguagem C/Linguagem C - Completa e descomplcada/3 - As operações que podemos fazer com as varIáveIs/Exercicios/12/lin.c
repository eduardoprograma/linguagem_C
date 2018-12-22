/*Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: 
                            V = p * raio^2 * altura
, em que p = 3.141592*/
#include <stdio.h>
#include <math.h>
#define p 3.141592
/* Inicio do código */
int main(void)
{
    /* Declaração das variáveis */
    float altura = 0, raio = 0, V = 0;

    /* Entrada de dados */
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    /* Bloco de comandos */
    V = p * pow(raio, 2) * altura;

    /* Saída de dados */
    printf("\nO valor do volume: %.2f\n\n", V);
    return 0;
}

/* Fim do código */