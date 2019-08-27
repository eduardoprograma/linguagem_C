/*
 ============================================================================
 Name			: exercicio_2.16
 Author      	: deitel - C Como programar
 Creation date 	: 15/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2
 ============================================================================
*/
/*
 ============================================================================
 2.16	Aritmética. Escreva um programa que peça ao usuário que digite dois 
 números, obtenha esses números e imprima a soma, o produto, a diferença, o 
 quociente e o módulo (resto da divisão)
 ============================================================================
*/
#include <stdio.h>

/* Inicio da função main */
int main()
{
	/* declaração de variáveis */
	int num1;
	int num2;
	int produto;
	int soma;
	int diferenca;
	int quociente;
	int modulo;

	/* entrada de dados */
	printf("Digite dois numeros inteiros: ");
	scanf("%d%d", &num1, &num2);

	/* Processamento dos dados */
	soma = num1 + num2;
	produto = num1 * num2;
	diferenca = num1 - num2;
	quociente = num1 / num2;
	modulo = num1 % num2;

	/* saída dos dados */
	printf("A soma e %d.\n", soma);
	printf("O produto e %d.\n", produto);
	printf("A diferenca e %d.\n", diferenca);
	printf("O quociente e %d.\n", quociente);
	printf("O modulo e %d.\n\n", modulo);

	return 0;		//Se chegar até aqui o programa foi um suscesso.
}
/* Fim da função main */

