/*
 ============================================================================
 Name			: exercicio_3.20
 Author      	: Eduardo Felizardo
 Creation date 	: 06/09/2019
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
/* Solução do exercício 3.20 */
#include<stdio.h>

/* inicio da função main */
int main()
{
	double principal;		//valor de emprétimo principal
	double taxa;		//taxa de juros
	double juros;		//Cobrança do juros
	int prazo;		//Medido em dias

	/* obtenha o valor principal */
	printf("Digite o valor principal do emprestimo: ");
	scanf("%lf", &principal);

	/* loop até que o valor da sentinela seja digitado pelo usuário */
	while(principal != -1)
	{
		printf("Digite a taxa de juros: ");		//obtenha a taxa
		scanf("%lf", &taxa);

		printf("Digite o prazo do emprestimo em dias: ");		//Obtenha o prazo em dias
		scanf("%d", &prazo);

		/* Calcular taxa de juro */
		juros = principal * taxa * prazo / 365.0;
		printf("A taxa de juros e de R$%.2f\n\n", juros);

		/* obtenha o principal do proximo emprestimo */
		printf("Digite o valor principal do emprestimo (-1 para encerrar): ");
		scanf("%lf", &principal);
	} //termino de while

	return 0;		//Indica o encerramento bem-sucedido.
}
/* fim da função main */
