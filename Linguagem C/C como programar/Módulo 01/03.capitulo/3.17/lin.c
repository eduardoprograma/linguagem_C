/*
 ============================================================================
 Name			: exercicio_3.17
 Author      	: Eduardo Felizardo
 Creation date 	: 02/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_3 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
 3.17 	Consumo de gasolina. 
 	Os motoristas se preocupam com o consumo de combustível de seus automóveis. 
	Um motorista manteve um registro do número de abastecimentos que fez, re-
	gistrando também o número de quilômetros rodados e de litros obtidos a cada 
	abastecimento. Desenvolva um programa que peça o número de quilômetros dir-
	igidos e a quantidade de litros obtidos a cada abastecimento. O programa 
	deverá calcular e exibir a quantidade de quilômetros rodados por litros u-
	sados. Depois de processar toda a informação, o programa deverá calcular e 
	exibir o total combinado de quilômetros por litro para todos os abastecime-
	ntos. Veja um exemplo do diálogo de entrada/saída: 
		Informe quantos litros abasteceu (-1 para terminar): 25,6
		Informe quantos km dirigiu: 287 
		O consumo atual é de 11,210937 km/l
		O consumo geral foi de 10,800712 km/l
 ============================================================================
*/ 
/* Solução do execício 3.17 */
#include <stdio.h>

/* inicio da função main */
int main()
{
	/* declaração de varáveis */
	double litros;
	double quilometros;
	double TotalLitros = 0.0;
	double TotalQuilomentros = 0.0;
	double ConsumoGeral;

	/* entrada de dados */
	printf("Entre com a quantidade de litros abastecidos: ");
	scanf("%lf", &litros);

	/* processamento de dados */
	while(litros != -1)
	{
		TotalLitros += litros;		//Soma dos litros abastecidos.

		printf("Entre com a quantidade de quilomentros percorridos: ");
		scanf("%lf", &quilometros);
		TotalQuilomentros += quilometros;		//Soma dos quilometros percorridos.

		/* Km/l */
		printf("Os Km/l para este tanque foi %f.\n\n", quilometros/litros);

		/* Novo tanque de combustível */
		printf("Entre com a quantidade de litros abastecidos (-1 para encerrar): ");
		scanf("%lf", &litros);
	}

	/* calculo da média */
	ConsumoGeral = TotalQuilomentros / TotalLitros;
	printf("A media geral de consumo foi %f Km/l.\n\n", ConsumoGeral);

	return 0;		//Programa executado com sucesso.
}
/* fim da função main */