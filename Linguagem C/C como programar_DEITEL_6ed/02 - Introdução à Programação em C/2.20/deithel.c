/*Escreva um programa que leia o raio de um círculo e imprima seu diâmetro, o valor de sua circunferência e sua área. Use o valor constante de 3,14159 para "pi". Faça cada um destes cálculos dentro da instrução (ou instruções) printf e use o especificador de conversão %f (Nota: Neste capítulo, analisamos apenas variáveis e constantes inteiras. No Capítulo 3 analisaremos números de ponto flutuante, i.e., valores que podem possuir pontos decimais.)*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    float raio = 0.00, diametro = 0.00, circunferencia = 0.00, area = 0.00;
    float pi = 3.14159;

    /*Entrada de dados*/
    printf("Entre com o valor do Raio em milimitros: ");
    scanf("%f", &raio);

    /*Bloco de comando*/
    printf("Analisando a o Circulo como figura plana:\n");
    area = pi * pow(raio, 2);
    circunferencia = 2 * pi* raio;
    diametro = raio * 2;

    /*Saída de dados*/
    printf("Di%cmetro: %.2lf\n", 131, diametro);
    printf("Circunfer%ccia: %.2lf\n", 136, circunferencia);
    printf("%crea: %.2lf\n", 181, area);

    system("pause");
    return 0;
}
/*Fim do código*/