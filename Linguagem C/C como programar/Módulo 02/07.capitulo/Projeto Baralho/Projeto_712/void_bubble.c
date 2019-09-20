/*
 ============================================================================
 Name			: void_bubble.c
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
    void bubble
 ============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/* bubble sorte de mútipla finalidade; parâmentro compare é um ponteiro
   para a função de comparação que determina a classificação */
void bubble(int work[], const int size, int (*compare)(int a, int b))
{
    int passada;/* contador de passadas */
    int contador;/* contador de comparação */

    /* Chama a função swap */
    void swap(int *elemento1Ptr, int *elemento2Ptr);/* Protótotipo */

    /* loop das passadas */
    for(passada =1; passada < size; passada++)
    {
        /* loop de comparaç~es de passada */
        for(contador = 0; contador < size; contador++)
        {
            /* se elementos estão fora de ordem inverta-os */
            if((*compare)(work[contador, work[contador + 1]]))
            {
                swap(&work[contador], &work[contador + 1]);
            }/* fim de if */
        }/* fim de for */
    }/* fim de for */
}/* fim da função bubble */