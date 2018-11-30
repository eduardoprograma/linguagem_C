/*Programa que calcula quanto sobra do salario de João*/
#include<stdio.h>
#include<stdlib.h>
main()
	{
		/*Declarar variaveis*/
		float salario, conta, vConta = 0.0, contaTotal = 0.0, sobra;
		/*Entrada de dados*/
		printf("Programa para saer quanto sobra do salario\n\n");
		printf("Digite o salario recebido: $");
		scanf("%f", &salario);
		/*Bloco de comando*/
		while(vConta != -1){
			conta = vConta - (vConta * 0.02);
			contaTotal += conta;
			printf("Digite o valor da conta a ser paga: $");
			scanf("%f", &vConta);
		}
		/*Saida de dados*/
		sobra = salario - contaTotal;
		printf("O salario que vai sobrar ao final e $%.2f\n\n", sobra);
		/*Fim do programa*/
        system("pause");
        return 0;
	}