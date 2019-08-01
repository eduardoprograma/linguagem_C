/*
 ============================================================================
 Name        : linc.c
 Author      : Eduardo Felizardo Cândido
 Version     :
 Copyright   : Your copyright notice
 Description : Comissões de vendas.
 ============================================================================
 */

/*
 ============================================================================
 6.10 	Comissões de vendas. 
	Use um array com subscrito único para resolver o problema a seguir. Uma 
	empresa paga o salário de seus vendedores com base em uma comissão. O ven-
	dedor recebe R$ 200,00 por semana, e mais 9 por cento de suas vendas brut-
	as nessa semana. Por exemplo, um vendedor, que totalize R$ 3.000,00 em 
	vendas em uma semana, receberá R$ 200,00 e mais 9 por cento de R$ 3.000,00, 
	ou seja, R$ 470,00. Escreva um programa em C (usando um array de contadores) 
	que determine quantos vendedores receberam salários dentro de cada um dos 
	seguintes intervalos (suponha que o salário de cada vendedor seja arredond-
	ado em um valor inteiro):
		a) R$ 200–299 
		b) R$ 300–399 
		c) R$ 400–499 
		d) R$ 500–599 
		e) R$ 600–699 
		f) R$ 700–799 
		g) R$ 800–899 
		h) R$ 900–999 
		i) R$ 1000 ou mais
 ============================================================================
 */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int cont;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0;
	int contadores[9] = {0};
	int N_Vendedor;
	float fixo = 200.00;
	float porcentagem = 0.09;
	float Valor_Venda_Total = 0;
	float Salario_Semanal = 0;

	/* entrada de dados */
	printf("Programa calcula salario semanal dos vendedores.\n\n");
	printf("Digite o numero de vendedores que deseja calcular: ");
	scanf("%d", &N_Vendedor);

	/* processamento */
	for(cont = 0; cont < N_Vendedor; cont++)
	{
		printf("Digite o Valor total de venda do vendedor %d: R$", cont + 1);
		scanf("%f", &Valor_Venda_Total);

		/* Calculo do Salario */
		Salario_Semanal = fixo + (Valor_Venda_Total * porcentagem);

		/* Iniciar contagem */
		if(Salario_Semanal >= 200 && Salario_Semanal < 300)
		{
			contadores[0]++;
		}
		if(Salario_Semanal >= 300 && Salario_Semanal < 400)
		{
			contadores[1]++;
		}
		if(Salario_Semanal >= 400 && Salario_Semanal < 500)
		{
			contadores[2]++;
		}
		if(Salario_Semanal >= 500 && Salario_Semanal < 600)
		{
			contadores[3]++;
		}
		if(Salario_Semanal >= 600 && Salario_Semanal < 700)
		{
			contadores[4]++;
		}
		if(Salario_Semanal >= 700 && Salario_Semanal < 800)
		{
			contadores[5]++;
		}
		if(Salario_Semanal >= 800 && Salario_Semanal < 900)
		{
			contadores[6]++;
		}
		if(Salario_Semanal >= 900 && Salario_Semanal < 1000)
		{
			contadores[7]++;
		}
		if(Salario_Semanal >= 1000)
		{
			contadores[8]++;
		}
	}		//fim de for

	/* saída de dados */
	printf("\n\n");
	printf("%s\t%30s\n\n", "Descricao", "Valor");
	for(cont = 0; cont < N_Vendedor; cont++)
	{
		if(cont == 0)
		{
			printf("Vendores que receberam entre R$200,00 - R$299,00 : %d\n", contadores[0]);
		}
		if(cont == 1)
		{
			printf("Vendores que receberam entre R$300,00 - R$399,00 : %d\n", contadores[1]);
		}
		if(cont == 2)
		{
			printf("Vendores que receberam entre R$400,00 - R$499,00 : %d\n", contadores[2]);
		}
		if(cont == 3)
		{
			printf("Vendores que receberam entre R$500,00 - R$599,00 : %d\n", contadores[3]);
		}
		if(cont == 4)
		{
			printf("Vendores que receberam entre R$600,00 - R$699,00 : %d\n", contadores[4]);
		}
		if(cont == 5)
		{
			printf("Vendores que receberam entre R$700,00 - R$799,00 : %d\n", contadores[5]);
		}
		if(cont == 6)
		{
			printf("Vendores que receberam entre R$800,00 - R$899,00 : %d\n", contadores[6]);
		}
		if(cont == 7)
		{
			printf("Vendores que receberam entre R$900,00 - R$999,00 : %d\n", contadores[7]);
		}
		if(cont == 8)
		{
			printf("Vendores que receberam acima R$1000,00           : %d\n", contadores[8]);
		}
	}			//fim do for.

	return 0;
}			//fim da função main.