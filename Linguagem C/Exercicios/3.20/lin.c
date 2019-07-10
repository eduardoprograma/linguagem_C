//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.20 	Calculadora de juros. Os juros simples sobre um empréstimo são calculados a partir da fórmula juros = principal * taxa * dias / 365; Essa fórmula considera que taxa seja a taxa de juros anual e, portanto, inclui a divisão por 365 (dias). Desenvolva um programa que aceite principal, taxa e dias para vários empréstimos, calcule e apresente os juros simples para cada empréstimo, usando a fórmula apresentada. Veja um exemplo do diálogo de entrada/saída: 
	Informe o valor principal do empréstimo (-1 para terminar): 1.000,00 
	Informe a taxa de juros: 0,1 
	Informe o prazo do empréstimo em dias: 365 
	O valor dos juros é de R$100,00*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	float Valor_Principal_Emprestimo = 0.0, Taxa_Juros = 0.0, Prazo_Emprestimo = 0.0, Valor_Juros = 0.0;

	/* entrada de dados */
	printf("Informe o valor principal do emprestimo: ");		//informa o valor do empréstimo
	scanf("%f", &Valor_Principal_Emprestimo);

	/* processamento */
	while (Valor_Principal_Emprestimo != -1)
	{
		printf("Informe a taxa de juros: ");			//informa a taxa de juros
		scanf("%f", &Taxa_Juros);
		printf("Informe o prazo do emprestimo em dias: ");		//informa o prazo em dias do emprestimo
		scanf("%f", &Prazo_Emprestimo);
		Valor_Juros = Valor_Principal_Emprestimo * Taxa_Juros * Prazo_Emprestimo / 365;
		printf("O valor dos juros e de R$%.2f\n\n", Valor_Juros);			//mostra o valor do juros 
		printf("Informe o valor principal do emprestimo (-1 para terminar): ");
		scanf("%f", &Valor_Principal_Emprestimo);
	}
	
	/* saída de dados */
}			//fim da função main.