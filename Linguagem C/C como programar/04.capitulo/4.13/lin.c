//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.13 	Calculando o produto de inteiros ímpares. 
	Escreva um programa que calcule e imprima o produto dos inteiros ímpares de 1 a 15. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i, x = 1;

	/* entrada de dados */
	/* processamento */
	for(i = 1; i < 16; i += 2)
	{
		x *= i;
	}

	/* saída de dados */
	printf("O produto dos numeros impares ate 15 e %d.\n\n", x);
	return 0;
}			//fim da função main.