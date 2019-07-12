//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.17 	Múltiplos. 
	Escreva uma função multiple que determine para um par de inteiros, se o segundo inteiro é um múltiplo do primeiro. A função deve apanhar dois argumentos inteiros e retornar 1 (verdadeiro), se o segundo for um múltiplo do primeiro, e 0 (falso), caso contrário. Use essa função em um programa que inclua uma série de pares de inteiros. */

#include <stdio.h>

int muliple(int num1, int num2);

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x, y, resto;

	/* entrada de dados */
	printf("Digite dois numeros: ");
	scanf("%d%d", &x, &y);

	/* processamento */
	while(x != -1)
	{
		if(muliple(x, y) == 1)
		{
			printf("Os numeros sao multiplos.\n\n");
		}
		else
		{
			printf("Os numeros nao sao multiplos.\n\n");
		}
		printf("Digite dois numeros: ");
		scanf("%d%d", &x, &y);
	}
	/* saída de dados */
	return 0;
}			//fim da função main.
int muliple(int num1, int num2)
{
	int resto = 0;
	resto = num1 % num2;
	if(resto == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}