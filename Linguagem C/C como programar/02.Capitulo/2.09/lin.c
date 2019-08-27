/*
 ============================================================================
 Name			: exercicio_2.9
 Author      	: deitel - C Como programar
 Creation date 	: 15/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2
 ============================================================================
*/
/*
 ============================================================================
 2.9	Escreva uma única instrução em C, ou linha única, que cumpra os come-
 ntários a seguir:
	a) Exiba a mensagem 'Digite dois números'.
	b) Atribua o produto das variáveis b e c à variável a. 
	c) Indique um programa que realize um cálculo de folha de pagamento (ou 
	seja, use um texto que ajude a documentar um programa).
	d) Informe três valores inteiros usando o teclado e coloque esses valor-
	es nas variáveis inteiras a, b e c.
 ============================================================================
*/
#include <stdio.h>

/* Inicio da função main */
int main()
{
	/* Declaração das variáveis*/
	int a;		//primeira varável
	int b;		//segunda varável
	int c;		//terceira varável

	/* Informação do programa */
	printf("Este programa realiza o calculo da folha de pagamento.\n\n");

	/* Entrada de dados */
	printf("Digite dois numeros: ");
	scanf("%d%d", &b, &c);

	/* processo */
	a = b * c;		//produto da segunda e da terceira variável

	/* Entrada de dados */
	printf("Digite tres numeros: ");
	scanf("%d%d%d", &a, &b, &c);

	/* O enunciado não pede que tena uma saída o programa. */

	return 0;		//Se o programa chegar aqui foi um sucesso.
}
/*fim da função main*/

