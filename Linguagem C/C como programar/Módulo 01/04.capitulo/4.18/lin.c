//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.18 	Programa de exibição de gráfico de barras. 
	Uma aplicação interessante dos computadores é a de desenhar gráficos e gráficos de barras (às vezes, chamados ‘histogramas’). Escreva um programa que leia cinco números (entre 1 e 30). Para cada número lido, seu programa deverá exibir uma linha contendo esse número de asteriscos adjacentes. Por exemplo, se seu programa ler o número sete, ele deverá exibir *******. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x1, x2, x3, x4, x5, i;

	/* entrada de dados */
	printf("Digite cinco numeros inteiros: ");
	scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5);
	/* processamento */
	while (x1 != -1)
	{
		for(i = 0; i < x1; i++)
		{
			printf("*");
		}
		printf("\n\n");
		for(i = 0; i < x2; i++)
		{
			printf("*");
		}
		printf("\n\n");
		for(i = 0; i < x3; i++)
		{
			printf("*");
		}
		printf("\n\n");
		for(i = 0; i < x4; i++)
		{
			printf("*");
		}
		printf("\n\n");
		for(i = 0; i < x5; i++)
		{
			printf("*");
		}
		printf("\n\n");
		printf("Digite cinco numeros inteiros: ");
		scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5);
		if(x2 == -1)
		{
			x1 = x2;
		}
		if(x3 == -1)
		{
			x1 = x3;
		}
		if(x4 == -1)
		{
			x1 = x4;
		}
		if(x5 == -1)
		{
			x1 = x5;
		}
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.