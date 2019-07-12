//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.21 	Projeto: desenhando formas com caracteres. 	
	Use técnicas semelhantes às que foram desenvolvidas nos exercícios 5.19 a 5.20 para produzir um programa que represente graficamente uma grande variedade de formas. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int forma;

	/* entrada de dados */
	printf("1.Quadrado fechado.\n2.Quadrado vazado.\n");
	printf("Digite uma opcao: ");
	scanf("%d", &forma);
	
	/* processamento */
	/* saída de dados */
}			//fim da função main.
int quadrado(int lado)
{
	int i, j; 		//contador

	for(i = 0; i < lado; i++)		//Linhas do quadrado
	{
		for(j = 0; j < lado; j++)		//Conteúdo da linha
		{
			printf("*");
		}
		printf("\n");
	}
}
int quadrado_vazado(int lado)
{
	int i, j;
	for(i = 0; i < lado; i++)		//Linhas do quadrado
	{
		for(j = 0; j < lado; j++)		//Conteúdo da linha
		{
			if(i == 0 || i == (lado - 1))			//Linha inteira do quadrado
			{
				printf("*");
			}
			if(i > 1 || i < (lado - 2))			//Laterais do quadrado.
			{
				printf("*");
			}
			else
			{
				printf(" ");			//Centro do quadrado
			}
		}
		printf("\n");
	}
}