/*
 ============================================================================
 Name			: exercicio_2.20
 Author      	: Eduardo Felizardo
 Creation date 	: 27/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
 2.20	Diâmetro, circunferência e área de um círculo. 
	Escreva um programa que leia o raio de um círculo e informe o diâmetro, a 
	circunferência e a área do círculo. Utilize o valor constante 3,14159 pa-
	ra pi. Realize cada um desses cálculos dentro das instruções printf e use 
	o especificador de conversão %f. [Nota: neste capítulo, discutimos apenas 
	constantes e variáveis inteiras. No Capítulo 3, discutiremos os números 
	em ponto flutuante, ou seja, valores que podem ter pontos decimais.]
 ============================================================================
*/ 
#include <stdio.h>

/* inicio da função main*/
int main()
{
	/* declaração de variáveis */
	int raio;		//raio do circulo

	/* entrada de dados */
	printf("Entre com o valor do raio: ");
	scanf("%d", &raio);

	/*processamento e saída de dados */
	printf("O diametro e %d.\n", 2 * raio);
	printf("A circunferencia e %f.\n", 2 * 3.14159 * raio);
	printf("A area da circunferencia e %f", 3.14159 * (raio * raio));

	return 0;		//sucesso para o programa. 
}
/* fim da função main*/


