//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.3	Escreva uma instrução ou um conjunto de instruções para realizar cada uma das seguintes tarefas:
	a) Somar os inteiros ímpares entre 1 e 99 usando uma estrutura for. Considere que as variáveis inteiras soma e contador tenham sido declaradas.
	b) Imprima o valor 333,546372 em uma largura de campo de 15 caracteres com precisões de 1, 2, 3, 4 e 5. Alinhe a saída à esquerda. Quais são os cinco valores impressos?
	c) Calcule o valor de 2.5 elevado à potência 3 usando a função pow. Imprima o resultado com uma precisão de 2 em uma largura de campo de 10 posições. Qual é o valor impresso?
	d) Imprima os inteiros de 1 a 20 usando um loop while e a variável contadora x. Considere que a variável x tenha sido declarada, mas não inicializada. Imprima somente cinco inteiros por linha. [Dica: use o cálculo x % 5. Quando o resultado for 0, imprima um caractere de nova linha, senão imprima um caractere de tabulação.]
	e) Repita o Exercício 4.3 (d) usando uma estrutura for. */

#include <stdio.h>
#include <math.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int contador = 0, soma = 0;
	int x;

	/* entrada de dados */
	/* processamento */
	for (contador = 1; contador <= 99; contador +=2)			//Resolução a)
	{
		soma += contador;
		printf("A soma dos numeros impares e %d\n\n", soma);
	}
	printf("A precisao %d, %-15.1lf\n", 1, 333.546372);		//Resolução b)
	printf("A precisao %d, %-15.2lf\n", 2, 333.546372);
	printf("A precisao %d, %-15.3lf\n", 3, 333.546372);
	printf("A precisao %d, %-15.4lf\n", 4, 333.546372);
	printf("A precisao %d, %-15.5lf\n\n\n", 5, 333.546372);

	printf("O valor a ser impresso, %10.2f\n\n", pow(2.5, 3));			//Resolução c)

	x = 1;
	while (x <= 20)			//Resolução d)
	{
		printf("%d\t", x);
		if((x % 5) == 0)
		{
			printf("\n");
		}
		x++;
	}
	
	for (x = 1; x <= 20; x++)			//Resolução e)
	{
		printf("%d\t", x);
		if((x % 5) == 0)
		{
			printf("\n");
		}
	}
	/* saída de dados */
	return 0;
}			//fim da função main.