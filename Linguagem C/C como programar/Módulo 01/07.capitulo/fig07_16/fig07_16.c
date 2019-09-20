/*
 ============================================================================
 Name			: fig07_16
 Author      	: Eduardo Felizardo
 Creation date 	: 06/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    Fig. 07.16: fig07_16.c
    A aplicação do sizeof a um nome de de array retorna
    o número de bytes no array.
 ============================================================================
*/
#include <stdio.h>

size_t getSize(float *ptr);/* protótipo */
/* inicio da função main */
int main()
{
    float array[20];/* cria array */

    printf("o numero de bytes no array e %d\n"
            "O numero de bytes retornados por getSize e %d\n", sizeof(array), getSize(array));
    
    return 0; /* indica conclusão bem-sucedida */
}/* fim da função main */

/* retorna tamanho de ptr */
size_t getSize(float *ptr)
{
    return sizeof(ptr);
}
/* fim da função getSize */