/*
 ============================================================================
 Name			: exercicio_2.4
 Author      	: deitel - C Como programar
 Creation date 	: 15/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2
 ============================================================================
*/
/*
 ============================================================================
 2.4	Escreva uma instrução (ou comentário) para realizar cada um dos segu-
 intes:
	a) Indicar que um programa calculará o produto de três inteiros.
	b) Declarar as variáveis x, y, z e resultado para que tenham o tipo int.
	c) Pedir ao usuário que digite três inteiros. 
	d) Ler três inteiros do teclado e armazená-los nas variáveis x, y e z.
	e) Calcular o produto dos três inteiros contidos nas variáveis x, y e z, 
	e atribuir o resultado à variável resultado.
	f) Exibir “O produto é” seguido pelo valor da variável inteira resultado 
 ============================================================================
*/
#include <stdio.h>

/* Inicio da função man*/
int main()
{
	/* Declaração de variáveis */
	int x;		//primeira variável
	int y;		//segunda varável
	int z;		//terceira variável
	int resultado = 0;

	/* O que o programa faz */
	printf("O programa calculara tres inteiros.\n\n");

	/* Entrada de dados */
	printf("Digite tres variaveis inteiras: ");
	scanf("%d%d%d", &x, &y, &z);

	/* Processamento de dados */
	resultado = x * y * z;

	/* Saída de dados */
	printf("O produto e %d\n\n", resultado);

	return 0;		//Se o programa foi bem sucedido chegamos aqui..\
}
/* Fim da função man */