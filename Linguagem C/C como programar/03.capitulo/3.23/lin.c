/*
 ============================================================================
 Name			: exercicio_3.23
 Author      	: Eduardo Felizardo
 Creation date 	: 06/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_3 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
3.23 Imprimindo números por um loop. 
	Escreva um programa que utilize o looping para imprimir os números de 1 a 
	10 lado a lado na mesma linha, com três espaços entre os números.
 ============================================================================
*/
/* Solução do exercício 3.23 */
#include<stdio.h>
/* inicio da função main */
int main()
{
	/* declaração de variáveis */
	int i = 0;		//contador inicializado.

	/* Processamento, com 11 como numero de controle do loop */
	while(++i < 11)
	{
		printf("%d\t", i);
	}

	return 0;		//indica o sucesso do programa.
}
/* fim da função main */