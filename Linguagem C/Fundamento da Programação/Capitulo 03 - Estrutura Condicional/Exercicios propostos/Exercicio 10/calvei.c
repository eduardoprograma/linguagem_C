/*Programa de calculo para preço final de veículo*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare a variavel*/
	/*CF = Custo de fabrica
	  PD = Porcentagem da distribuidora
	  I = Imposto
	  PI = Preço com taxas da distribuidora
	  II = Precço com imposto
	  PC = Preço final consumidor*/
	float CF, PD, I, PI, II, PC;
	/*Entrada de dados*/
	printf("Programa que calcula preço final do veiculo.n\n");
	printf("Entre com o valor do veiculo: $");
	scanf("%f", &CF);
	/*Bloco de comandos*/
	if(CF <= 12000.00){
		PD = 0.05;
		I = 0.00;
		PI = CF + (CF * PD);
		II = CF * I;
		PC = PI + II;
	}
	else if(CF >12000.00 && CF <= 25000.00){
		PD = 0.10;
		I = 0.15;
		PI = CF + (CF * PD);
		II = CF * I;
		PC = PI + II;
	}
	else{
		PD = 0.15;
		I = 0.20;
		PI = CF + (CF * PD);
		II = CF * I;
		PC = PI + II;
	}
	/*Saída de dados*/
	printf("O valor do seu veiculo é $%.2f\n", PC);
	/*Fim de código*/
    system("pause");
    return 0;
}