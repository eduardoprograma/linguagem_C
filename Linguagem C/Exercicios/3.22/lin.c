//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.22 Pré-incrementando versus pós-incrementando. Escreva um programa que demonstre a diferença entre pré-decrementar e pós-decrementar usando o operador de decremento --. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i = 0, j = 0;		//variáveis para a demonstração

	/* entrada de dados */
	/* processamento */
	/* saída de dados */
	printf("\npos-incrementando\n");
	while (i < 10)			//pós incremento
	{
		printf("Valor e %d\n", i);
		i++;
	}
	i = 0;
	printf("\nPré-incrementando\n");
	while (i < 10)			//pré incremento
	{
		printf("Valor e %d\n", i);
		++i;
	}
	i = 10;
	printf("\npós-decrementar\n");
	while (i > 0)			//pós decremento
	{
		printf("Valor e %d\n", i);
		i--;
	}
	i = 10;
	printf("\npré-decrementar\n");
	while (i > 0)			//pré decremento
	{
		printf("Valor e %d\n", i);
		--i;
	}
	return 0;
}			//fim da função main.