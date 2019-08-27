//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.10 	Média de uma sequência de inteiros. 
	Escreva um programa que calcule e imprima a média de vários inteiros. Considere que o último valor lido com scanf seja a sentinela 9999. 
	Uma sequência de entrada típica poderia ser 10 8 11 7 9 9999 indicando que é preciso calcular a média de todos os valores anteriores a 9999. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int soma = 0, i, x = 0, media = 0;
	int impl = 0;

	inicio:
	/* entrada de dados */
	printf("Digite um valor inteiro: ");
	scanf("%d", &x);

	/* processamento */
	for(i = 0;x != 9999; i++)
	{
		soma += x;
		printf("Digite um valor inteiro: ");
		scanf("%d", &x);
	}
	media = soma / i;
	printf("A media e %d\n\n", media);
	printf("Se desejar continuar digite 1: ");
	scanf("%d", &impl);
	if(impl == 1)
	{
		media = 0;
		soma = 0;
		goto inicio;
	}
	else
	{
		goto final;
	}
	/* saída de dados */
	final:
	return 0;
}			//fim da função main.