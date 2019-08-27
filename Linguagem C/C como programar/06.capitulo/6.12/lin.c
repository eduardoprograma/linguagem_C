/*
 ============================================================================
 Name			: linc.c
 Author      	: Eduardo Felizardo Cï¿½ndido
 Creation date 	: 31/07/2019
 Version     	: R00
 Copyright   	: Your copyright notice
 Description 	: Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 6.12 	Escreva instruções isoladas que realizem cada uma das operações de 
 array de subscrito único a seguir:
	a) Inicializem os 10 elementos do array de inteiros counts com zeros.
	b) Somem 1 a cada um dos 15 elementos do array de inteiros bonus.
	c) Leiam os 12 valores do array de ponto flutuante tempPorMes via teclado.
	d) Imprimam os cinco valores do array de inteiros bestScores em formato de 
	coluna.
 ============================================================================
 */
#include <stdio.h>
#define SIZE1 10
#define SIZE2 15
#define SIZE3 12
#define SIZE4 5
int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int count[SIZE1] = {0};
	int bonus[SIZE2] = {0};
	float tempPorMes[SIZE3] = {0};
	int bestScores[SIZE4] = {0};
	int i;

	/* resolução das instruções */
	printf("Resolucaoda atividade a...\n");
	for(i = 0; i < SIZE1; i++)
	{
		printf("%d\t", count[i]);
	}
	puts("");
	printf("Resolucaoda atividade b...\n");
	for(i = 0; i < SIZE2; i++)
	{
		bonus[i] += 1;
		printf("%d\t", bonus[i]);
	}
	puts("");
	printf("Resolucaoda atividade c...\n");
	for(i = 0; i < SIZE3; i++)
	{
		printf("Digite um numero real: ");
		scanf("%f", &tempPorMes[i]);
	}
	for(i = 0; i < SIZE3; i++)
	{
		printf("%.2f\t", tempPorMes[i]);
	}
	puts("");
	printf("Resolucaoda atividade d...\n");
	for(i = 0; i < SIZE4; i++)
	{
		printf("%5d\v", bestScores[i]);
	}
	/* saída de dados */
	return 0; //programa realizou todas as atividades com suscesso.
}			//fim da função main.