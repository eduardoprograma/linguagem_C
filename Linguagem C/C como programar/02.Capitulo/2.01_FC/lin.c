//Nome do programa: fundamentos_da_programacao.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*1.1	Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int n1, n2, n3, n4, soma;

	/* entrada de dados */
	printf("Digite quatro numeros inteiros: ");
	scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

	/* processamento */
	soma = n1 + n2 + n3 + n4;

	/* saída de dados */
	printf("A soma dos numeros e %d.\n", soma);
}			//fim da função main.