/*
 ============================================================================
 Name			: void_ordem.c
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
    Função ordem
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/* inicio da função ordem */
void ordem(const int wbaralho[][13], const char *wFace[], const char *wNaipes[])
{
    int carta;/* contador de cartas */
    int linha;/* contador de linhas */
    int coluna;/* contador de colunas */
    const char *face[5];/* ponteiro auxiliar */
    const char *naipe[5];/* ponteiro auxiliar */
    int contador = 0;/* contador auxliar */

    /* distribui cada uma das 52 cartas */
    for(carta = 1; carta <= 52; carta++)
    {
        /* loop pelas colunas de wbaralho para linha atual */
        for(linha = 0; linha <= 3; linha++)
        {
            /* loop pelas linhas do baralho */
            for(coluna = 0; coluna <= 12; coluna++)
            {
                /* se slot contém cartão atual, mostra carta */
                if(wbaralho[linha][coluna] == carta)
                {
                    face[contador] = wFace[coluna];
                    naipe[contador] = wNaipes[linha];
                    contador++;
                }/* fim do if */
            }/* fim de for */
        }/* fim de for */
    }/* fim de for */
    if(carta == 5)
    {
        //mao(face, naipe);
    }/* fim de if */
}
/* fim da função ordem */