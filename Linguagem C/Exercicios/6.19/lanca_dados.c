/*
 ============================================================================
 Name			: linc.c
 Author      	: Eduardo Felizardo Cândido
 Creation date 	: 01/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: lança dados
 ============================================================================
*/
/*
 ============================================================================
 6.19 	Lançando dados. 
	Escreva um programa que simule o lançamento de dois dados. O programa de-
	verá usar rand para lançar o primeiro dado, e deverá usar rand novamente 
	para lançar o segundo dado. Em seguida, a soma dos dois valores deverá 
	ser calculada. [Nota: como cada dado pode mostrar um valor inteiro de 1 a 
	6, então, a soma dos dois valores variará de 2 a 12, com 7 sendo o resul-
	tado mais frequente; e 2 e 12, os resultados menos frequentes.] A Figura 
	6.23 mostra as 36 combinações possíveis dos dois dados. Seu programa dev-
	erá lançar os dois dados 36.000 vezes. Use um array de subscrito único 
	para contar o número de vezes em que cada resultado possível aparece. Im-
	prima os resultados em um formato tabular. Além disso, determine se os 
	resultados são razoáveis; ou seja, existem seis maneiras de somar um 7, 
	de modo que um sexto de todas as jogadas, aproximadamente, deverá ser 7.
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 12
int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int face1 = 0; 			/* valor aleatório de 1 - 6 do dado */
	int face2 = 0; 			/* valor aleatório de 1 - 6 do dado */
	int somaFace = 0;		/* valor soma das faces */ 
	int roll; 			/* contador de lançamentos de 1-36000 */ 
	int frequencyFace[6][6] = { 0 }; 			/* limpa contadores */
	int frequency[ SIZE ] = { 0 }; 			/* limpa contadores */

	srand( time( NULL ) ); 			/* semente do gerador de números aleatórios */

	/* 1º processamento do jogos de dados */
	for(roll = 0; roll < 36; roll++)
	{
		face1 = 1 + rand() % 6;
		face2 = 1 + rand() % 6;
		somaFace = face1 + face2;
		++frequencyFace[face1][face2];
		++frequency[somaFace];
	}

	/* 2º processamento do jogos de dados */
	for ( somaFace = 1; somaFace <= SIZE; somaFace++ ) 
	{ 
		printf( "%4d%17d\n", somaFace, frequency[ somaFace ] ); 
	} /* fim do for */
	for(face1 = 1; face1 <= 6; face1++)
	{
		for(face2 = 1; face2 <= 6; face2++)
		{
			printf("%d\t", frequencyFace[face1][face2]);
		}
		printf("\n");
	}
	/* saída de dados */
	return 0;
}			//fim da função main.