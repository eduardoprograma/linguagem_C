//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.19	Aritmética, maior e menor valor. Escreva um programa que leia três inteiros diferentes do teclado, depois apresente a soma, a média, o produto, o menor e o maior desses números. Use apenas a forma de seleção única da instrução if que você aprendeu neste capítulo. O diálogo na tela deverá aparecer da seguinte forma:
		Digite três inteiros diferentes: 13 27 14 
			A soma é 54 
			A média é 18 
			O produto é 4914 
			O menor é 13 
			O maior é 27 */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x = 0 , y = 0, z = 0;
	int soma = 0, media = 0, produto = 0;
	int menor = 0, maior = 0;
	
	/* entrada de dados */
	printf("Digite tres numeros inteiros: ");
	scanf("%d%d%d", &x, &y, &z);

	maior = x;		//Considere que x é o maior
	menor = x;		//Considere que x é o menor

	/* processamento */
	soma = x + y + z;
	media = soma / 3;
	produto = x * y * z;
	
	if(z > maior)	//maior
	{
		maior = z;
	}
	if(y > maior)
	{
		maior = y;
	}

	if(z < menor)	//menor
	{
		menor = z;
	}
	if(y < menor)
	{
		menor = y;
	}
	/* saída de dados */
	printf("A soma e %d.\n", soma);
	printf("A media e %d.\n", media);
	printf("O produto e %d.\n", produto);
	printf("O menor e %d.\n", menor);
	printf("O maior e %d.\n", maior);
	
	return 0;
}			//fim da função main.