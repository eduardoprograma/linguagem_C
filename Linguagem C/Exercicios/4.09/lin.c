//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.9 	Soma de uma sequência de inteiros. 
	Escreva um programa que some uma sequência de inteiros. Considere que o primeiro inteiro lido com scanf especifique o número de valores restantes a serem inseridos. Seu programa deve ler apenas um valor toda vez que scanf for executado. Uma sequência de entrada típica poderia ser 5 100 200 300 400 500 onde o 5 indica que os cinco valores subsequentes devem ser somados. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x = 0, valor  = 0, soma = 0;

	/* entrada de dados */
	printf("Digite o numero de vezes que um numero deva ser somado: ");
	scanf("%d", &x);

	/* processamento */
	while (x != -1)
	{
		printf("Digite o numero a ser somado: ");
		scanf("%d", &valor);
		for(; x > 0; x--)
		{
			soma += valor;
		}
		printf("O valor da soma e %d\n", soma);
		printf("Digite o numero de vezes que um numero deva ser somado: ");
		scanf("%d", &x);
		soma = 0;
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.