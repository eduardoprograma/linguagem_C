//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.23 Imprimindo números por um loop. 
	Escreva um programa que utilize o looping para imprimir os números de 1 a 10 lado a lado na mesma linha, com três espaços entre os números. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i = 1;

	/* entrada de dados */
	/* processamento */
	/* saída de dados */
	while (i <= 10)
	{
		printf("%3d", i);
		i++;
	}
	return 0;
}			//fim da função main.