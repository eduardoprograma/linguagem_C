//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.35	Testador de palíndromo. 
Um palíndromo é um número, ou uma frase textual, que pode ser lido da mesma forma da esquerda para a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco dígitos é um palíndromo: 12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco dígitos e determine se ele é ou não um palíndromo. [Dica: use os operadores de divisão e módulo para separar o número em seus dígitos individuais.] */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x = 0;
	int n1, n2, n3, n4, n5;
	int i = 0, j = 0;

	/* entrada de dados */
	printf("Digite um numero inteiro de 5 digitos para sabermos se é umpolindrono: ");
	scanf("%d", &x);

	/* processamento */
	n5 = x / 10000;
	n4 = (x % 10000) / 1000; 
	n3 = ((x % 10000) % 1000) / 100;
	n2 =(((x % 10000) % 1000) % 100) / 10;
	n1 =((((x % 10000) % 1000) % 100) % 10);
		
	/* saída de dados */
	if(n5 == n1)
	{
		if(n4 == n2)
		{
			if(n3 == n3)
			{
				if(n2 == n4)
				{
					if(n1 == n5)
					{
						printf("Este numero e um palindrono.\n");
					}
					else
					{
						printf("Este numero nao e um palindrono.\n");
					}
				}
				else
				{
					printf("Este numero nao e um palindrono.\n");
				}
			}
			else
			{
				printf("Este numero nao e um palindrono.\n");
			}
		}
		else
		{
			printf("Este numero nao e um palindrono.\n");
		}
	}
	else
	{
		printf("Este numero nao e um palindrono.\n");
	}

	return 0;
}			//fim da função main.