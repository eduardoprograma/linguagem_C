//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.1	Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int nota1, nota2, nota3, media;

	/* entrada de dados */
	printf("Digite tres notas: ");
	scanf("%d%d%d", &nota1, &nota2, &nota3);

	/* processamento */
	media = (nota1 + nota2 + nota3) / 3;

	/* saída de dados */
	printf("A media sua e %d\n", media);
	return 0;
}			//fim da função main.