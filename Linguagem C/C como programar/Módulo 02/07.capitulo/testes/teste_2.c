/*
 ============================================================================
 Name			: exercicio_X.XX
 Author      	: Eduardo Felizardo
 Creation date 	: 06/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_3 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================

 ============================================================================
*/

#include <stdio.h>
#include <string.h>//necessário para strcmp
int main (void)
{
    char str1[4] = "abc";
    char str2[4] = "abf";
    int retorno;
    
    retorno = strcmp(str1, str2);
    printf("retorno = %d\n", retorno);
    //mostra o retorno da função strcmp  
    
    return 0;
}