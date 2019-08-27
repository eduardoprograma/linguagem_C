//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.24	Par ou ímpar. 
	Escreva um programa que leia um inteiro, determine e imprima se ele é par ou ímpar. 
	[Dica: use o operador módulo. Um número par é um múltiplo de dois. Qualquer múltiplo de dois gera resto zero quando dividido por 2.] */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x = 0;
	int par = 0, impar = 0;

	/* entrada de dados */
	printf("Vamos ver se este numero e para ou impar.\n");
	printf("Digite um numero ineteiro: ");
	scanf("%d", &x);

	/* processamento */
	x %= 2;

	/* saída de dados */
	if(x == 0)
	{
		printf("Seu numero e par.\n");
	}
	else
	{
		printf("Seu numero e impar.\n");
	}
	
	return 0;
}			//fim da função main.