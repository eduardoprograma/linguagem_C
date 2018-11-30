/*Programa de Investimento*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	/*Declare as varáveis*/
	/**/
	int tipo;
	float valor, valorT = 0.0;
	char tip[22];
	/*Entrada de dados*/
	printf("Programa Investimento.\n1 - Poupança\n;2 - Fundos de renda fixa\n\n");
	printf("Digite o valor a ser investido: $");
	scanf("%f", &valor);
	printf("Tipo de investimento: ");
	scanf("%d", &tipo);
	/*Bloco de comando*/
	switch(tipo){
		case 1:
			valorT = valor + (valor * 0.03);
			strcpy(tip, "Popança");
		    break;
		case 2:
			valorT = valor + (valor * 0.04);
			strcpy(tip, "Fundo de Renda Fixa");
		    break;
		default:
			printf("Comece de novo: Opção invalida!\n\n");
		    break;
	}
	/*Saída de dados*/
	printf("Para o Investimento %s o valor sera acrecido com juros : $%.2f\n\n", tip,  valorT);
	/*Fim do código*/
    system("pause");
    return 0 ;
}