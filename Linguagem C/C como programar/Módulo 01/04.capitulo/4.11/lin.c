//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.11 	Ache o menor. 
	Escreva um programa que encontre o menor de vários inteiros. Considere que o primeiro valor lido especifique o número de valores restantes. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i , x;
	int menor, contador = 0;

	/* entrada de dados */
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	contador = x;
	/* processamento */
	for(i = 0; i < contador; i++)
	{
		if(x < menor)
		{
			menor = x;
		}
		printf("Digite um numero inteiro: ");
		scanf("%d", &x);
	}
	/* saída de dados */
	printf("O numero menor e %d.\n", menor);
	return 0;
}			//fim da função main.