/*
 ============================================================================
 Name			: linc.c
 Author      	: Eduardo Felizardo Cândido
 Creation date 	: 01/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Eliminação de duplicatas
 ============================================================================
*/
/*
 ============================================================================
 6.15 	Eliminação de duplicatas. 	
	Use um array de subscrito único para resolver o problema a seguir. Leia 
	20 números, cada um entre 10 e 100, inclusive. À medida que cada número 
	for lido, imprima-o apenas se ele não for uma duplicata de um número já 
	lido. Considere a ‘pior das hipóteses’: os 20 números são diferentes. Use 
	o menor array possível para resolver esse problema.
 ============================================================================
*/ 

#include <stdio.h>
#define SIZE 20
int duplicata(int numero[], int i);

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int numero[SIZE] = {0};
	int i;
	int volta = 0;

	/* entrada de dados */
	for(i = 0; i < SIZE; i++)
	{
		printf("Digite um numero inteiro: ");
		scanf("%d", &numero[i]);
		duplicata(numero, i);

		voltis:
		volta = duplicata(numero, i);
		/* Imprimirá apenas se não for uma duplicata */
		if(volta == 0)
		{
			printf("1.Numero[%d] = %d\n", i, numero[i]);
		}
		else
		{
			printf("Digite outro numero inteiro: ");
			scanf("%d", &numero[i]);
			goto voltis;
		}
	}
	/* sucesso do programa */
	return 0;
}			//fim da função main.

/* função duplicata irá comparar os numeros da array */
int duplicata(int numero[], int i)
{
	int cont = 0;
	int j, k;

	if(i == 0)
	{
		return 0;
	}
	else
	{
		/* Compara os numeros */
		for(j = 0; j < i; j++)
		{
			for(k = 0; k < i; k++)
			{
				if(numero[j] == numero[k])
				{
					cont++;
				}
			}
		}
	}

	/* saída */
	if(cont == 0)
	{
		return 0;
	}
	else 
	{
		return 1;
		cont = 0;
	}
}