//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.46 Fatorial. O fatorial de um inteiro não negativo n é escrito como n! (pronuncia-se ‘n fatorial’) e é definido da seguinte forma: n! = n · (n - 1) · (n - 2) · … · 1
(para valores de n maiores ou iguais a 1) e n! = 1 (para n = 0). */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int n, i = 0, soma = 0, aux = 0;

	/* entrada de dados */
	printf("Digite um numero positivo maior que 0: ");
	scanf("%d", &n);

	/* processamento */
		while (n != -1)
	{
		aux = n;
		i = n - 1;
		while (i > 0)
		{
			soma = aux * i;
			printf("%d, %d\n", i, soma);
			i--;
			aux = soma;
		}
		printf("O Fatorial de %d e %d\n\n", n, soma);
		printf("Digite um numero positivo maior que 0: ");
		scanf("%d", &n);
		if(n < 1)
		{
			n = -1;
		}
	}
	/* saída de dados */
}			//fim da função main.