//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.32 	Calculadora de Índice de Massa Corporal. Apresentamos a calculadora do índice de massa corporal (IMC) no Exercício 1.11. A fórmula para calcular o IMC é
							IMC= pesoEmQuilos / (alturaEmMetros * alturaEmMetros)
	Crie uma aplicação para a calculadora de IMC que leia o peso do usuário em quilogramas e a altura em metros, e que depois calcule e apresente o seu índice de massa corporal. Além disso, a aplicação deverá exibir as seguintes informações do Ministério da Saúde para que o usuário possa avaliar seu IMC: 

				VALORES DE IMC 
				Abaixo do peso: 			menor que 18,5 
				Normal:						entre 18,5 e 24,9
				Acima do peso: 				entre 25 e 29,9 
				Obeso:					 	30 ou mais*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	float peso  = 0.0, altura = 0.0, IMC = 0;

	/* entrada de dados */
	printf("Calculadora de IMC\n\n");
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("Digite sua altura: ");
	scanf("%f", &altura);

	/* processamento */
	IMC = peso / (altura * altura);
	if(IMC < 18.5)
	{
		printf("Voce esta abaixo do peso.\n");
	}
	if(IMC >= 18.5 && IMC <= 24.9)
	{
		printf("Voce esta no peso Normal.\n");
	}
	if(IMC >= 25 && IMC <= 29.9)
	{
		printf("Voce esta acima do peso.\n");
	}
	if(IMC >= 30)
	{
		printf("Voce esta obeso\n\n");
	}

	/* saída de dados */
	return 0;
}			//fim da função main.