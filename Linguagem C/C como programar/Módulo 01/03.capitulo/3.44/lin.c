//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.44 	Lados de um triângulo. 
	Escreva um programa que leia três valores float diferentes de zero, determine e imprima se eles poderiam representar os lados de um triângulo. */

#include <stdio.h>
#include <math.h> 

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	float a , b, c, triangulo = 0;

	/* entrada de dados */
	printf("Digite tres numeros, e direi se podem formar um triangulo: ");
	scanf("%f%f%f", &a, &b, &c);

	/* processamento */
	while (a, b, c != 0)
	{
		if(abs(b - c) < a && a < b + c)
		{
			if(abs(a - c) < b && b < a + c)
			{
				if(abs(a - b) < c && c < a + b)
				{
					printf("Estes numeros formam um triangulo...\n");
				}
				else
				{
					printf("Estes numeros nao formam um triangulo...\n");
				}
			}
			else
			{
				printf("Estes numeros nao formam um triangulo...\n");
			}
		}
		else
		{
			printf("Estes numeros nao formam um triangulo...\n");
		}
		printf("Digite tres numeros, e direi se podem formar um triangulo: ");
		scanf("%f%f%f", &a, &b, &c);
	}
	/* saída de dados */
	return 0;
}			//fim da função main.