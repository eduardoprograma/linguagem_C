/*Programa para calculo de diagonais*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare a variavel*/
	int ND, NL;
	/*Entrada de variavel*/
	printf("Programa para calculo de poligonos\n\n");
	printf("Digite o numero de lados do poligono: ");
	scanf("%d", &NL);
	/*Bloco de comandos*/
	ND = (NL * (NL - 3)) / 2;
	/*Saida de variaveis*/
	printf("O numero de diagonais do poligono e %d\n", ND);
	/*Fim do codigo*/
}