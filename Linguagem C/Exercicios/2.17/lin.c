//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.17	Imprimindo valores com printf. Escreva um programa que imprima os números de 1 a 4 na mesma linha. Escreva o programa utilizando os métodos a seguir.
	a) Uma instrução printf sem especificadores de conversão.
	b) Uma instrução printf com quatro especificadores de conversão.
	c) Quatro instruções printf. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int A = 1, B = 2, C = 3, D = 4;

	/* entrada de dados */
	/* processamento */
	printf("1, 2, 3, 4.\n");
	printf("%d, %d, %d, %d.\n", A, B, C, D);
	printf("%d, ", A);
	printf("%d, ", B);
	printf("%d, ", C);
	printf("%d.\n", D);
	/* saída de dados */

	return 0;
}			//fim da função main.