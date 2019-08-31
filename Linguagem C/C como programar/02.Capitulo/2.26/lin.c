/*
 ============================================================================
 Name			: exercicio_2.26
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
	Escreva um programa que leia dois inteiros, determine e imprima se o pri-
	meiro for um múltiplo do segundo. 
	[Dica: use o operador módulo.]
 ============================================================================
*/
/* Solução do exercício 2.26 */
#include <stdio.h>

/* inicio da função main */
int main()
{
	int num1;		//primeira integral.
	int num2;		//segunda integral.

	/* entrada de dados */
	printf("Digite dois numeros inteiros: ");		//entrada de dados.
	scanf("%d%d", &num1, &num2);		//leia os numeros e guarde.

	/* saida de dados */
	if((num1 % num2) == 0)
	{
		printf("%d e um multiplo de %d.\n", num1, num2);
		printf("Por um fator %d.\n", num1 / num2);
	}
	if((num1 % num2) != 0)
	{
		printf("%d nao e um multiplo de %d.\n", num1, num2);
	}

	return 0;		//sucesso do programa.
}
/* fim da função main */