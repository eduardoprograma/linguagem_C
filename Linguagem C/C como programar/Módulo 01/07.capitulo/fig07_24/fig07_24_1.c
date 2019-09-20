/*
 ============================================================================
 Name			: fig07_24.c
 Author      	: Eduardo Felizardo
 Creation date 	: 11/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    Fig. 07.24: fig07_24.c
    Programa de embaralhamento e didtribuição de cartas.
 ============================================================================
*/
/* Bibliotecas de cabeçalho */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/* fim Bibliotecas de cabeçalho */

/* Inicio protótipos de funções */
void embaralha(int wbaralho[][13]);
void distribui(const int wbaralho[][13], const char *wFace[], const char *wNaipe[]);
/* fim protótipo de funções */

/* inicio da função main */
int main(void)
{
    /* inicializa o array */
    const char *naipe[4] = {"Copas", "Ouros", "Paus", "Espadas"};

    /* inicializa array naipe */
    const char *face[13] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Reis"};

    /* innicializa o array baralho */
    int baralho[4][13] = {0};

    /* gerador de números aleatórios */
    srand(time(0));

    /* embaralha */
    embaralha(baralho);

    /* distribui as cartas do baralho */
    distribui(baralho, face, naipe);

    return 0; // indica conclusão bem sucedida.
}
/* fim da função main */

/* função embaralha as cartas */
void embaralha(int wbaralho[][13])
{
    int linha;/* numero de linha */
    int coluna;/* número de coluna */
    int carta;/* contador */

    /* para cada uma das 52 cartas, escolhe slot de deck aleatóriamente */
    for(carta = 1; carta <= 52; carta++)
    {
        /* escolhe novo local aleatório até que novo slot não ocupado seja encontrado */
        do
        {
            linha = rand() % 4;
            coluna = rand() % 13;
        }while(wbaralho[linha][coluna] != 0);/* fim do do...while */

        /* coloca número da carta no slot escolhido do baralho */
        wbaralho[linha][coluna] = carta;
    }/* fim do for */
}
/* fim da função ebaralha as cartas */

/* inicio da função distribui as cartas */
void distribui(const int wbaralho[][13], const char *wFace[], const char *wNaipe[])
{
    int carta;/* contador de cartas */
    int linha;/* contador de linha */
    int coluna;/* contador de coluna */

    /* distribui cada uma das 52 cartas */
    for(carta = 1; carta <= 52; carta++)
    {
        /* loop pelas linhas de wbaralho */
        for(linha = 0; linha <=3; linha++)
        {
            /* loop pelas colunas de wbaralho para linha atual */
            for(coluna = 0; coluna <= 12; coluna++)
            {
                /* se slot contém cartão atual, mostra carta */
                if(wbaralho[linha][coluna] == carta)
                {
                    printf("%5s de %-8s%c", wFace[coluna], wNaipe[linha], carta % 2 == 0 ? '\n' : '\t');
                }/* fim do if */
            }/* fim do for */
        }/* fim do for */
    }/* fim do for */
}
/* fim da função distribui as cartas */