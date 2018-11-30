/*Programa para calculo de salário*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare as variaveis*/
	/*Sal = Salário
	  NSal = Novo salario
	  A = Prcentagem*/
	float sal, NSal, A;
	/*Entrada de dados*/
	printf("Programa Calculo de salário.\n\n");
	printf("Digite o salario do funcionario: $");
	scanf("%f", &sal);
	/*Bloco de comando*/
	if(sal <= 300){
		A = 0.15;
		NSal = sal + (sal * A);
	}
	else if (sal > 300 && sal <= 600){
		A = 0.10;
		NSal = sal + (sal * A);
	}
	else if (sal > 600 && sal <= 900){
		A = 0.05;
		NSal = sal + (sal * A);
	}
	else{
		A = 0.00;
		NSal = sal + (sal * A);
	}
	/*Saída de dados*/
	printf("O novo salario do funcinario: $%.2f\n", NSal);
	printf("Se nao houver alteração é porque não direito a aumento\n");
	/*Fim do código*/
    system("pause");
    return 0;
}