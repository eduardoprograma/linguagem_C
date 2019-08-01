//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.28 	Invertendo dígitos. 
	Escreva uma função que leia um valor inteiro e retorne o número com seus dígitos invertidos. Por exemplo, dado o número 7631, a função deverá retornar 1367. */

#include <stdio.h>

int InvertDigitos(int x);			//Protótipo da função.

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x;

	/* entrada de dados */
	printf("Digite um numero com 4 digitos: ");
	scanf("%d", &x);

	/* processamento */
	while (x != -1)
	{
		printf("O inverso do numero %d e %d.\n\n", x, InvertDigitos(x));

		printf("Digite um numero de ate com 4 digitos (-1 para encerrar): ");
		scanf("%d", &x);
	}
	
	/* saída de dados */
	return 0; // função man bem sucessedida.
}			//fim da função main.
int InvertDigitos(int x)
{
	int d1, d2, d3, d4;

	d1 = x / 1000;
	d2 = (x % 1000) / 100;
	d3 = ((x % 1000) % 100) /10;
	d4 = (((x % 1000) % 100) % 10);
	x = (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;

	return x;	
}