/*Programa calculo de salario*/
#include <stdio.h>
#include <stdlib.h>
main()
	{
		/*DEclare as variaveis*/
		float HTrab, VSal, HExtra, VHTrab, VHExtra, SBruto, SHExtra, salario, VHora;
		/*Entrada de dados*/
		printf("Programa para calculo de salario.\n\n");
		printf("Digite o valor do salario : $");
		scanf("%f", &VSal);
		printf("Digite a quantidade de hora trabalhada: ");
		scanf("%f", &HTrab);
		printf("Digite a quantidade de horas extras se houver: ");
		scanf("%f", &HExtra);
		/*Bloco de comando*/
		VHora = VSal / 220;                //220 é o numero de horas trabalhadas em um mes
		VHExtra = (VHora * 0.6) + VHora;   //0.6 é a porcentagem acrecida nas horas normais
		SBruto = HTrab * VHora;
		SHExtra = HExtra * VHExtra;
		salario = SBruto + SHExtra;
		/*Saida de variaveis*/
		printf("\nValor das horas extras: $%.2f\n", SHExtra);
		printf("Valor do salrio bruto : $%.2f\n", salario);
		/*Fim do codigo*/
        system("pause");
        return 0;
	}