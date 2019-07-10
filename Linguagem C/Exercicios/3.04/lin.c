//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.4	Escreva uma instrução em C que possibilite realizar as seguintes tarefas:
	a) declarar variáveis soma e x para que sejam do tipo int.
	b) inicializar variável x em 1. 
	c) inicializar variável soma em 0. 
	d) somar variável x à variável soma e atribuir o resultado à variável soma.
	e) imprimir 'A soma é:' seguido pelo valor da variável soma. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x = 1, soma = 0;
	/* entrada de dados */
	/* processamento */
	soma += x;

	/* saída de dados */
	printf("A soma e: %d\n", soma);
}			//fim da função main.