//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.14 Escreva uma única instrução em pseudocódigo que indique cada um dos seguintes comandos:
	a) Apresente a mensagem 'Digite dois números'. 
	b) Atribua a soma das variáveis x, y e z à variável p. 
	c) A seguinte condição deve ser testada em uma estrutura de seleção if…else: o valor atual da variável m é maior que o dobro do valor atual da variável v.
	d) Obtenha valores para as variáveis s, r e t pelo teclado. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int n = 0;
	int x = 1, y  = 1;

	/* entrada de dados */
	printf("Digite um numero inteiro: ");		//entrada do lado do quadrado
	scanf("%d", &n);

	/* processamento */
	while (n != -1)		//por sentinela
	{
		if(n <= 20)		//limita o tamanho do quadrado
		{
			while(y <= n)		//lado y do quadrado
			{
				if(y == 1 || y == n)		//parede inteira do quadrado
				{
					while (x <= n)
					{
						printf("*");
						x++;
					}
				}
				else		//furo do quadrado
				{
					while (x <= n)
					{
						if(x == 1 || x == n)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
						x++;
					}
				}
				
				printf("\n");
				y++;
				x = 1;
			}
		}
		else		//condiciona a fazer o certo
		{
			printf("Este programa comporta numeros de 1 a 20. Digite numeros neste intervalo.\n");
		}
		
		printf("\n");
		y = 1;
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.