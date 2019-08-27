//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.21 	Calculadora de salário. 
	Desenvolva um programa que determine o salário semanal bruto de vários funcionários. A empresa paga ‘uma hora normal’ para cada funcionário pelas primeiras 40 horas trabalhadas, ‘uma hora normal e meia’ por hora trabalhada a partir de 40 horas. Você recebe uma lista de funcionários da empresa, o número de horas que cada funcionário trabalhou na semana anterior e o valor ganho por hora de cada funcionário. Seu programa deverá ler essas informações para cada funcionário e determinar e exibir o salário que cada um deverá receber. Aqui está um exemplo do diálogo de entrada/saída: 
		Digite # de horas trabalhadas (-1 para terminar): 39 
		Digite o salário por (R$00,00): 10,00 
		Salário é de R$390,00*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	float Horas_Normais = 40, Horas_Trabalhadas = 0.0, Horas_Extras = 1.5, Salario_Semanal = 0.0, Valor = 0;
	float HN = 0, HE = 0;

	/* entrada de dados */
	printf("Digite # de horas trabalhadas: ");		//entrada de horas
	scanf("%f", &Horas_Trabalhadas);

	/* processamento */
	while (Horas_Trabalhadas != -1)			//enquanto Horas trabalhadas for diferente de -1 continua.
	{
		printf("Digite o salario por (R$00,00): ");		//Valor da hora por dia
		scanf("%f", &Valor);
		if(Horas_Trabalhadas <= Horas_Normais)		//Calculo sem horas extras
		{
			Salario_Semanal = Horas_Trabalhadas * Valor;
		}
		else			//Calculo com Horas extras
		{
			HE = Horas_Trabalhadas - Horas_Normais;
			Salario_Semanal = (Horas_Normais * Valor) + ((HE * Valor) * Horas_Extras);
		}
		printf("Salario e de R$%.2f\n\n", Salario_Semanal);		//saída do resultado
		printf("Digite # de horas trabalhadas (-1 para terminar): ");		// se for igual a -1 termina
		scanf("%f", &Horas_Trabalhadas);
	}
	return 0;
	/* saída de dados */
}			//fim da função main.