//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.14 	Fatoriais. 
	A função fatorial é usada com frequência nos problemas de probabilidade. O fatorial de um inteiro positivo n (escrito como n! e pronunciado como ‘fatorial de n’) é igual ao produto dos inteiros positivos de 1 a n. Escreva um programa que avalie os fatoriais dos inteiros de 1 a 5. Imprima os resultados em formato tabular. Que dificuldade poderia impedi-lo de calcular o fatorial de 20? */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i, j, fatorial, aux;

	/* entrada de dados */	
	/* processamento */
	for (i = 1; i < 6; i++)
	{
		aux = i;
		if(i == 1)
		{
			fatorial = aux * 1;
			aux = fatorial;
		}
		else
		{
			for (j = (i - 1); j > 0; j--)
			{
				fatorial = aux * j;
				aux = fatorial;
			}
		}
		printf("%d!=%d\t", i, fatorial);
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.