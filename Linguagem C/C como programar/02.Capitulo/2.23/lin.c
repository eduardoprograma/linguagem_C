//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.23	2.23 Maiores e menores inteiros. Escreva um programa que leia cinco inteiros e depois determine e imprima o maior e o menor inteiro no grupo. Use apenas as técnicas de programação que você aprendeu neste capítulo. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int n1 = 0, n2, n3, n4, n5;
	int maior = 0, menor = 0;

	/* entrada de dados */
	printf("Digite 5 numeros inteiros: ");
	scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

	/* processamento */
	maior = n1;		//maior
	menor = n1;		//menor

	if(n2 < menor)		//menor
	{
		menor =  n2;
	}
	if(n3 < menor)
	{
		menor = n3;
	}
	if(n4 < menor)
	{
		menor = n4;
	}
	if(n5 < menor)
	{
		menor = n5;
	}
	
	

	if(n2 > maior)		//maior
	{
		maior = n2;
	}
	if(n3 > maior)
	{
		maior = n3;
	}
	if(n4 >maior)
	{
		maior = n4;
	}
	if(n5 > maior)
	{
		maior = n5;
	}
	
	
	
	/* saída de dados */
	printf("O maior do grupo e %d\n", maior);
	printf("O menor do grupo e %d\n", menor);
}			//fim da função main.