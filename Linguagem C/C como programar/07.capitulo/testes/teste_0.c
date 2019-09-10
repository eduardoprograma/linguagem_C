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
#include<stdio.h>
/* inicio da função main */
int main()
{
    int variavel;
    int *variavelPtr;
    
    printf("endereco variavel = %d\nendereco ponteiro = %d\n", &variavel/*O endereço da minha variável */, variavelPtr/*O endereço do meu ponteiro */);

    variavel = 10;
    printf("Valor da variavel = %d\nValor do ponteiro = %d\n", variavel, *variavelPtr);

    variavelPtr = &variavel;
    
    printf("Depois que foram feitas as alteracoes:\n\n");
    printf("endereco variavel = %d\nendereco ponteiro = %d\n", &variavel, variavelPtr);
    printf("Valor da variavel = %d\nValor do ponteiro = %d\n", variavel, *variavelPtr);

    return 0;
}
/* fim da função main */