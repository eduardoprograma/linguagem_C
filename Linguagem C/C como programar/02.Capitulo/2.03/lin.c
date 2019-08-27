/*
 ============================================================================
 Name			: exercicio_2.3
 Author      	: deitel - C Como programar
 Creation date 	: 15/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2
 ============================================================================
*/
/*
 ============================================================================
 2.3	Escreva uma única instrução C para executar cada uma das seguintes 
 alternativas:
	a) Declarar as variáveis c, estaVariável, q76354 e número para que tenham 
	o tipo int.
	b) Pedir que o usuário digite um inteiro. Terminar a mensagem com um si-
	nal de dois pontos (:) seguido por um espaço, e deixar o cursor posicionado 
	após o espaço.
	c) Ler um inteiro do teclado e armazenar o valor digitado na variável in-
	teira a.
	d) Se o número não for igual a 7, exibir “A variável número não é igual a 
	7”.
	e) Imprimir a mensagem “Este é um programa em C.” em uma linha.
	f) Imprimir a mensagem “Este é um programa em C.” em duas linhas, de modo 
	que a primeira linha termine em C. 
	g) Imprimir a mensagem “Este é um programa em C.” com cada palavra em uma 
	linha separada.
	h) Imprimir a mensagem “Este é um programa em C.” com as palavras separa-
	das por tabulações
 ============================================================================
*/
#include <stdio.h>

int main()
{
	/* Declaração de variáveis */
	int c;
	int estaVariavel;
	int q76354;
	int numero;
	int a;

	/* Entrada de dados */
	printf("Entre com um valor inteiro: ");
	scanf("%d", &a);

	/* Processamento */
	if(a =! 7)
	{
		printf("O numero digitado não e igual a 7");
	}   

	/* Saída de dados */
	printf("Este e um programa em C.");		//Programa imprimi em uma linha
	printf("Este e um programa em C.\n");		//Imprime em duas linhas treminando a primeira em C.
	printf("Este\ne\num\nprograma\nem\nC\n");		//Imprime com cada palavra em uma linha.
	printf("Este\t e\t um\t programa\t em\t C.\t");		//imprime com a as palavras separadas por tabulação.

	return 0;
}

