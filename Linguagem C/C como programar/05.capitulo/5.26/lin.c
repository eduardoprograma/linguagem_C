//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.26 	Números perfeitos. 
	Um número inteiro é considerado um número perfeito se a soma de seus fatores, incluindo 1 (mas não o próprio número) for igual ao próprio número. Por exemplo, 6 é um número perfeito porque 6 = 1 + 2 + 3. Escreva uma função perfect que determine se o parâmetro number é um número perfeito. Use essa função em um programa que determine e imprima todos os números perfeitos entre 1 e 1000. Imprima os fatores de cada número perfeito para confirmar se o número é realmente perfeito. Desafie o poder de seu computador testando números muito maiores que 1000. */

#include <stdio.h>

int perfect(int number);		//Protótipo da função.
int perfect2();		//Protótipo da função.

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int number, i, opcao;

	/* entrada de dados */
	printf("Opcoes:\n1.Calcula seu numero perfeito.\n2.Mostra todos os numeros perfeitos.\n\n");
	printf("Digite uma opcao: ");
	scanf("%d", &opcao);

	/* processamento */
	while (opcao != -1)
	{
		switch (opcao)
		{
		case 1:
			printf("Digite um numero para avaliarmos se ele e perfeito: ");
			scanf("%d", &number);

			if(perfect(number) == 1)
			{
				printf("O numero %d e perfeito.\n\n", number);
			}
			else
			{
				printf("O numero %d nao e perfeito.\n\n", number);
			}
			break;
		
		case 2:
			perfect2();
			break;

		default:
			printf("Digite uma opcao valida: 1 ou 2.\n\n");
			break;
		}
		printf("Opcoes:\n1.Calcula seu numero perfeito.\n2.Mostra todos os numeros perfeitos.\n\n");
		printf("caso queira encerrar digite -1.\n");
		printf("Digite uma opcao: ");
		scanf("%d", &opcao);
		
	}
	
	/* saída de dados */
}			//fim da função main.

int perfect(int number)
{
	int perf = 0;
	int i;

	/* Processamento do número perfeito */
	for(i = 1; i <= number; i++)
	{
		perf += i;
		if(perf == number && perf != 1)
		{
			return 1;
		}
		else if(i == number)
		{
			return 0;
		}
	}
}
int perfect2()
{
	int perf = 0;
	int i, j;

	/* Processamento do número perfeito */
	for(i = 1; i <= 1000; i++)
	{
		for(j = 1; j <= i; j++)
		{
			perf += j;
			if(perf == i && perf != 1)
			{
				printf("Perfeito => ");
				perf = 0;
				for(j = 1; j <= i; j++)
				{
					perf += j;
					printf("%d ", j);
					if(i > 1 && perf != i)
					{
						printf("+ ");
					}
					else if(perf == i)
					{
						printf("= %d\n", perf);
						goto final;
					}
				}
			}
		}
		final:
		perf = 0;
	}
}
