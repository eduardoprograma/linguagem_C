//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.19 	Exibindo um quadrado de asteriscos. 
	Escreva uma função que apresente um quadrado sólido de asteriscos cujo lado é especificado no parâmetro inteiro side. Por exemplo, se side é 4, a função exibe: */

#include <stdio.h>
int side(int lado);
int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x;

	/* entrada de dados */
	printf("Digite o lado do quadrado: ");
	scanf("%d", &x);

	/* processamento */
	printf("\n");
	while (x != -1)
	{
		printf("%d", side(x));
		printf("\n\nDigite o lado do quadrado: ");
		scanf("%d", &x);
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.
int side(int lado)
{
	int i, j;

	for(j = 0; j < lado; j++)
	{
		for(i = 0; i < lado; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}