/*Programa calculo de salário*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare as varáveis*/
	float A, sal, NSal;
	/*Entrada de dados*/
	printf("Programa de aumento de salario.\n\n");
	printf("Digite o salario: $");
	scanf("%f", &sal);
	/*Bloco de comando*/
	/*Saída de dados*/
	if(sal <= 300.00){
		A = 0.35;
		NSal = sal + (sal * A);
		printf("O novo salario $%.2f\n", NSal);
	}
	else{ 
		A = 0.15;
		NSal = sal + (sal * A);
		printf("O novo salario $%.2f\n", NSal);
	}
	/*FIM DE CÓDIGO*/
    system("pause");
    return 0;
}