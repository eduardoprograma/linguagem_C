//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.33 Quadrado de asteriscos. 
	Escreva um programa que leia o lado de um quadrado e depois exiba esse quadrado a partir de asteriscos. Seu programa deverá funcionar para quadrados de todos os tamanhos de lado entre 1 e 20. Por exemplo, se o programa ler um tamanho 4, ele deverá exibir. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int n = 0;
	int x = 1, y  = 1;

	/* entrada de dados */
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);

	/* processamento */
	while (n != -1)
	{
		if(n <= 20)
		{
			while(y <= n)
			{
				while (x <= n)
				{
					printf("*");
					x++;
				}
				printf("\n");
				y++;
				x = 1;
			}
		}
		else
		{
			printf("Este programa comporta numeros de 1 a 20. Digite numeros neste intervalo.\n");
		}
		
		printf("\n");
		y = 1;
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.