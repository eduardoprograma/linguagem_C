//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.4	Escreva uma instrução (ou comentário) para realizar cada um dos seguintes:
	a) Indicar que um programa calculará o produto de três inteiros.
	b) Declarar as variáveis x, y, z e resultado para que tenham o tipo int.
	c) Pedir ao usuário que digite três inteiros. 
	d) Ler três inteiros do teclado e armazená-los nas variáveis x, y e z.
	e) Calcular o produto dos três inteiros contidos nas variáveis x, y e z, e atribuir o resultado à variável resultado.
	f) Exibir “O produto é” seguido pelo valor da variável inteira resultado */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x, y, z, resultado = 0;

	printf("Este programa calculara tres variaveis:\n\n");

	/* entrada de dados */
	printf("Digite tres variaveis interias: ");
	scanf("%d%d%d", &x, &y, &z);

	/* processamento */
	resultado = x * y * z;

	/* saída de dados */
	printf("O produto e %d\n", resultado);

	return 0;
}			//fim da função main.