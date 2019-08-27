//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.19 	Calculadora de comissão de vendas. Uma grande companhia química paga seus vendedores por comissão. Os vendedores recebem R$ 200,00 por semana, mais 9 por cento de suas vendas brutas nessa semana. Por exemplo, um vendedor que comercialize R$ 5.000,00 em produtos químicos em uma semana receberá R$ 200,00 e mais 9 por cento de R$ 5.000,00, ou seja, receberá um total de R$ 650,00. Desenvolva um programa que peça os valores brutos de cada vendedor na semana que passou, calcule e apresente o valor que esse vendedor deverá receber. Processe os valores referentes a um vendedor por vez. Veja um exemplo do diálogo de entrada/saída: 
Informe a venda em reais (-1 para terminar): 5.000,00
O pagamento é de: R$650,00*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	float Valor_Vendido = 0.0, porcentagem = 0.09, Salario_bruto = 200.00, Valor_Receber = 0.0;

	/* entrada de dados */
	printf("Informe a venda em reais: R$");
	scanf("%f", &Valor_Vendido);
	
	/* processamento */
	while (Valor_Vendido != -1)
	{
		Valor_Receber = Salario_bruto + (Valor_Vendido * porcentagem);
		printf("O pagamento e de: R$%.2f\n\n", Valor_Receber);
		printf("Informe a venda em reais (-1 para terminar): R$");
		scanf("%f", &Valor_Vendido);
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.