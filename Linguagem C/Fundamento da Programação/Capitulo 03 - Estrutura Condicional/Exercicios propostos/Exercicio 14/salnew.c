/*Programa para calculo de aumento de salrio conforme sua faixa*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare as variáveis*/
	/*sal = Salário;
	  A = Procentagem;
	  salN = Novo salário;*/
	float sal, A, salN;
	/*Entrada de variáveis*/
	printf("Programa para calculo de novo salario.\n\n");
	printf("Digite o salario para saber se podemos altera-lo: $");
	scanf("%f", &sal) ;
	/*Bloco de comando*/
	if(sal <= 300){					//Salarios divididos por faixas
		A = 0.50;
		salN = sal + (sal * A);
	}
	else if(sal > 300 && sal <= 500){
		A = 0.40;
		salN = sal + (sal * A);
	}
	else if(sal > 500 && sal <= 700){
		A = 0.30;
		salN = sal + (sal * A);
	}
	else if(sal > 700 && sal <= 800){
		A = 0.20;
		salN = sal + (sal * A);
	}
	else if(sal > 800 && sal <= 1000){
		A = 0.10;
		salN = sal + (sal * A);
	}
	else{
		A = 0.05;
		salN = sal + (sal * A);
	}
	/*Saída de variáveis*/
	printf("Novo salario $%.2f\n\n", salN); //Saída do novo valor de salario
	/*Fim do código*/
    system("pause");
    return 0;
}