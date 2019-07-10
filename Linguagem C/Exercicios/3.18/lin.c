//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.18 	Calculadora de limite de crédito. 
	Desenvolva um programa em C que determine se um cliente de uma loja de departamentos excedeu seu limite de crédito. Os seguintes fatos estão disponíveis para cada cliente:
	a) Número de conta. 
	b) Saldo no início do mês. 
	c) Total de todos os encargos desse cliente nesse mês. 
	d) Total de todos os créditos aplicados à conta desse cliente nesse mês.
	e) Limite de crédito autorizado. 
O programa deverá ler cada um desses fatos, calcular o novo saldo (= saldo inicial + encargos - créditos) e determinar se o novo saldo é superior ao limite de crédito do cliente. Para os clientes cujo limite de crédito foi ultrapassado, o programa deverá exibir o número de conta do cliente, o limite de crédito, o novo saldo e a mensagem ‘Limite de crédito ultrapassado’. Veja um exemplo do diálogo de entrada/saída:

Informe o número da conta (-1 para terminar): 100
Informe o saldo inicial: 5394,78 
Informe o total de encargos: 1000,00 
Informe o total de créditos: 500,00 
Informe o limite de crédito: 5500,00 
Conta: 100
Limite de crédito: 5500,00 
Saldo: 5894,78
Limite de crédito ultrapassado.*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int Num_Conta = 0;
	float Saldo_Inicial = 0.0, Total_Encargos = 0.0, Total_Creditos = 0.0, Limite_Credito = 0.0;
	float Saldo = 0.0;

	/* entrada de dados */
	printf("Informe o numero da conta:");
	scanf("%d", &Num_Conta);

	/* processamento */
	while(Num_Conta != -1)
	{
		printf("Informe o saldo inicial: ");
		scanf("%f", &Saldo_Inicial);
		printf("Informe o total de encargos: ");
		scanf("%f", &Total_Encargos);
		printf("Informe o total de creditos: ");
		scanf("%f", &Total_Creditos);
		printf("Informe o limite de credito: ");
		scanf("%f", &Limite_Credito);
		printf("/********RESULTADO**********/\n");
		printf("Conta: %d\n", Num_Conta);
		printf("Limite de credito : %.2f\n", Limite_Credito);
		Saldo = Saldo_Inicial + Total_Creditos;
		printf("Saldo: %.2f\n", Saldo);
		if(Saldo > Limite_Credito)
		{
			printf("Limite de credito ultrapassado.\n\nRECUSADO!!!\n\n");
		}
		else
		{
			printf("Limite liberado...\n\n");
		}
		printf("Informe o numero da conta:");
		scanf("%d", &Num_Conta);
	}
	/* saída de dados */
	return 0;
}			//fim da função main. Fiz umas mudanças por conta para me divertir...   ;-)