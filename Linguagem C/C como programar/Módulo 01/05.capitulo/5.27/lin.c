//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.27 	Números primos. Um inteiro é considerado primo se for divisível apenas por 1 e por ele mesmo. Por exemplo, 2, 3, 5 e 7 são primos, mas 4, 6, 8 e 9 não são.
	a) Escreva uma função que determine se um número é primo.
	b) Use essa função em um programa que determine e imprima todos os números primos entre 1 e 10000. Quantos desses 10000 números você realmente precisa testar antes de ter certeza de que encontrou todos os primos?
	c) Inicialmente, você poderia pensar que n/2 é o limite superior dentro do qual deveria testar para ver se um número é primo, mas você só precisa ir até a raiz quadrada de n. Por quê? Reescreva o programa e execute-o das duas maneiras. Estime a melhoria do desempenho. */

#include <stdio.h>

int NumPrimo(int n);		//Protótipo da função.
int SeqPrimo();			//Protótipo da função.
int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i, Primo;
	int n, opcao;

	/* entrada de dados */
	printf("Digite uma opcao.\n1.Testar o numero digitado se e primo.\n2.Imprimir numeros primos de 1 a 1000:\n ");
	printf("Digite a opcao: ");
	scanf("%d", &opcao);
	/* processamento */
	while(opcao != -1)
	{
		switch (opcao)
		{
		case 1:
			printf("Digite um numero para sabermos se este e primo: ");
			scanf("%d", &n);
			if(NumPrimo(n) == 1)
			{
				printf("%d e um numero primo.\n\n", n);
			}
			else 
			{
				printf("%d nao e um numero primo.\n\n", n);
			}
			break;

		case 2:
			SeqPrimo();
			break;
		
		default:
			break;
		}
		printf("Digite uma opcao.\n1.Testar o numero digitado se e primo.\n2.Imprimir numeros primos de 1 a 1000:\n ");
		printf("Digite a opcao (-1 para encerrar): ");
		scanf("%d", &opcao);
	}
	/* saída de dados */
	return 0;
}			//fim da função main.
int NumPrimo(int n)
{
	int Primo = 0;
	int i, ContPrimo = 0, j;

	for(i = 1; i <= n; i++)
	{
		Primo = n % i;
		if(Primo == 0)
		{
			ContPrimo++;
		}
	}
	if(ContPrimo <= 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int SeqPrimo()
{
	int Primo;
	int ContPrimo = 0;
	int j, i;

	for(i = 1; i <= 1000; i++)
	{
		for(j = 1; j <= i; j++)
		{
			Primo = i % j;
			if(Primo == 0)
			{
				ContPrimo++;
			}
		}
		if(ContPrimo == 2)
		{
			printf("%d e um numero primo.\n\n", i);
		}
		ContPrimo = 0;
	}
}