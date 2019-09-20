/*
 ============================================================================
 Name			: vooid_swap.c
 Author      	: Eduardo Felizardo
 Creation date 	: 19/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================

 ============================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/* troca os locais de memória aoa quais element1Ptr e 
element22Ptr apntam */
void swap(int *element1Ptr, int *element2Ptr)
{
    int manutecao;/* variável temporarria */

    manutecao  = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = manutecao;
}/* fim da função swap */