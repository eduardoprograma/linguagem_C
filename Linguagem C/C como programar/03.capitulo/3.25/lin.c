//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.25 Saída tabular. 
	Escreva um programa que use o looping para imprimir a tabela de valores a seguir. Use a sequência de escape de tabulação, \t, na instrução printf para separar as colunas com tabulações. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int N = 0;
	/* entrada de dados */
	/* processamento */
	printf("%3c\t10*N\t100*N\t1000*N\n\n", 'N');
	while (N < 10)
	{
		N++;
		printf("%3d\t%d\t%d\t%d\t\n", N, 10 * N, 100 * N, 1000 * N);
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.