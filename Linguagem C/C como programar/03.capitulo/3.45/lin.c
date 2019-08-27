//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.45 	Lados de um triângulo retângulo. 
	Escreva um programa que leia três inteiros diferentes de zero e determine e imprima se eles poderiam ser os lados de um triângulo retângulo. */

#include <stdio.h>
#include <math.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	double a, b, c, raiz, potencia;

	/* entrada de dados */
	printf("Digite tres numeros diferentes de 0: ");
	scanf("%lf%lf%lf", &a, &b, &c);

	/* processamento */
	while (a != 0)
	{
		potencia = pow(b, 2) + pow(c, 2);
		raiz = sqrt(potencia);
		if(a == raiz)
		{
			printf("Este e um triangulo retangulo...\n");
		}
		else
		{
			printf("Este nao e um triangulo retangulo...\n");
		}
		printf("Digite tres numeros diferentes de 0: ");
		scanf("%lf%lf%lf", &a, &b, &c);
		if(b == 0)
		{
			a = b;
		}
		if(c == 0)
		{
			a = c;
		}
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.