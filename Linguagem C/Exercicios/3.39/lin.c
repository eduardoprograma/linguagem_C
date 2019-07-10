//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.39 Contando 7s. 
	Escreva um programa que leia um inteiro e determine e imprima quantos dígitos no inteiro são algarismos 7 */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x, x1, x2, x3, x4, x5, x6, x7, x8, x9;
	int sete = 0;

	/* entrada de dados */
	printf("Digite um numero de ate 9 digitos: ");
	scanf("%d", &x);

	/* processamento */
	while (x != -1)
	{
		x9 = ((((((((x % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) % 10);
		x8 = (((((((x % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) /10;
		x7 = ((((((x % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) / 100;
		x6 = (((((x % 100000000) % 10000000) % 1000000) % 100000) % 10000) / 1000;
		x5 = ((((x % 100000000) % 10000000) % 1000000) % 100000) / 10000;
		x4 = (((x % 1000000000) % 10000000) % 1000000) / 100000;
		x3 = ((x % 100000000) % 10000000) / 1000000;
		x2 = (x % 100000000) / 10000000;
		x1 = x / 100000000;
		if(x9 == 7)
		{
			sete++;
		}
		if(x8 == 7)
		{
			sete++;
		}
		if(x7 == 7)
		{
			sete++;
		}
		if(x6 == 7)
		{
			sete++;
		}
		if(x5 == 7)
		{
			sete++;
		}
		if(x4 == 7)
		{
			sete++;
		}
		if(x3 == 7)
		{
			sete++;
		}
		if(x2 == 7)
		{
			sete++;
		}
		if(x1 == 7)
		{
			sete++;
		}
		printf("O numero digitado possui %d digitos 7.\n\n", sete);
		printf("Digite um numero de ate 9 digitos: ");
		scanf("%d", &x);
		sete = 0;
	}
	/* saída de dados */
	return 0;
}			//fim da função main.