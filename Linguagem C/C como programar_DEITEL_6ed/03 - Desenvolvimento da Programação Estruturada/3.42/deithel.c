/*Escreva um programa que leia o raio de um círculo (como um valor float), calcule seu diâmetro, seu perímetro (circunferência) e sua área e imprima estes valores. Use o valor 3.14159 para pi.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    float raio, diametro = 0, perimetro = 0, area = 0;
    float pi;
    pi = 3.14159;

    /*Entrada de dados*/
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    /*Bloco de comandos*/
    while(raio != -1)
    {
        perimetro = 2 * pi * raio;
        area = pi * pow(raio, 2);
        diametro = perimetro / pi;

        printf("Diametro: %.2f\n", diametro);
        printf("Perimetro: %.2f\n", perimetro);
        printf("Area: %.2f\n", area);
        printf("Raio: %.2f\n", raio);

        printf("\nDigite o raio do circulo (-1 para finaliar): ");
        scanf("%f", &raio);
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/