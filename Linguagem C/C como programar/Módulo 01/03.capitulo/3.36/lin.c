//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.36 	Imprimindo o equivalente decimal de um número binário. Leia um inteiro contendo apenas 0s e 1s (ou seja, um inteiro ‘binário’) e imprima seu equivalente decimal. [Dica: use os operadores de módulo e divisão para apanhar os dígitos do número ‘binário’ um de cada vez, da direita para a esquerda. Assim como no sistema numérico decimal, em que o dígito mais à direita tem um valor posicional de 1, e o próximo dígito à esquerda tem um valor posicional de 10, depois de 100, depois de 1.000, e assim por diante, no sistema binário, o dígito mais à direita tem um valor posicional de 1, o próximo dígito à esquerda tem um valor posicional de 2, depois de 4, depois de 8 e assim por diante. Assim, o número 234 pode ser interpretado como 4 * 1 + 3 * 10 + 2 * 100. O equivalente decimal do binário 1101 é 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 ou 1 + 0 + 4 + 8 ou 13.]*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x = 0;
	int b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15;

	/* entrada de dados */
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);

	/* processamento */
	while(x != -1)
	{
		b15 = x % 2;
		b14 = (x / 2) % 2;
		b13 = ((x / 2) / 2) % 2;
		b12 = (((x / 2) / 2) / 2) % 2;
		b11 = ((((x / 2) / 2) / 2) / 2) %2;
		b10 = (((((x / 2) / 2) / 2) / 2) / 2) %2;
		b9 = ((((((x / 2) / 2) / 2) / 2) / 2) / 2) %2;
		b8 = (((((((x / 2) / 2) / 2) / 2) / 2) / 2) / 2) %2;
		b7 = ((((((((x / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) %2;
		b6 = (((((((((x / 2) / 2) / 2) /2) /2 ) / 2) / 2) / 2) / 2) %2;
		b5 = ((((((((((x / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2;
		b4 = (((((((((((x / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2;
		b3 = ((((((((((((x / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2;
		b2 = (((((((((((((x / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2;
		b3 = ((((((((((((((x / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) %2;
		b2 = (((((((((((((((x / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2;
		b1 = ((((((((((((((((x / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2;
		b0 = (((((((((((((((((x / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2;
		printf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n", b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15);

		printf("Digite um numero inteiro: ");
		scanf("%d", &x);
	}


	/* saída de dados */
	return 0;
}			//fim da função main.