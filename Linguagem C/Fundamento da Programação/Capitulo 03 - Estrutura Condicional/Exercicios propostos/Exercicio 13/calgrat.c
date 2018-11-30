/*Programa de atualização e classificação de produto e preço*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	/*Declare as variaveis*/
	/*prec = preço;
	  A = porcentagem;
	  preT = preço total;*/
	float prec, A, preT;
	char classe[12];
	/*Entrada de dados*/
	printf("Programa Atualização e classificação de produto.\n\n");
	printf("Digite o preço: $");
	scanf("%f", &prec);
	/*Bloco de comando*/
	/*Calculo de preço*/
	if(prec <= 50){
		A = 0.05;
		preT = prec + (prec * A);
	}
	else if(prec > 50 && prec <= 100){
		A = 0.10;
		preT = prec + (prec * A);
	}
	else{
		A = 0.15;
		preT = prec + (prec * A);
	}
	/*Bloco de comando*/
	/*Classificação*/
	if(preT <= 80){
		strcpy(classe, "Barato");
	}
	else if(preT > 80 && preT <= 120){
		strcpy(classe, "Normal");
	}
	else if(preT > 120 && preT <= 200){
		strcpy(classe, "Caro");
	}
	else{
		strcpy(classe, "Muito Caro");
	}
	/*Saida de dados*/
	printf("Preço $%.2f\n", preT);
	printf("Classificação: %s\n", classe);
	/*Fim do código*/
    system("pause");
    return 0;
}