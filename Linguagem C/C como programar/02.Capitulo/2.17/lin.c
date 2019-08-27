/*
 ============================================================================
 Name			: exercicio_2.17
 Author      	: deitel - C Como programar
 Creation date 	: 27/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2
 ============================================================================
*/
/*
 ============================================================================
 2.17	Imprimindo valores com printf. Escreva um programa que imprima os nú-
 meros de 1 a 4 na mesma linha. Escreva o programa utilizando os métodos a 
 seguir.
	a) Uma instrução printf sem especificadores de conversão.
	b) Uma instrução printf com quatro especificadores de conversão.
	c) Quatro instruções printf.
 ============================================================================
*/
#include <stdio.h>

/* Inicio da função main */
int main()
{
	/* declaração de variáveis */
	int A = 1;
	int B = 2;
	int C = 3;
	int D = 4;

	/* Saída de dados */
	printf("1, 2, 3, 4.\n");		//sem especificadores.
	printf("%d, %d, %d, %d.\n", A, B, C, D);		//com especificadores
	printf("%d, ", A);		//primeira 
	printf("%d, ", B);		//segunda
	printf("%d, ", C);		//terceira
	printf("%d.\n", D);		//quarta e ultima.

	return 0;		//Sucesso do programa.
}
/* fim da função main */
