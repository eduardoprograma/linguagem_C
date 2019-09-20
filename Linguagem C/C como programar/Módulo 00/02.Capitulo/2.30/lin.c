/*
 ============================================================================
 Name			: exercicio_2.30
 Author      	: Eduardo Felizardo
 Creation date 	: 31/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
 2.30	Separando dígitos em um inteiro. 
	Escreva um programa que leia um número de cinco dígitos, separe o número 
	em dígitos individuais e imprima os dígitos separados um do outro por 
	três espaços cada um. [Dica: use combinações da divisão inteira e da ope-
	ração módulo.] Por exemplo, se o usuário digitar 42139, o programa deverá 
	exibir 4 2 1 3 9.
 ============================================================================
*/
/*
 ============================================================================
 pode ser feito assim...
	num5 = numero / 10000;
	num4 = (numero % 10000) / 1000;
	num3 = ((numero % 10000) % 1000) / 100;
	num2 = (((numero % 10000) % 1000) % 100) / 10;
	num1 = ((((numero % 10000) % 1000) % 100) % 10);
 ============================================================================
 */
/* Solução do exercício 2.30 */
#include <stdio.h>

/* inicio da função main */
int main()
{
	/* declaração de variáveis */
	int numero;
	int temp1;
	int temp2;

	/* entrada de dados */
	printf("Digite um numero inteiro com ate 5 digitos: ");		//Entrada
	scanf("%d", &numero);

	/* processamento e saída de dados */
	printf("%d\t", numero / 10000);
	temp2 = numero % 10000;

	printf("%d\t", temp2 / 1000);
	temp1 = temp2 % 1000;

	printf("%d\t", temp1 / 100);
	temp2 = temp1 % 100;

	printf("%d\t", temp2 / 10);
	temp1 = temp2 % 10;
	
	printf("%d\n", temp1);

	return 0;		//programa executou com sucesso.
}
/* fim da função main */