/*
 ============================================================================
 Name			: exercicio_3.18
 Author      	: Eduardo Felizardo
 Creation date 	: 02/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_3 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
3.18	Calculadora de limite de crédito. 
	Desenvolva um programa em C que determine se um cliente de uma loja de 
	departamentos excedeu seu limite de crédito. Os seguintes fatos estão 
	disponíveis para cada cliente:
	a) Número de conta. 
	b) Saldo no início do mês. 
	c) Total de todos os encargos desse cliente nesse mês. 
	d) Total de todos os créditos aplicados à conta desse cliente nesse mês.
	e) Limite de crédito autorizado. 
O programa deverá ler cada um desses fatos, calcular o novo saldo (= saldo 
inicial + encargos - créditos) e determinar se o novo saldo é superior ao li-
mite de crédito do cliente. Para os clientes cujo limite de crédito foi ultr-
apassado, o programa deverá exibir o número de conta do cliente, o limite de 
crédito, o novo saldo e a mensagem ‘Limite de crédito ultrapassado’. Veja um 
exemplo do diálogo de entrada/saída:

		Informe o número da conta (-1 para terminar): 100
		Informe o saldo inicial: 5394,78 
		Informe o total de encargos: 1000,00 
		Informe o total de créditos: 500,00 
		Informe o limite de crédito: 5500,00 
		Conta: 100
		Limite de crédito: 5500,00 
		Saldo: 5894,78
		Limite de crédito ultrapassado.
 ============================================================================
*/ 
/* Solução do exercício 3.18 */
#include <stdio.h>

/* inicio da função main */
int main()
{
	/* declaração de varáveis */
	int NumeroConta;
	double SaldoInicial = 0.0;
	double TotalEncargos = 0.0;
	double TotalCreditos = 0.0;
	double LimiteCredito = 0.0;
	double Saldo = 0.0;

	/* entrada de dados */
	printf("Informe o numero da conta: ");
	scanf("%d", &NumeroConta);

	/* Processamento */
	while(NumeroConta != -1)
	{
		printf("Informe o saldo inicial: ");
		scanf("%lf", &SaldoInicial);
		printf("Informe o total de encargos: ");
		scanf("%lf", &TotalEncargos);
		printf("Informe o total de creditos: ");
		scanf("%lf", &TotalCreditos);
		printf("Informe o limite de credito: ");
		scanf("%lf", &LimiteCredito);

		/* Saída de créditos */
		printf("**********RESULTADO**********\n");
		printf("Conta: %d\n", NumeroConta);
		printf("Limite de credito: %.2f\n", LimiteCredito);

		/* Calculo do saldo */
		Saldo = SaldoInicial + TotalCreditos;
		printf("Saldo: %lf\n", Saldo);

		/* Configura se é possivel liberar o crédito */
		if(Saldo > LimiteCredito)
		{
			printf("Limite de credito ultrapassado.\n\nRECUSADO!!!");
		}
		else
		{
			printf("Limite de credito liberado!!!\n\n");
		}

		/* Nova conta */
		printf("Informe o numero da conta (-1 para encerrar): ");
		scanf("%d", &NumeroConta);
	}

	return 0;		//Programa executou com sucesso
}
/* fim da função main */
