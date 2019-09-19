/*
 ============================================================================
 Name			: void_distribui.c
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
    Função distribui
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/* inicio da função distribui */
void distribui(const int wbaralho[][13], const char *wFace[], const char *wNaipes[])
{
    /* declaração de varáveis */
    int carta;/* contador de cartas */
    int linha;/* contador de linhas */
    int coluna;/* contador de coluna */

    /* distribui cada uma das 52 cartas */
    for(carta = 1; carta <= 52; carta++)
    {
        /* loop pelas linhas de wbaralho */
        for(linha = 0; linha <= 3; linha++)
        {
            /* loop pelas colunas do wbaralho para linha atual */
            for(coluna = 0; coluna <= 12; coluna++)
            {
                if(wbaralho[linha][coluna] == carta)
                {
                    printf("%-5s de %-5s%c", wFace[coluna], wNaipes[linha], carta %5 == 0 ? '\n' : '\t');
                }/* fim de if */
            }/* fim de for */
        }/* fim de for */
    }/* fim de for */
}
/* fim da função distrubui */