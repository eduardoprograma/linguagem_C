//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.42 	Diâmetro, circunferência e área de um círculo. 
	Escreva um programa que leia o raio de um círculo (como um valor float) e calcule e imprima o diâmetro, a circunferência e a área. Use o valor 3.14159 para p.z */

#include <stdio.h>
#include <math.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	float diamentro, circunferencia, Area_Circulo, raio;

	/* entrada de dados */
	printf("Entre com o valor do RAIO: ");
	scanf("%f", &raio);

	/* processamento */
	while (raio != -1)
	{
		diamentro = 2 * raio;
		circunferencia = 3.14159 * diamentro;
		Area_Circulo = 3.14159 * pow(raio, 2);
		printf("O raio e: 		%.2f\n", raio);
		printf("O diamentro e: 		%.2f\n", diamentro);
		printf("A circunferencia e: 	%.2f\n", circunferencia);
		printf("A area do circulo e: 	%.2f\n", Area_Circulo);

		printf("Entre com o valor do raio (-1 para encerrar): ");
		scanf("%f", &raio);
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.