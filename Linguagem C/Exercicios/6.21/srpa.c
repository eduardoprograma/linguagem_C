/*
 ============================================================================
 Name			: srpa.c
 Author      	: Eduardo Felizardo Cândido
 Creation date 	: 02/08/2019
 Version     	: R01
 Copyright   	: programacaoedu@gmail.com
 Description 	: Sistema de reservas de passagens aéreas.
 ============================================================================
*/
/*
 ============================================================================
6.21 	Sistema de reservas de passagens aéreas. 
	Uma pequena companhia aérea acabou de comprar um computador para seu novo 
	sistema automatizado de reservas. O presidente lhe pediu que programasse o 
	novo sistema. Você escreverá um programa que atribuirá assentos em cada 
	voo do único avião da companhia (capacidade: 10 assentos). 
	Seu programa deverá exibir o seguinte menu de alternativas:
		Favor digitar 1 para “primeira classe” 
		Favor digitar 2 para “econômica” 
	Se a pessoa digitar 1, então seu programa deverá designar um assento na pri-
	meira classe (assentos de 1 a 5). Se a pessoa digitar 2, então seu programa 
	deverá designar um assento na classe econômica (assentos 6 a 10). Seu progr-
	ama deverá, então, imprimir um bilhete de embarque que indique o número do 
	assento da pessoa e a seção a que esse assento pertence, primeira classe ou 
	classe econômica. Use um array de subscrito único para representar o quadro 
	de assentos do avião. Inicialize todos os elementos do array em 0 para indi-
	car que todos os assentos estão vazios. À medida que cada assento é designado, 
	defina o elemento correspondente do array como 1, para indicar que o assento 
	não está mais disponível. Seu programa, naturalmente, nunca deverá designar 
	um assento que já foi reservado a outra pessoa. Quando a primeira classe est-
	iver cheia, seu programa deverá perguntar à pessoa se ela aceita ser colocada 
	na classe econômica (e vice-versa). Se a resposta for sim, faça a designação 
	de assentos apropriada. Se a resposta for não, imprima a mensagem “O próximo 
	voo sairá em 3 horas.”
 ============================================================================
*/  
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <locale.h>

#define SIZE 10

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	struct tm *data_hora_atual;	
	char NomePassageiro[60];
	int NumeroPoltrona[SIZE] = {0};
	int ControleVoo;
	int ControlePoltrona;
	int auxControlPoltrona = 0;
	int PoltronaEscolhido = 0;
	int classe = 0;
	int contPolt = 0;

	for(ControleVoo = 0; ControleVoo < SIZE; ControleVoo++)
	{
		/* Entrada de dados. */
		classes:
		printf("Favor digitar 1 para primeira classe.\n");
		printf("Favor digitar 2 para classe economica.\n");
		printf("Digite a opcao: ");
		scanf("%d", &classe);
		escolha:

		/* Processamento */
		switch (classe)
		{
		case 1:
			printf("Nome do passageiro: ");
			scanf("%s", NomePassageiro);
			printf("Acentos disponiveis.\n");
			for(ControlePoltrona = 0; ControlePoltrona < 5; ControlePoltrona++)
			{
				if(NumeroPoltrona[ControlePoltrona] == 0)
				{
					printf("Numero de acento disponivel %d.\n", ControlePoltrona + 1);
					contPolt++;
				}
			}
			if(contPolt == 0)
			{
				printf("Infelizmente não possuimos mais lugares na primeira classe.\n");
				printf("Gostaria de viajar na classe economica? Ou aguardar o proximo voo daqui a 3 horas?");
				printf("Para aguardar proximo voo digite 0.\nPara voar na classe economica digite 2.\n");
				scanf("%d", &classe);
				if(classe == 2)
				{
					goto escolha;
				}
				else
				{
					goto classes;
				}
			}
			contPolt = 0;
			printf("Caso 1\n");
			printf("Escolha um acento: ");
			scanf("%d", &auxControlPoltrona);
			PoltronaEscolhido = auxControlPoltrona - 1;
			NumeroPoltrona[PoltronaEscolhido] = 1;
			break;
		
		case 2:
			printf("Nome do passageiro: ");
			scanf("%s", NomePassageiro);
			printf("Acentos disponiveis.\n");
			for(ControlePoltrona = 5; ControlePoltrona < SIZE; ControlePoltrona++)
			{
				if(NumeroPoltrona[ControlePoltrona] == 0)
				{
					printf("Numero de acento disponivel %d.\n", ControlePoltrona + 1);
				}
			}
			if(contPolt == 0)
			{
				printf("Infelizmente não possuimos mais lugares na primeira classe.\n");
				printf("Gostaria de viajar na classe economica? Ou aguardar o proximo voo daqui a 3 horas?");
				printf("Para aguardar proximo voo digite 0.\nPara voar na classe economica digite 2.\n");
				scanf("%d", &classe);
				if(classe == 2)
				{
					goto escolha;
				}
				else
				{
					goto classes;
				}
			}
			contPolt = 0;
			printf("Caso 2\n");
			printf("Escolha um acento: ");
			scanf("%d", &auxControlPoltrona);
			PoltronaEscolhido = auxControlPoltrona - 1;
			NumeroPoltrona[PoltronaEscolhido] = 1;
			break;

		default:
			break;
		}
		printf("\n\n");
		printf("%s\t%s\t%28s%s\t\n", "AirCompany", "Bilhete de Embarque", ":", "B.de Embarq.");
		printf("%s\t%10s\t%s\t%s\t%s%5s\t\n", "Nome do Passageiro", "Companhia", "N.Voo", "Classe", ":", "Nome do passageiro");
		printf("%s\t%22s\t%5s\t%10s\t%s%5s\t\n", NomePassageiro, "GOL", "2505", "Classe", ":", NomePassageiro);
	}
	return 0;
}			//fim da função main.