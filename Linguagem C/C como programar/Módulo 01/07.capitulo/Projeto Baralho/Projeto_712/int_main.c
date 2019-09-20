/*
 ============================================================================
 Name			: int_main.c
 Author      	: Eduardo Felizardo
 Creation date 	: 18/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    Exercício 7.12
    Função main
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
/* inicio da função main */
int main()
{
    /* inicializa array Naipes */
    const char *naipe[4] = {"Copas", "Ouros", "Paus", "Espadas"};

    /* inicializa array face dos naipes */
    const char *face[13] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Reis"};

    /* inicialização o array baralho */
    int baralho[4][13] = {0};

    /* gerador de números aleatórios */
    srand(time(0));

    /* distribui as cartas do baralho */
    //distribui(baralho, face, naipes);

    /* coloca as cartas em ordem */
    //ordem(baralho, face, naipe);

    return 0; /* indica conclusão bem sucedidad */
}
/* fim da função main */
