//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.17 	Calculando limites de crédito. 
	Poupar dinheiro vem se tornando algo cada vez mais difícil de se fazer durante períodos de recessão, de modo que as empresas podem estreitar seus limites de crédito para impedir que suas contas a receber (dinheiro devido a elas) se tornem muito grandes. Em resposta a uma recessão prolongada, uma empresa cortou os limites de crédito de seus clientes pela metade. Assim, se um cliente em particular tinha um limite de crédito de R$ 2.000,00, agora ele é de R$ 1.000,00. Se um cliente tinha um limite de R$ 5.000,00, agora ele é de R$ 2.500,00. Escreva um programa que analise o status de crédito de três clientes dessa empresa. Você receberá as seguintes informações: 
		a) O número de conta do cliente. 
		b) O limite de crédito do cliente antes da recessão. 
		c) O saldo atual do cliente (ou seja, o valor que o cliente deve à empresa).
Seu programa deve calcular e imprimir o novo limite de crédito para cada cliente e deve determinar (e imprimir) quais clientes têm saldo atual superior a seus novos limites de crédito.*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int Numero_Conta;
	double Limite_Credito_Anterior, Saldo_atual_Devido;
	double Novo_Limite_Credito;

	/* entrada de dados */
	printf("Digite o numero da conta: ");
	scanf("%d", &Numero_Conta);

	/* processamento */
	for(; Numero_Conta != -1;)
	{
		printf("Digite o Limite de credito antes da recessao: ");
		scanf("%lf", &Limite_Credito_Anterior);
		printf("Digite o saldo devedor atual: ");
		scanf("%lf", &Saldo_atual_Devido);
		Novo_Limite_Credito = Limite_Credito_Anterior / 2;
		if(Saldo_atual_Devido > Novo_Limite_Credito)
		{
			printf("Limite de Credito: R$%.2f\n", Novo_Limite_Credito);
			printf("Saldo atual: -R$%.2f\n", Saldo_atual_Devido);
			printf("Saldo atual superior ao limite de credito.\n\n");
		}
		else
		{
			printf("Limite de Credito: R$%.2f\n", Novo_Limite_Credito);
			printf("Saldo atual: -R$%.2f\n", Saldo_atual_Devido);
			printf("Limite disponivel: R$%.2f\n", Novo_Limite_Credito - Saldo_atual_Devido);
			printf("Saldo atual inferior ao limite de credito.\n\n");
		}
		printf("Digite o numero da conta(-1para finalizar): ");
		scanf("%d", &Numero_Conta);
	}
	/* saída de dados */
	return 0;
}			//fim da função main.