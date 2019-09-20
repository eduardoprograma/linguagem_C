//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.40 	Padrão de asteriscos em xadrez. 
	Escreva um programa que apresente o seguinte padrão de tabuleiro de xadrez: 
	Seu programa deverá usar apenas três instruções de saída, uma de cada das seguintes formas: 
			printf( “* “ ); 
			printf( “ “ ); 
			printf( “\n” );*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i = 0, resto = 1, linha = 0, res_Linha = 1;

	/* entrada de dados */
	/* processamento */
	while (i <= 64)
	{
		resto = i % 8;
		printf("* ");
		if(resto == 0)
		{
			linha++;
			printf("\n");
			res_Linha = linha % 2;
			if(res_Linha == 0)
			{
				printf(" ");
			}
		}
		i++;
	}
	/* saída de dados */
	return 0;
}			//fim da função main.