/*
 ============================================================================
 Name			: srpa.c
 Author      	: Eduardo Felizardo C�ndido
 Creation date 	: 02/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Sistema de reservas de passagens a�reas.
 ============================================================================
*/
/*
 ============================================================================
6.21 	Sistema de reservas de passagens a�reas. 
	Uma pequena companhia a�rea acabou de comprar um computador para seu novo 
	sistema automatizado de reservas. O presidente lhe pediu que programasse o 
	novo sistema. Voc� escrever� um programa que atribuir� assentos em cada 
	voo do �nico avi�o da companhia (capacidade: 10 assentos). 
	Seu programa dever� exibir o seguinte menu de alternativas:
		Favor digitar 1 para �primeira classe� 
		Favor digitar 2 para �econ�mica� 
	Se a pessoa digitar 1, ent�o seu programa dever� designar um assento na pri-
	meira classe (assentos de 1 a 5). Se a pessoa digitar 2, ent�o seu programa 
	dever� designar um assento na classe econ�mica (assentos 6 a 10). Seu progr-
	ama dever�, ent�o, imprimir um bilhete de embarque que indique o n�mero do 
	assento da pessoa e a se��o a que esse assento pertence, primeira classe ou 
	classe econ�mica. Use um array de subscrito �nico para representar o quadro 
	de assentos do avi�o. Inicialize todos os elementos do array em 0 para indi-
	car que todos os assentos est�o vazios. � medida que cada assento � designado, 
	defina o elemento correspondente do array como 1, para indicar que o assento 
	n�o est� mais dispon�vel. Seu programa, naturalmente, nunca dever� designar 
	um assento que j� foi reservado a outra pessoa. Quando a primeira classe est-
	iver cheia, seu programa dever� perguntar � pessoa se ela aceita ser colocada 
	na classe econ�mica (e vice-versa). Se a resposta for sim, fa�a a designa��o 
	de assentos apropriada. Se a resposta for n�o, imprima a mensagem �O pr�ximo 
	voo sair� em 3 horas.�
 ============================================================================
*/  
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <locale.h>

#define SIZE 10

int main(void)		//inicio da fun��o main.
{
	/* declara��o das var�veis */
	struct tm *data_hora_atual;	
	int poltronas[SIZE] = {0};
	char nomePassageiro[60];
	int classe;
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
		switch (classe)
		{
			case /* constant-expression */:
				/* code */
				break;
			
			default:
				break;
}
		
	}
	/* sa�da de dados */
	return 0;
}			//fim da fun��o main.
