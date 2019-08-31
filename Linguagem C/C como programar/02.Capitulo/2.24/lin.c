/*
 ============================================================================
 Name			: exercicio_2.24
 Author      	: Eduardo Felizardo
 Creation date 	: 31/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
 2.24	Par ou ímpar. 
	Escreva um programa que leia um inteiro, determine e imprima se ele é par 
	ou ímpar. 
	[Dica: use o operador módulo. Um número par é um múltiplo de dois. Qual-
	quer múltiplo de dois gera resto zero quando dividido por 2.]
 ============================================================================
*/
/* Solução do exercício 2.24 */
#include <stdio.h>

/* inicio da função main */
int main()
{
	/* declaração de varáveis */
	int integral;		//variável integral.

	/* entrada de dados */
	printf("Digite um numero inteiro: ");	
	scanf("%d", &integral);

	/*saída de dados */
	/* teste de para par */
	if((integral % 2) == 0)
	{
		printf("%d este numero e par.\n", integral);
	}

	/* teste para impar */
	if((integral % 2) != 0)
	{
		printf("%d este numero e impar.\n", integral); 
	}

	return 0;		//sucesso do programa.
}
/* fim da função main */

