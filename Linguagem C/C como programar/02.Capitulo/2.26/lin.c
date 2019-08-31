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
 2.26	Múltiplos. 
	Escreva um programa que leia dois inteiros, determine e imprima se o primeiro for um múltiplo do segundo. 
	[Dica: use o operador módulo.]
 ============================================================================
*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x, y;
	int mul = 0;

	/* entrada de dados */
	printf("Digite dois numeros inteiros: ");
	scanf("%d%d", &x, &y);
	
	/* processamento */
	mul = x % y; 		//Determinando se são multiplos.

	/* saída de dados */
	if(mul == 0)
	{
		printf("O numero %d e multiplo de %d.\n", x, y);
	}
	else
	{
		printf("O numero %d nao e multiplo de %d.\n", x, y);
	}

	return 0;
}			//fim da função main.