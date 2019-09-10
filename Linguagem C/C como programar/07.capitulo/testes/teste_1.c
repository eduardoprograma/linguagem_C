/*
 ============================================================================
 Name			: teste_1.c
 Author      	: Eduardo Felizardo
 Creation date 	: 06/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    teste
 ============================================================================
*/
#include<stdio.h>
/* inicio da função main */
int main()
{
    /* declaração de variáveis */
    int n[5] = {0, 1, 2, 3, 4};/* array do tipo inteira */
    int *nPtr;/* ponteiro */
    nPtr = &n;/*Ponteiro aponta para o endereço da array*/
    int contador;

    /* processamento dos dados */
    for(contador = 0; contador < 5; contador++)
    {
        printf("n[%d] = %d\n", contador, n[contador]);
    }

    /* pponteiro */
    for(contador = 0; contador < 5; contador++)
    {
        printf("*nPtr[%d] = %d\n", contador, nPtr[contador]);
    }

    return 0;/* indica conclusão bem-sucedida */
}
/* fim da função main */