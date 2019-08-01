/*
 ============================================================================
 Name			: linc.c
 Author      	: Eduardo Felizardo Cândido
 Creation date 	: 01/08/2019
 Version     	: R00
 Copyright   	: Your copyright notice
 Description 	: Hello World in C, Ansi-style
 ============================================================================
*/
/*
 ============================================================================
 5.16 	Exponenciação 
	Escreva uma função potenciaInt(base, expoente) que retorne o valor de 
	base^expoente.
	Por exemplo, potenciaInt( 3, 4 ) = 3 * 3 * 3 * 3. Suponha que expoente se-
	ja um inteiro positivo, diferente de zero, e base seja um inteiro. A função 
	potenciaInt deve usar for para controlar o cálculo. Não use funções da bib-
	lioteca matemática.
 ============================================================================
*/ 

#include <stdio.h>

int potenciaInt(int base, int expoente);

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int base, expoente;

	/* entrada de dados */
	printf("Digite um numero inteiro: ");
	scanf("%d", &base);
	
	/* processamento */
	while(base != -1)
	{
		printf("Digite um numero inteiro para expoente: ");
		scanf("%d", &expoente);

		printf("O resulado e %d\n\n", potenciaInt(base, expoente));

		printf("Digite um numero inteiro: ");
		scanf("%d", &base);
	}
	/* saída de dados */
	return 0;
}			//fim da função main.

int potenciaInt(int base, int expoente)
{
	int i;
	int resultado = base;

	if(expoente == 0)
	{
		return 1;
	}
	else
	{
		for(i = 0; i < expoente - 1; i++)
		{
			resultado *= base;
		}
		return resultado;
	}
}