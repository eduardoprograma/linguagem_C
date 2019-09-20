//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.8	Escreva um programa em C que use as instruções do Exercício 3.7 para calcular x elevado à potência y. O programa deverá ter uma estrutura de controle de repetição while. */

/* eleva x à potência y */ 
#include <stdio.h> 

int main( void ) 
{ 
	int x, y, i, potencia; /* declara variáveis */
	i = 1; /* inicializa i */ 	
	potencia = 1; /* inicializa potência */

	printf("Digite um numero: ");
	scanf( "%d", &x ); /* lê do usuário o valor para x */
	printf("Digite um numero: ");
	scanf( 	"%d", &y ); /* lê do usuário o valor para y */

	while ( i <= y ) 
	{ /* loop while i é menor ou igual a y */
		potencia *= x; /* multiplica potência por x */
		++i; /* incrementa i */
	} /* fim do while */ 
	printf( "%d", potencia ); /* exibe potência */ 
	return 0; 
} /* fim da função main */			