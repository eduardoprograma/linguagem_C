//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.12 	Calculando a soma de inteiros pares. 
	Escreva um programa que calcule e imprima a soma dos inteiros pares de 2 a 30. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i, soma = 0;

	/* entrada de dados */
	/* processamento */
	for (i = 2; i < 31; i+=2)
	{
		soma += i;
	}
	
	/* saída de dados */
	printf("A soma dos numeros pares e %d.\n", soma);
	return 0;
}			//fim da função main.