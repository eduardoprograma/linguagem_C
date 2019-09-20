/*
 ============================================================================
 Name			: exercicio_3.22
 Author      	: Eduardo Felizardo
 Creation date 	: 06/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_3 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
3.22 Pré-incrementando versus pós-incrementando. 
	Escreva um programa que demonstre a diferença entre pré-decrementar e pós
	-decrementar usando o operador de decremento --.
 ============================================================================
*/
/* Solução do exercício 3.22 */
#include <stdio.h>
/* inicio da função main */
int main()
{
	/* declaração de varáveis */
	int c;		//variável inteira usada no decremento.

	c = 5;
	printf("%d\n", c);
	printf("%d\n", --c);
	printf("%d\n", c);

	c = 5;
	printf("%d\n", c);
	printf("%d\n", c--);
	printf("%d\n", c);
	
	return 0; 		//Programa bem-sucedido.
}
/* fim da função main */