/*
 ============================================================================
 Name			: exercicio_2.31
 Author      	: Eduardo Felizardo
 Creation date 	: 31/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
 2.31	Tabela de quadrados e cubos. 
	Usando apenas as técnicas que você aprendeu neste capítulo, escreva um 
	programa que calcule os quadrados e os cubos dos números 0 a 10, e use 
	tabulações para imprimir a seguinte tabela de valores:
 ============================================================================
*/
/*
	Também pode ser feito assim usando a biblioteca matematica math.h
	printf("Numero\tQuadrado\tCubo\n");
	printf("%4d\t%4.0f\t%12.0f\n", 0, pow(0, 2), pow(0, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 1, pow(1, 2), pow(1, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 2, pow(2, 2), pow(2, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 3, pow(3, 2), pow(3, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 4, pow(4, 2), pow(4, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 5, pow(5, 2), pow(5, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 6, pow(6, 2), pow(6, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 7, pow(7, 2), pow(7, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 8, pow(8, 2), pow(8, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 9, pow(9, 2), pow(9, 3));
	printf("%4d\t%4.0f\t%12.0f\n", 10, pow(10, 2), pow(10, 3));
*/
/* Solução do exercício 2.31 */
#include <stdio.h>
/* inicio da função main */
int main()
{
	/* declaração de variáveis */
	int contador = 0;		//variável inicializada.

	/* Porcessamento */
	printf("%s\t%s\t%s\t\n", "Numero", "Quadrado", "Cubo");
	printf("%d\t%4d\t%10d\t\n", contador, contador * contador, contador * contador * contador);		//Inicia em 0;

	contador += 1;
	printf("%d\t%4d\t%10d\t\n", contador, contador * contador, contador * contador * contador); 

	contador += 1;
	printf("%d\t%4d\t%10d\t\n", contador, contador * contador, contador * contador * contador);

	contador += 1;
	printf("%d\t%4d\t%10d\t\n", contador, contador * contador, contador * contador * contador);

	contador += 1;
	printf("%d\t%4d\t%10d\t\n", contador, contador * contador, contador * contador * contador);

	contador += 1;
	printf("%d\t%4d\t%10d\t\n", contador, contador * contador, contador * contador * contador);

	contador += 1;
	printf("%d\t%4d\t%10d\t\n", contador, contador * contador, contador * contador * contador);

	contador += 1;
	printf("%d\t%4d\t%10d\t\n", contador, contador * contador, contador * contador * contador);

	contador += 1;
	printf("%d\t%4d\t%10d\t\n", contador, contador * contador, contador * contador * contador);

	contador += 1;
	printf("%d\t%4d\t%10d\t\n", contador, contador * contador, contador * contador * contador);

	contador += 1;
	printf("%d\t%4d\t%10d\t\n", contador, contador * contador, contador * contador * contador);

	return 0;		//Programa executou com sucesso.
} 
/* fim da função main */