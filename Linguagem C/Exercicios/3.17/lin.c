//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.17 	Consumo de gasolina. Os motoristas se preocupam com o consumo de combustível de seus automóveis. Um motorista manteve um registro do número de abastecimentos que fez, registrando também o número de quilômetros rodados e de litros obtidos a cada abastecimento. Desenvolva um programa que peça o número de quilômetros dirigidos e a quantidade de litros obtidos a cada abastecimento. O programa deverá calcular e exibir a quantidade de quilômetros rodados por litros usados. Depois de processar toda a informação, o programa deverá calcular e exibir o total combinado de quilômetros por litro para todos os abastecimentos. Veja um exemplo do diálogo de entrada/saída: 
Informe quantos litros abasteceu (-1 para terminar): 25,6
Informe quantos km dirigiu: 287 
O consumo atual é de 11,210937 km/l
O consumo geral foi de 10,800712 km/l*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	float abastecimento = 0.0, KM_Percorrido = 0.0 , Consumo_Atual = 0.0, Consumo_total = 0.0, Consumo_Medio = 0.0;
	int media = 0;

	/* entrada de dados */
	printf("Informe quantos litros abasteceu: ");
	scanf("%f", &abastecimento);

	/* processamento */
	while(abastecimento != -1)
	{
		printf("Informe quantos km dirigiu: ");
		scanf("%f", &KM_Percorrido);
		Consumo_Atual = KM_Percorrido / abastecimento;
		Consumo_total += Consumo_Atual;
		printf("O consumo atual e de %.2f km/l\n\n", Consumo_Atual);
		printf("Informe quantos litros abasteceu (-1 para terminar): ");
		scanf("%f", &abastecimento);
		media++;
	}
	Consumo_Medio = Consumo_total / media;
	/* saída de dados */
	printf("O consumo geral foi de %.2f km/l\n", Consumo_total);
	printf("O consumo medio foi de %.2f km/l\n\n", Consumo_Medio);

	return 0;
}			//fim da função main.