//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.19 	Calculando vendas. 
	Um varejista on-line vende cinco produtos diferentes cujos preços de revenda aparecem na tabela a seguir: 
	Número do produto		Preço de revenda 
		1							R$ 2,98 
		2							R$ 4,50 
		3							R$ 9,98 
		4							R$ 4,49 
		5							R$ 6,87
	Escreva um programa que leia uma série de pares de números da seguinte forma:
		a) Número do produto. 
		b) Quantidade vendida durante um dia. 
	Seu programa deverá usar uma estrutura switch para ajudar a determinar o preço de revenda para cada produto. O programa deverá calcular e exibir o valor de revenda total de todos os produtos vendidos na semana anterior.*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int Numero_Produto = 0, NP1 = 0, NP2 = 0, NP3 = 0, NP4 = 0, NP5 = 0;
	int NPT1 = 0, NPT2 = 0, NPT3 = 0, NPT4 = 0, NPT5 = 0;
	float Preco_Revenda = 0, Preco_Revenda1 = 0, Preco_Revenda2 = 0, Preco_Revenda3 = 0, Preco_Revenda4 = 0, Preco_Revenda5 = 0;
	float soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0,  soma5 = 0, somaTotal = 0;

	/* entrada de dados */
	printf("Digite o numero do produto: ");
	scanf("%d", &Numero_Produto);

	while (Numero_Produto != -1)
	{
		/* processamento */
		switch (Numero_Produto)
		{
		case 1:
			printf("Digite a quantidade vendida: ");
			scanf("%d", &NP1);
			Preco_Revenda1 = 2.98;
			NPT1 += NP1;
			soma1 += Preco_Revenda1 * NP1;
			break;
		case 2:
			printf("Digite a quantidade vendida: ");
			scanf("%d", &NP2);
			Preco_Revenda2 = 4.50;
			NPT2 += NP2;
			soma2 += Preco_Revenda2 * NP2;
			break;
		case 3:
			printf("Digite a quantidade vendida: ");
			scanf("%d", &NP3);
			Preco_Revenda3 = 9.98;
			NPT3 += NP3;
			soma3 += Preco_Revenda3 * NP3;
			break;
		case 4:
			printf("Digite a quantidade vendida: ");
			scanf("%d", &NP4);
			Preco_Revenda4 = 4.49;
			NPT4 += NP4;
			soma4 += Preco_Revenda4 * NP4;
			break;
		case 5:
			printf("Digite a quantidade vendida: ");
			scanf("%d", &NP5);
			Preco_Revenda5 = 6.87;
			NPT5 += NP5;
			soma5 += Preco_Revenda5 * NP5;
			break;
		default:
			printf("Digite um numero entre 1 e 5 e nao: %d", Numero_Produto);
			break;
		}
		printf("Digite o numero do produto (-1 para encerrar): ");
		scanf("%d", &Numero_Produto);
	}	
	/* saída de dados */
	printf("\n");
	somaTotal = soma1 + soma2 + soma3 + soma4 + soma5;
	printf("%s\t%s\t%s\t%s\n", "Produto", "Valor Unit.", "Quant.Vend.", "Total");
	printf("%4d\t%4s%.2f\t%6d\t%10s%.2f\n", 1, "R$",Preco_Revenda1, NPT1, "R$", soma1);
	printf("%4d\t%4s%.2f\t%6d\t%10s%.2f\n", 2, "R$",Preco_Revenda2, NPT2, "R$",soma2);
	printf("%4d\t%4s%.2f\t%6d\t%10s%.2f\n", 3, "R$",Preco_Revenda3, NPT3, "R$",soma3);
	printf("%4d\t%4s%.2f\t%6d\t%10s%.2f\n", 4, "R$",Preco_Revenda4, NPT4, "R$",soma4);
	printf("%4d\t%4s%.2f\t%6d\t%10s%.2f\n", 5, "R$",Preco_Revenda5, NPT5, "R$",soma5);
	printf("%35s\t%s%.2f\n", "TOTAL", "R$",somaTotal);
}			//fim da função main.