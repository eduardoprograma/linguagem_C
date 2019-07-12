//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.18 	Par ou ímpar. 
	Escreva um programa que inclua uma série de inteiros e os passe um de cada vez à função even, que usa o operador de módulo para determinar se um inteiro é par. A função deverá usar um argumento inteiro e retornar 1 se o inteiro for par, e retornar 0 se o inteiro for ímpar. */

#include <stdio.h>

int even(int n);

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int n1, n2, n3, n4, n5;
	int i;

	/* entrada de dados */
	printf("Digite 5 numeros inteiros: ");
	scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
	goto conc;

	/* processamento */
	while (n1 != -1)
	{
		printf("Digite 4 numeros inteiros: ");
		scanf("%d%d%d%d", &n2, &n3, &n4, &n5);
		conc:
		for(i = 0; i < 5; i++)
		{
			if(i == 0)
			{
				if(even(n1) == 1)
				{
					printf("O numero %d e par.\n\n", n1);
				}
				else
				{
					printf("O numero %d nao e par.\n\n", n1);
				}
			}
			if(i == 1)
			{
				if(even(n2) == 1)
				{
					printf("O numero %d e par.\n\n", n2);
				}
				else
				{
					printf("O numero %d nao e par.\n\n", n2);
				}
			}
			if(i == 2)
			{
				if(even(n3) == 1)
				{
					printf("O numero %d e par.\n\n", n3);
				}
				else
				{
					printf("O numero %d nao e par.\n\n", n3);
				}
			}
			if(i == 3)
			{
				if(even(n4) == 1)
				{
					printf("O numero %d e par.\n\n", n4);
				}
				else
				{
					printf("O numero %d nao e par.\n\n", n4);
				}
			}
			if(i == 4)
			{
				if(even(n5) == 1)
				{
					printf("O numero %d e par.\n\n", n5);
				}
				else
				{
					printf("O numero %d nao e par.\n\n", n5);
				}
			}
		}
		printf("Digite 1 numero inteiro(-1 para finalizar): ");
		scanf("%d", &n1);
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.
int even(int n)
{
	if((n % 2) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}