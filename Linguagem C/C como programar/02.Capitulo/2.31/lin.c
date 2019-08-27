//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.31	Tabela de quadrados e cubos. 
	Usando apenas as técnicas que você aprendeu neste capítulo, escreva um programa que calcule os quadrados e os cubos dos números 0 a 10, e use tabulações para imprimir a seguinte tabela de valores: */

#include <stdio.h>
#include <math.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	/* entrada de dados */
	/* processamento */
	/* saída de dados */
	printf("Numero\tQuadrado\tCubo\n");
	printf("%4d\t%4.0f\t%12.0f\n", 0, pow(0, 2), pow(0, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 1, pow(1, 2), pow(1, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 2, pow(2, 2), pow(2, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 3, pow(3, 2), pow(3, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 4, pow(4, 2), pow(4, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 5, pow(5, 2), pow(5, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 6, pow(6, 2), pow(6, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 7, pow(7, 2), pow(7, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 8, pow(8, 2), pow(8, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 9, pow(9, 2), pow(9, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 10, pow(10, 2), pow(10, 3));

	return 0;
}			//fim da função main.