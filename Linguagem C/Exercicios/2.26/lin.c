//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.26	Múltiplos. 
	Escreva um programa que leia dois inteiros, determine e imprima se o primeiro for um múltiplo do segundo. 
	[Dica: use o operador módulo.]*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x, y;
	int mul = 0;

	/* entrada de dados */
	printf("Digite dois numeros inteiros: ");
	scanf("%d%d", &x, &y);
	
	/* processamento */
	mul = x % y; 		//Determinando se são multiplos.

	/* saída de dados */
	if(mul == 0)
	{
		printf("O numero %d e multiplo de %d.\n", x, y);
	}
	else
	{
		printf("O numero %d nao e multiplo de %d.\n", x, y);
	}

	return 0;
}			//fim da função main.