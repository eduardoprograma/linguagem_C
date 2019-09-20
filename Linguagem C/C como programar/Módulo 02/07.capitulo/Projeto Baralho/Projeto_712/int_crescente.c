/*
 ============================================================================
 Name			: int_crescente.c
 Author      	: Eduardo Felizardo
 Creation date 	: 19/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_3 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    7.12 Exercício
    int crescente
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/* determina se os elemento estão fora de ordem para uma ordem
    de classificação crescente */
int crescente(int a, int b)
{
    int manutecao;/* variável temporarria */

    return b < a;/* troca se b for maior que a */
}/* fim da função crescente */