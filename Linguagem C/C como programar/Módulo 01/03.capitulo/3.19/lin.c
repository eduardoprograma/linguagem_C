/*
 ============================================================================
 Name			: exercicio_3.19
 Author      	: Eduardo Felizardo
 Creation date 	: 03/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_3 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
3.19 	Calculadora de comissão de vendas. 
Uma grande companhia química paga seus vendedores por comissão. Os vendedores 
recebem R$ 200,00 por semana, mais 9 por cento de suas vendas brutas nessa 
semana. Por exemplo, um vendedor que comercialize R$ 5.000,00 em produtos 
químicos em uma semana receberá R$ 200,00 e mais 9 por cento de R$ 5.000,00, 
ou seja, receberá um total de R$ 650,00. 
Desenvolva um programa que peça os valores brutos de cada vendedor na semana 
que passou, calcule e apresente o valor que esse vendedor deverá receber. Pro-
cesse os valores referentes a um vendedor por vez. Veja um exemplo do diálogo 
de entrada/saída: 
Informe a venda em reais (-1 para terminar): 5.000,00
O pagamento é de: R$650,00
 ============================================================================
*/ 
/* Soluçãi do exercício 3.19 */
#include<stdio.h>
/* inicio da função main */
int main()
{
	/* declaração de varíaveis */
	double vendas;
	double comissao;

	/* entrada de dados */
	printf("Entre com o valor total das vendas: ");
	scanf("%lf", &vendas);

	/* looping do processamento */
	while(vendas != -1)
	{
		comissao  = 200.00 + 0.09 * vendas;		//calculo do salario.

		printf("O valor do salario: R$%.2f\n\n", comissao);

		/* novo calculo */
		printf("Entre com o valor total das vendas (-1 para encerrar): ");
		scanf("%lf", &vendas);
	} //fim de while

	return 0;		//Programa executado com sucesso.
}
/* fim da função main */
