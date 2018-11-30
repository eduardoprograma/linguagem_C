/*Programa de conversão de moeda*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare as variaveis*/
	float R, D, MA, LS;
	/*Entrada de dados*/
	printf("Programa conversao de moedas\n\n");
	printf("Digite a quantidade de Reais que possui para a viagem: R$");
	scanf("%f", &R);
	/*Bloco de comandos*/
	D = R / 1.8;
	MA = R / 2.0;
	LS = R / 1.57;
	/*saida de dados*/
	printf("Valor em Dolares $%.2f\n", D);
	printf("Valor em Marco alemao DM: %.2f\n", MA);
	printf("Valor em Libra Esterlina  LS: %.2f\n", LS);
	/*Fim do codigo*/
}