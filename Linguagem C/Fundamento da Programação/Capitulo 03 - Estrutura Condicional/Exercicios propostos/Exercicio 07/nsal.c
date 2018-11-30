/*Programa de aumento de salario*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare as varáveis*/
	float A = 0.30, sal, NSal;
	/*Entrada de dados*/
	printf("Programa de aumento de salario.\n\n");
	printf("Digite o salario: $");
	scanf("%f", &sal);
	/*Bloco de comando*/
	/*Saída de dados*/
	if(sal <= 500.00){
		NSal = sal + (sal * A);
		printf("O novo salario $%.2f\n", NSal);
	}
	else{
		printf("Aumento não se aplica.\n");
	}
	/*FIM DE CÓDIGO*/
    system("pause");
    return 0;
}