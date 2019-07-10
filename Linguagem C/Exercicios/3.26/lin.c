//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.26 Saída tabular. 
Escreva um programa que use o looping para produzir a seguinte tabela de valores: */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int A = 3, i = 1;

	/* entrada de dados */
	/* processamento */
	/* saída de dados */
	printf("\nA\tA + 2\tA + 4\tA + 6\n");
	while (i < 6)
	{
		printf("%d\t%d\t%d\t%d\n", A * i,(A * i) + 2, (A * i) + 4, (A * i) + 6 );
		i++;
	}
	return 0;
}			//fim da função main.