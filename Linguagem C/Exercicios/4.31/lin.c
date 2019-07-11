//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.31 	Programa de impressão de losango. 
	Escreva um programa que imprima a forma de losango a seguir. Você pode usar instruções printf que exibem um único asterisco (*) ou um espaço em branco. Maximize o uso da repetição (com estruturas for aninhadas) e minimize o número de instruções printf. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x, y, z;

	/* entrada de dados */
	/* processamento */
	for(y = 0; y < 9; y++)
	{
		if(y == 0 || y == 8)
		{
			for(x = 0; x < 9; x++)
			{
				if(x < 5 || x > 5)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		if(y == 1 || y == 7)
		{
			for(x = 0; x < 9; x++)
			{
				if(x < 4 || x > 6)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		if(y == 2 || y == 6)
		{
			for(x = 0; x < 9; x++)
			{
				if(x < 3 || x > 7)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		if(y == 3 || y == 5)
		{
			for(x = 0; x < 9; x++)
			{
				if(x < 2 || x > 8)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		if(y == 4)
		{
			for(x = 0; x < 10; x++)
			{
				if(x < 1 || x > 9)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}	
	/* saída de dados */
	return 0;
}			//fim da função main.