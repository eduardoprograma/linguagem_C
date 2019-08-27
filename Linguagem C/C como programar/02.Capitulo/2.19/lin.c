/*
 ============================================================================
 Name			: exercicio_2.19
 Author      	: Eduardo Felizardo
 Creation date 	: 27/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
 2.19	Aritmética, maior e menor valor. Escreva um programa que leia três 
 inteiros diferentes do teclado, depois apresente a soma, a média, o produto, 
 o menor e o maior desses números. Use apenas a forma de seleção única da in-
 strução if que você aprendeu neste capítulo. O diálogo na tela deverá apare-
 cer da seguinte forma:
		Digite três inteiros diferentes: 13 27 14 
			A soma é 54 
			A média é 18 
			O produto é 4914 
			O menor é 13 
			O maior é 27
 ============================================================================
*/ 
#include <stdio.h>

/* Inicio da função main*/
int main()
{
	/* declaração de variáveis */
	int n1;
	int n2;
	int n3;
	int soma = 0;
	int media = 0;
	int produto = 0;
	int menor = 0;
	int maior = 0;

	/* entrada de dados */
	printf("Digite tres numeros intenteiros diferentes: ");
	scanf("%d%d%d", &n1, &n2, &n3);

	/* inicialização de variáveis */
	maior = n1;
	menor = n2;

	/* processamento de dados */
	soma = n1 + n2 + n3;
	media = (n1 + n2 + n3) / 3;
	produto = n1 * n2 * n3;

		/* Processo de maior */
	if(maior < n2)
	{
		if(n3 < n2)
		{
			maior =  n2;
		}
	}
	if(maior < n3)
	{
		if(n2 < n3)
		{
			maior = n3;
		}
	}

	/* Processo de menor */
	if(menor > n1)
	{
		if(n3 > n1)
		{
			menor = n1;
		}
	}
	if(menor > n3)
	{
		if(n1 > n3)
		{
			menor = n3;
		}
	}

	/* saída de dados */
	printf("A soma e %d.\n", soma);
	printf("A media e %d.\n", media);
	printf("O produto e %d.\n", produto);
	printf("O menor e %d.\n", menor);
	printf("O maior e %d.\n", maior);

	return 0;		//Sucesso do programa.
}
/* fim da função main */
