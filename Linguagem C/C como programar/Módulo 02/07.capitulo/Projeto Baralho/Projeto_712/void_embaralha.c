/*
 ============================================================================
 Name			: void_embalha.c
 Author      	: Eduardo Felizardo
 Creation date 	: 19/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    Exercício 7.12
    Função embaralha
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/* inicio da função embaralha */
void embaralha(int wbaralho[][13])
{
    int linha;/* número de linha */
    int coluna;/* número de coluna */
    int carta;/* conta carta */

    /* para cada uma das 52 cartas, escolhe slot de deck aleatório */
    for(carta = 1; carta <= 52; carta++)
    {
        /* escolhe novo local aleatório até que novo slot não ocupado seja 
        encontrado */
        do
        {
            linha = rand() % 4;/* gera número aleatório de linha */
            coluna = rand() % 13;/* gera número aleatório de coluna */
        }while(wbaralho[linha][coluna] != 0);/* fim de do/while */

        /* coloca número da carta no slot escolhido do baralho */
        wbaralho[linha][coluna] = carta;
    }/* fim do for */
}
/* fim da função embaralha */