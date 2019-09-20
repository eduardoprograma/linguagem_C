/*
 ============================================================================
 Name			: exercicio_3.21
 Author      	: Eduardo Felizardo
 Creation date 	: 06/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_3 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
3.21 	Calculadora de salário. 
	Desenvolva um programa que determine o salário semanal bruto de vários 
	funcionários. A empresa paga ‘uma hora normal’ para cada funcionário pelas 
	primeiras 40 horas trabalhadas, ‘uma hora normal e meia’ por hora traba-
	lhada a partir de 40 horas. Você recebe uma lista de funcionários da emp-
	resa, o número de horas que cada funcionário trabalhou na semana anterior 
	e o valor ganho por hora de cada funcionário. Seu programa deverá ler essas 
	informações para cada funcionário e determinar e exibir o salário que cada 
	um deverá receber. Aqui está um exemplo do diálogo de entrada/saída: 
		Digite # de horas trabalhadas (-1 para terminar): 39 
		Digite o salário por (R$00,00): 10,00 
		Salário é de R$390,00
 ============================================================================
*/
/* Solução do exercício 3.21 */
#include <stdio.h>

/* inicio da função main */
int main()
{
	/* declaração de varáveis */
	double horas;		//total de horas trabalhadas
	double taxa; 		//taxa de pagamento por hora
	double salario;		//salario bruto

	/* Entre com as primeiras horas do funcionario */
	printf("Digite as horas trabalhadas: ");
	scanf("%lf", &horas);

	/* loop até que a sentinela seja acionada por -1 */
	while(horas != -1)
	{
		printf("Digite o valor horario do trabalhador (R$00.00):");
		scanf("%lf", &taxa);

		if(horas <= 40)
		{
			salario =  horas * taxa;
		} /* termina if */
		else
		{
			/* calcula o valor com horas extras */
			salario = 40.0 * taxa + (horas - 40.00) * taxa * 1.5;
		} /* fim de else */

		/* exibe o pagamento bruto */
		printf("Salario e R$%.2f\n\n", salario);

		/* solicita nova horas de outro funcionário */
		printf("Digite as horas (-1 para encerrar): ");
		scanf("%lf", &horas);
	}

	return 0;		//indica encerramento bem-sucedido.
}
/* fim da função main */