//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.5	Combine as instruções que você escreveu no Exercício 3.4 em um programa que calcule a soma dos inteiros de 1 a 10. Use a estrutura while para realizar um loop pelas instruções de cálculo e incremento. O loop deverá terminar quando o valor de x chegar a 11. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x = 1, soma = 0;
	int i  = 0;
	
	/* entrada de dados */
	/* processamento */
	/* saída de dados */
	while (i < 10)
	{
		soma += x;
		printf("A soma e: %d\n", soma);
		i++;
	}
	return 0;
}			//fim da função main.