/*
 ============================================================================
 Name			: exercicio_2.29
 Author      	: Eduardo Felizardo
 Creation date 	: 31/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
 2.29 Valor inteiro de um caractere.
	Escreva um programa em C que imprima os equivalentes inteiros de algumas 
	letras maiúsculas, letras minúsculas, dígitos e símbolos especiais. No 
	mínimo, determine os equivalentes inteiros de A B C a b c 0 1 2 $ * + / 
	e o caractere de espaço em branco.
 ============================================================================
*/
/* solução do exercício 2.29 */
#include <stdio.h>

/* inicio da função main */
int main()
{
	/* declaração das variáveis */
	char IntEquivalente;		//letra digita ou caracter

	/* entrada de dados */
	printf("Digite uma letra ou um caracter especial: ");		//entrada 
	scanf("%c", &IntEquivalente);		//Ler

	/* saída de dados */
	printf("%d e integral equivalente de %c", IntEquivalente, IntEquivalente);

	return 0;		//programa executado com sucesso.
}
/* fim da função main */