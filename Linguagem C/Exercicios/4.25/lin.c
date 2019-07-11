//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.25 	Tabela de equivalência decimal, binária, octal e hexadecimal. Escreva um programa que imprima uma tabela dos equivalentes binário, octal e hexadecimal dos números decimais no intervalo de 1 a 256. Se você não estiver acostumado com esses sistemas numéricos, leia o Apêndice C antes de tentar realizar esse exercício. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int decimal;
	int b0, b1, b2, b3, b4, b5, b6, b7, b8;

	/* entrada de dados */
	printf("%3s\t%3s\t%10s\t%s\n\n", "Dec.", "Bin.", "Octal", "Hexa.");
	for(decimal = 0; decimal < 257; decimal++)
	{
		b8 = decimal % 2;
		b7 = (decimal / 2) % 2;
		b6 = ((decimal / 2) / 2) % 2;
		b5 = (((decimal / 2) / 2) / 2) % 2;
		b4 = ((((decimal / 2) / 2) / 2) / 2) %2;
		b3 = (((((decimal / 2) / 2) / 2) / 2) / 2) %2;
		b2 = ((((((decimal / 2) / 2) / 2) / 2) / 2) / 2) %2;
		b1 = (((((((decimal / 2) / 2) / 2) / 2) / 2) / 2) / 2) %2;
		b0 = ((((((((decimal / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) %2;
		//b3 = (((((((((decimal / 2) / 2) / 2) /2) /2 ) / 2) / 2) / 2) / 2) %2;
		//b2 = ((((((((((decimal / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2;
		//b1 = (((((((((((decimal / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2;
		//b0 = ((((((((((((decimal / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2;
		printf("%4d\t%d%d%d%d%d%d%d%d%d\t%o\t%X\n", decimal, b0, b1, b2, b3, b4, b5, b6, b7, b8, decimal, decimal);
	}
	/* processamento */
	/* saída de dados */
	return 0;
}			//fim da função main.