//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.37 	Qual é a velocidade do seu computador? Como você pode determinar a velocidade com que seu computador realmente opera? Escreva um programa com um loop while que conte de 1 até 300.000.000 em intervalos de 1. Toda vez que o contador atingir um múltiplo de 100.000.000, mostre esse número na tela. Use seu relógio para marcar o tempo gasto entre cada repetição do loop por 100 milhões de vezes. 
obs: _TIME_  printf("%s", _TIME_); - Vou usar este recurso, melhor que ficar olhando relógio*/

#include <stdio.h>
#include <stdlib.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i = 1;
	/* entrada de dados */
	/* processamen9to */
	printf("Tempo de processamento %s...\n", __TIME__);
	while (i <= 300000000)			//Usando printf para exibir os números
	{
		printf("%d\n", i);
		if(i == 100000000 || i == 200000000)
		{
			printf("Tempo de processamento %s...\n", __TIME__);
			system("pause");

		}
		if(i == 300000000)
		{
			printf("Tempo de processamento %s...\n", __TIME__);
			system("pause");
		}
		i++;
	}
	printf("Tempo de processamento do segundo processo %s...\n", __TIME__);

	while (i <= 300000000)
	{
		if(i == 100000000 || i == 200000000)
		{
			printf("Tempo de processamento %s...\n", __TIME__);

		}
		if(i == 300000000)
		{
			printf("Tempo de processamento %s...\n", __TIME__);
		}
		i++;
	}
	/* saída de dados */
	return 0;
}			//fim da função main.