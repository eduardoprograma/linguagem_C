//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.28 	Calculando o pagamento semanal. 
	Uma empresa paga a seus funcionários como gerentes (que recebem um salário semanal fixo), trabalhadores por hora (que recebem um salário fixo por hora até as 40 primeiras horas de trabalho e ‘hora e meia’ — ou seja, 1,5 vez o salário por hora — para horas extras trabalhadas), trabalhadores comissionados (que recebem R$ 250,00 mais 5,7 por cento de suas vendas brutas semanais) ou trabalhadores por unidade (que recebem um valor fixo para cada um dos itens que eles produzem — cada trabalhador por unidade nessa empresa trabalha apenas em um tipo de item). Escreva um programa que calcule o pagamento semanal de cada empregado. Você não sabe o número de empregados com antecedência. Cada tipo de empregado tem seu próprio código de pagamento: gerentes têm código 1, trabalhadores por hora têm código 2, trabalhadores comissionados têm código 3 e trabalhadores por unidade têm código 4. Use um switch para calcular o pagamento de cada empregado com base no seu código de pagamento. Dentro do switch, peça ao usuário (ou seja, o funcionário administrativo da folha de pagamento) que informe os fatos apropriados que seu programa precisa para calcular o pagamento de cada empregado com base no código. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int codigo, Nivel_Gerente, Nivel_Operario;

	/* Salarios Gerentes */
	float Salario_1 = 1417.72;
	float Salario_2 = 1722.52;
	float Salario_3 = 2437.70;

	/* Supervisor, Encarregado, Operario */
	int Horas_Normais = 40;
	int horas_trabalhadas = 0; 
	int Horas_Extras;
	float Valor_Supervisor = 20.00;
	float Valor_Encarregado = 15.00;
	float Valor_Operario = 10.00;
	float Valor_Receber = 0;

	/* Comissionado */
	float fixo = 250.00;
	float comissao = 0.057;
	float Venda_Bruto = 0;

	/* Contrato por item */
	int item = 0;
	float Valor_Item1 = 0.70;
	float Valor_Item2 = 1.40;
	float Valor_Item3 = 1.90;;
	int produzido = 0;

	/* entrada de dados */
	printf("Entre com o codigo do funcionario: ");
	scanf("%d", &codigo);

	/* processamento */
	while(codigo != -1)
	{
		switch (codigo)
		{
		case 1:
			printf("Digite o nivel do gerente de 1 a 3: ");		/* Níveis de gerencia com salarios diferentes */
			scanf("%d", &Nivel_Gerente);
			switch (Nivel_Gerente)
			{
			case 1:			/* Nivel gerente 1 */
				printf("Nivel de Gerente 1 Salario: R$%.2f\n", Salario_1);
				break;
			
			case 2:			/* Nivel gerente 2 */
				printf("Nivel de Gerente 1 Salario: R$%.2f\n", Salario_2);
				break;

			case 3:			/* Nivel gerente 3 */
				printf("Nivel de Gerente 1 Salario: R$%.2f\n", Salario_3);
				break;
			default:
				printf("Digite um nivel aceitavel. Entre 1 e 3.\n");
				break;
			}
			break;
		
		case 2:
			printf("1.Supervisor\n2.Encarregado\n3.Operario\n");		/* Niveis de Operarios */
			printf("Digite o nivel do funcionario: ");
			scanf("%d", &Nivel_Operario);
			switch (Nivel_Operario)
			{
			case 1:			/* Supervisor */
				printf("Digite o numero de horas trabalhadas na semana: ");
				scanf("%d", &horas_trabalhadas);
				if(horas_trabalhadas <= Horas_Normais)
				{
					Valor_Receber = horas_trabalhadas * Valor_Supervisor;
					printf("Nivel de Supervisor Salario: R$%.2f\n", Valor_Receber);
				}
				else
				{
					Horas_Extras = horas_trabalhadas - Horas_Normais;
					Valor_Receber = (Horas_Normais * Valor_Supervisor) + (Horas_Extras * (Valor_Supervisor + (Valor_Supervisor * 1.5)));
					printf("Nivel de Supervisor Salario: R$%.2f\n", Valor_Receber);
				}
				break;
			
			case 2:			/* Encarregado */
				printf("Digite o numero de horas trabalhadas na semana: ");
				scanf("%d", &horas_trabalhadas);
				if(horas_trabalhadas <= Horas_Normais)
				{
					Valor_Receber = horas_trabalhadas * Valor_Encarregado;
					printf("Nivel de Encarregado Salario: R$%.2f\n", Valor_Receber);
				}
				else
				{
					Horas_Extras = horas_trabalhadas - Horas_Normais;
					Valor_Receber = (Horas_Normais * Valor_Encarregado) + (Horas_Extras * (Valor_Encarregado + (Valor_Encarregado * 1.5)));
					printf("Nivel de Encarregado Salario: R$%.2f\n", Valor_Receber);
				}
				break;

			case 3:			/* Operario */
				printf("Digite o numero de horas trabalhadas na semana: ");
				scanf("%d", &horas_trabalhadas);
				if(horas_trabalhadas <= Horas_Normais)
				{
					Valor_Receber = horas_trabalhadas * Valor_Operario;
					printf("Nivel de Operario Salario: R$%.2f\n", Valor_Receber);
				}
				else
				{
					Horas_Extras = horas_trabalhadas - Horas_Normais;
					Valor_Receber = (Horas_Normais * Valor_Operario) + (Horas_Extras * (Valor_Operario + (Valor_Operario * 1.5)));
					printf("Nivel de Operario Salario: R$%.2f\n", Valor_Receber);
				}
				break;

			default:
				printf("Digite um nivel aceitavel. Entre 1 e 3.\n");
				break;
			}
			break;
		
		case 3:			/* Comissionado */
			printf("Digite o total de vendas da semana: R$");
			scanf("%f", &Venda_Bruto);
			Valor_Receber = fixo + (Venda_Bruto * comissao);
			printf("Nivel de Comissionado Salario: R$%.2f\n", Valor_Receber);
			break;

		case 4:		/* Contratadopor intem */
			printf("1.Item\n2.item\n3.Item\n");
			printf("Digite o numero do item produzido: ");
			scanf("%d", &item);
			switch (item)
			{
			case 1:		/* Item 1 */
				printf("Digite o valor produzido do item: ");
				scanf("%d", &produzido);
				Valor_Receber = produzido * Valor_Item1;
				printf("Nivel de Contrato Salario: R$%.2f\n", Valor_Receber);
				break;
			
			case 2:			/* Item 2 */
				printf("Digite o valor produzido do item: ");
				scanf("%d", &produzido);
				Valor_Receber = produzido * Valor_Item2;
				printf("Nivel de Contrato Salario: R$%.2f\n", Valor_Receber);
				break;

			case 3:			/* Item 3 */
				printf("Digite o valor produzido do item: ");
				scanf("%d", &produzido);
				Valor_Receber = produzido * Valor_Item3;
				printf("Nivel de Contrato Salario: R$%.2f\n", Valor_Receber);
				break;
			
			default:
				printf("Digite um nivel aceitavel. Entre 1 e 3.\n");
				break;
			}
			break;
		default:
			break;
		}
		printf("Entre com o codigo do funcionario(-1 para encerrar): ");
		scanf("%d", &codigo);
	}
	/* saída de dados */
	return 0;
}			//fim da função main.