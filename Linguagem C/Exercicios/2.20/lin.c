//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.20	Diâmetro, circunferência e área de um círculo. 
	Escreva um programa que leia o raio de um círculo e informe o diâmetro, a circunferência e a área do círculo. Utilize o valor constante 3,14159 para pi. Realize cada um desses cálculos dentro das instruções printf e use o especificador de conversão %f. [Nota: neste capítulo, discutimos apenas constantes e variáveis inteiras. No Capítulo 3, discutiremos os números em ponto flutuante, ou seja, valores que podem ter pontos decimais.]*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	float raio = 0.0, circunferencia = 0.0, area_Circulo =  0.0, diametro = 0.0;

	/* entrada de dados */
	printf("Digite o raio da circunferencia: ");
	scanf("%f", &raio);

	/* processamento */
	/* saída de dados */
	printf("O diametro %.2f\n", diametro =  2 * raio);
	printf("A circunferencia %.2f\n", circunferencia = diametro * PI);
	printf("A area da circunferencia %.2f\n", area_Circulo = PI * pow(raio, 2));

	return  0;
}			//fim da função main.