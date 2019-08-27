//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.7	Escreva estruturas for que imprimam a seguinte sequência de valores:
	a) 1, 2, 3, 4, 5, 6, 7 
	b) 3, 8, 13, 18, 23 
	c) 20, 14, 8, 2, –4, –10 
	d) 19, 27, 35, 43, 51 */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int a = 1, b = 3, c = 20, d = 19;

	/* entrada de dados */
	/* processamento */
	for(; a < 8; a++)
	{
		printf("%d\t", a);
	}
	printf("\n\n");
	for(; b < 24; b += 5)
	{
		printf("%d\t", b);
	}
	printf("\n\n");
	for(; c > -11; c -= 6)
	{
		printf("%d\t", c);
	}
	printf("\n\n");
	for(; d < 52; d += 8)
	{
		printf("%d\t", d);
	}
	/* saída de dados */
	return 0;
}			//fim da função main.