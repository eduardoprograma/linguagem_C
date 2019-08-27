//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.30	Separando dígitos em um inteiro. 
	Escreva um programa que leia um número de cinco dígitos, separe o número em dígitos individuais e imprima os dígitos separados um do outro por três espaços cada um. [Dica: use combinações da divisão inteira e da operação módulo.] Por exemplo, se o usuário digitar 42139, o programa deverá exibir */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int numero = 0;
	int num1, num2, num3, num4, num5;

	/* entrada de dados */
	printf("Digite um numero inteiro de 5 digitos: ");
	scanf("%d", &numero);

	/* processamento */
	num5 = numero / 10000;
	num4 = (numero % 10000) / 1000;
	num3 = ((numero % 10000) % 1000) / 100;
	num2 = (((numero % 10000) % 1000) % 100) / 10;
	num1 = ((((numero % 10000) % 1000) % 100) % 10);
	/* saída de dados */
	printf("%d %d %d %d %d\n", num5, num4, num3, num2, num1);
	
	return 0;
}			//fim da função main.