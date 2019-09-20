/*
 ============================================================================
 Name			: fig07_20.c
 Author      	: Eduardo Felizardo
 Creation date 	: 10/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    Fig. 07.20: fig07_20.c
    usando notações de subscrito e ponteiros com arrays.
 ============================================================================
*/
#include<stdio.h>
/*inicio da função main */
int main()
{
    int b[] = {10, 20, 30, 40};/* inicializa o array */
    int *bPtr = b; /* define bPtr para apontar para array b */
    int i;/* contador */
    int offset; /* contador */

    /* mostra array usando dubscrito de array */
    printf("Array b impresso com:\nNotacao de subscrito de array\n");
    /* loop pelo array */
    for(i = 0; i < 4; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }/* fim de for */

    /* mostra array b usando o nome da array e notação de ponteiro/deslocamento */
    printf("\nNotacao de ponteiro/offset onde\n"
           "o ponteiro e o nome do array.\n");
    
    /* loop for array b */
    for(offset = 0; offset < 4; offset++)
    {
        printf("*(b + %d) = %d\n", offset, *(b + offset));
    }/* fim de for */

    /* mostra array b usando bPtr e notação de subscrito de array */
    printf("\nNotacao de subscrito de ponteiro\n ");

    /* loop pelo array b */
    for(i = 0; i < 4; i++)
    {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);
    } /* fim do for */

    /* mostra array b usando bPtr e notação de ponteiro/deslocamento */
    printf("\nNotacao de ponteiro/deslocamento\n");

    /* loop pelo array b */
    for(offset = 0; offset < 4; offset++)
    {
        printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
    }/* fim de for */

    return 0;/* indicação de operação bem-sucedida */
}
/* fim da função main */