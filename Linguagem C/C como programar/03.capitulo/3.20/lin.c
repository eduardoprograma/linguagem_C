/*
 ============================================================================
 Name			: exercicio_3.20
 Author      	: Eduardo Felizardo
 Creation date 	: 03/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_3 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
3.20 	Calculadora de juros. Os juros simples sobre um empréstimo são calcu-
lados a partir da fórmula juros = principal * taxa * dias / 365; Essa fórmula 
considera que taxa seja a taxa de juros anual e, portanto, inclui a divisão 
por 365 (dias). Desenvolva um programa que aceite principal, taxa e dias para 
vários empréstimos, calcule e apresente os juros simples para cada empréstimo, 
usando a fórmula apresentada. Veja um exemplo do diálogo de entrada/saída: 
	Informe o valor principal do empréstimo (-1 para terminar): 1.000,00 
	Informe a taxa de juros: 0,1 
	Informe o prazo do empréstimo em dias: 365 
	O valor dos juros é de R$100,00
 ============================================================================
*/ 
/*Solução do exercício 3.20 */
#include<stdio.h>
/*inicio da função main */
int main()
{
	/* declaração de variáveis */
	double principal;
	double taxa;
	double interesse;
	int prazo;

	/* entrada de dados */
	printf("Informe o valor principal do emprestimo: R$");
	scanf("%lf", &principal);

	/* looping para calculo quantas vezes forem necessário */
	while(principal != -1)
	{
		printf("Informe a taxa de juros: ");
		scanf("%lf", &taxa);

		printf("Informe o prazo do emprestimo em dias: ");
		scanf("%d", &prazo);

		interesse = principal * taxa * prazo / 365.0;
		printf("O valor dos juros e de R$%.2f\n\n", interesse);

		/* novo calculo */
		printf("Informe o valor principal do emprestimo (-1 para terminar): R$");
		scanf("%lf", &principal);
	}

	return 0;		//programa realizado com sucesso.
}
/* fim da função main */
