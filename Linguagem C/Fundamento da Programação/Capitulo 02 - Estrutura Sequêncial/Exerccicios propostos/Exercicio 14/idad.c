/*Programa que Calcula a idade*/
#include <stdio.h>
#include <stdlib.h>
main ()
{
	/*Declarar variaveis*/
	float anoNasc, anoAtual, idade, idaMeses, idaDias, idaSem;
	/*Entrada de dados*/
	printf("Programa para calculo da idade\n\n");
	printf("Digite o seu anoa de Nascimento: ");
	scanf("%f", &anoNasc);
	printf("Digite o anoa atual: ");
	scanf("%f", &anoAtual);
	/*Bloco de comando*/
	idade = anoAtual - anoNasc;
	idaMeses = idade * 12;
	idaDias = idade * 365;
	idaSem = idade * 12;
	/*Saida de dados*/
	printf("A sua idade e %.0f\n", idade);
	printf("A sua idade em meses %.0f\n", idaMeses);
	printf("A sua idade em dias %.0f\n", idaDias);
	printf("A sua idade em semanas %.0f\n", idaSem);
	/*Fim do codigo*/
    system("pause");
    return 0;	
}