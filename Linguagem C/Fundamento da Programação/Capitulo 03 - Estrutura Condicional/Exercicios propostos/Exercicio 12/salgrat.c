/*Programa de gartificação*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare as variáveis*/
	/*sal = salario;
	  imp = Imposto;
	  grat = Gratificação;
	  salImp = Salario com imposto;
	  salTot = Salario total;*/
	float sal, imp = 0.07, grat, salImp, salTot, aux;
	/*Entrada de dados*/
	printf("Programa gratificação de funcionarios.\n\n");
	printf("Digite o salário do funcionário: $");
	scanf("%f", &aux);
	sal = aux;
	salImp = sal - (sal * imp);
	/*Bloco de comando*/
	if(sal <= 300){
		grat = 100.00;
		salTot = salImp + grat;
	}
	else if(sal > 300 && sal <= 600){
		grat = 75.00;
		salTot = salImp + grat;
	}
	else if(sal > 600 && sal <= 900){
		grat = 50.00;
		salTot = salImp + grat;
	}
	else{
		grat = 35.00;
		salTot = salImp + grat;
	}
	/*Saida de dados*/
	printf("Salário a receber: $%.2f\n", salTot);
	/*Fim do código*/
    system("pause");
    return 0;
}