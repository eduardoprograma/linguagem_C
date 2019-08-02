/*
 ============================================================================
 Name			: srpa.c
 Author      	: Eduardo Felizardo Cândido
 Creation date 	: 02/08/2019
 Version     	: R00
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
	int poltronas[SIZE] = {0};
	char nomePassageiro[60];
	int classe[] ={0};
	char transportadora[] = "AC";
	char bagagem[] = "Y";
	int date[10][10][10] = {{0}};
	char portao[] = "K18";
	int horaEmbarque[10][10][10] = {{0}};
	char numeroVoo[] = "AC 2505";
	int contador;
	int contPoltrona;
	int i;
	int aux_poltrona = 0;
	int contAuxPoltrona = 0;

	for(contador = 0; contador < SIZE; contador++)
	{
		/* entrada de dados */
		escolha_Classe:
		printf("Favor digitar 1 para 'primeira classe'\n");
		printf("Favor digitar 2 para 'economica'\n");
		scanf("%d", &classe);
		escolha:
		/* processamento */
		if(classe == 1)
		{
			printf("Digite o nome do passageiro: ");
			gets(nomePassageiro[60]);
			printf("Poltronas disponiveis.\n");
			for(contPoltrona = 0, i = 0; contPoltrona < 5; contPoltrona++, i++)
			{
				if(poltronas[i] == 0)
				{
					printf("Poltrona disponivel N: %d\n", i + 1);
					contAuxPoltrona++;
				}
				if(contAuxPoltrona == 0)
				{
					printf("Nao existe mais assentos disponiveis neste voo.\n\n");
					printf("Aceita viajar de classe economica?");
					printf("Se sim digite 2. Se preferir aguardar proximo voo.\n Este partira daqui 3 horas. Digite 0\n");
					scanf("%d", &classe);
					if(classe == 2)
					{
						goto escolha;
					}
					else 
					{
						goto escolha_Classe;
					}
				}
			}
			printf("Escolha o numero da poltrona: ");
			scanf("%d", &aux_poltrona);
			poltronas[aux_poltrona] = 1;
			
			printf("Impressao do bilhete de embarque:\n\n");
			printf("%s\t%s\t%s\n\n", "AirCompany", "Bilhete de Embarque", "B.de Embarque");
			printf("%s\t%s\t%s\t%s\t%s%s\n", "Nome do passageiro", "Companhia", "N.Voo", "Classe", ":", "Nome do Passageiro");
			printf("%s\t%s\t%s\t%s\t%s%s\n", nomePassageiro, transportadora, numeroVoo, "A", ":", nomePassageiro);
		}
		else
		{
			printf("Digite o nome do passageiro: ");
			gets(nomePassageiro);
			printf("Poltronas disponiveis.\n");
			for(contPoltrona = 5, i = 0; contPoltrona < 10; contPoltrona++, i++)
			{
				if(poltronas[i] == 0)
				{
					printf("Poltrona disponivel N: %d\n", i + 1);
					contAuxPoltrona++;
				}
				if(contAuxPoltrona == 0)
				{
					printf("Nao existe mais assentos disponiveis neste voo.\n\n");
					printf("Aceita viajar de Primeira Classe?");
					printf("Se sim digite 1. Se preferir aguardar proximo voo.\n Este partira daqui 3 horas. Digite 0\n");
					scanf("%d", &classe);
					if(classe == 1)
					{
						goto escolha;
					}
					else 
					{
						goto escolha_Classe;
					}
				}
			}
			printf("Escolha o numero da poltrona: ");
			scanf("%d", &aux_poltrona);
			poltronas[aux_poltrona] = 1;
			
			printf("Impressao do bilhete de embarque:\n\n");
			printf("%s\t%s\t%s\n\n", "AirCompany", "Bilhete de Embarque", "B.de Embarque");
			printf("%s\t%s\t%s\t%s\t%s%s\n", "Nome do passageiro", "Companhia", "N.Voo", "Classe", ":", "Nome do Passageiro");
			printf("%s\t%s\t%s\t%s\t%s%s\n", nomePassageiro, transportadora, numeroVoo, "A", ":", nomePassageiro);
		}
	}
	/* saída de dados */
	return 0;
}			//fim da função main.