/*
 ============================================================================
 Name			: void_resultaMao.c
 Author      	: Eduardo Felizardo
 Creation date 	: 19/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    7.12 Exercício
    Void resultaMao
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/* função resultaMao imprime o resultado e condições da mão */
void resultaMao(int par, int doisPares, int trinca, int quadra, int contaNaipe, int straight)
{
    if(par == 0)
    {
        printf("Parece que a mao nao esta muito boa.\n");
    }/* fim de if */
    if(par == 1)
    {
        printf("Voce possui um par.\n");
    }/* fim de if */
    if(doisPares == 2)
    {
        printf("Voce possui dois pares.\n");
    }/* fim de if */
    if(trinca == 3)
    {
        printf("Voce possui uma trinca.\n");
    }/* fim de if */
    if(quadra == 4)
    {
        printf("Voce possui uma quadra.\n");
    }/* fim de if */
    if(contaNaipe == 5)
    {
        printf("Voce possui um flush.\n");
    }/* fim de if */
    if((contaNaipe == 5) && (straight == 5))
    {
        printf("E tambem um Straight\n");
    }/* fim de if */
}/* fim de resultaMao */