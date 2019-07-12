//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.9 	Tarifa de estacionamento. 
	Um estacionamento cobra uma tarifa mínima de R$ 2,00 por uma permanência de até três horas, e R$ 0,50 adicionais por hora para cada hora, ou parte dela, por até três horas. A tarifa máxima para qualquer período de 24 horas é de R$ 10,00. Suponha que nenhum carro estacione por mais de 24 horas de cada vez. Escreva um programa que calcule e imprima as tarifas de estacionamento para cada um dos três clientes que utilizaram esse estacionamento ontem. Você deverá informar as horas de permanência de cada cliente. Seu programa deverá imprimir os resultados em um formato tabular e deverá calcular e imprimir o total recebido ontem. O programa deverá usar a função calcularTaxas para determinar o valor devido por cliente. Sua saída deverá aparecer no seguinte formato:
		Carro 	Horas 	Taxa
		1		1,5		2,00
		2		4,0		2,50
		3		24,0	10,00
		Total	29,5	14,50 */

#include <stdio.h>

float estacionamento_taxa(float taxa);

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i;
	float somaH = 0, somaT = 0, x = 0;

	/* entrada de dados */
	//printf("Digite a hora de permanencia: ");
	//scanf("%f", &x);

	/* processamento */
	printf("%s\t%s\t%s\n", "Carro", "Horas", "Taxa");
	for(i = 1; i < 4; i++)
	{
		printf("Digite a hora de permanencia: ");
		scanf("%f", &x);
		printf("%d\t%.2f\t%.2f\n", i, x, estacionamento_taxa(x));
		somaH += x;
		somaT += estacionamento_taxa(x);
		
	}
	/* saída de dados */
	printf("%s\t%.2f\t%.2f\n", "TOTAL", somaH, somaT);
}			//fim da função main.
float estacionamento_taxa(float hora)
{
	float taxa = 2.00;
	if(hora < 3)
	{
		return taxa;
	}
	else if (hora > 3 && hora <= 6)
	{
		return (taxa + ((hora - 3) * 0.5));
	}
	else
	{
		return 10.00;
	}
}