//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.38 Escreva um programa que imprima 100 asteriscos, um de cada vez. Após cada décimo asterisco, seu programa deverá imprimir um caractere de nova linha. [Dica: conte de 1 até 100. Use o operador de módulo para reconhecer cada vez que o contador atingir um múltiplo de 10.] */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i = 1;
	int resto = 1;

	/* entrada de dados */
	/* processamento */
	while (i <= 100)
	{
		printf("*");
		resto = i % 10;
		if (resto == 0)
		{
			printf("\n");
		}
		i++;
	}
		
	/* saída de dados */
	return 0;
}			//fim da função main.