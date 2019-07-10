//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.41 	Múltiplos de 2 com um loop infinito. 
	Escreva um programa que continue imprimindo os múltiplos do inteiro 2, a saber 2, 4, 8, 16, 32, 64 e assim por diante. Seu loop não deverá terminar (ou seja, você deverá criar um loop infinito). O que acontece quando você executa esse programa? */

#include <stdio.h>
#include <math.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	double i = 1;

	/* entrada de dados */
	/* processamento */
	while ((pow(2, i)) != 1.)
	{
		printf("%10.0lf\n", pow(2, i));
		i++;
	}
	/* saída de dados */
	return 0;
}			//fim da função main.