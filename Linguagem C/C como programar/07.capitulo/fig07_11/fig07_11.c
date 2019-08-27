/*
 ============================================================================
 Name			: fig07_10.C
 Author      	: deitel
 Creation date 	: 15/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Convertendo uma string em maiúsculas usando um ponteiro não 
 constante para dados não constantes.
 ============================================================================
*/
/*
 ============================================================================

 ============================================================================
*/

/* Fig. 7.11: fig07_11.c 2
Imprimindo uma string um caractere por vez usando um ponteiro não constante para dados constantes */

#include <stdio.h> 

void printCharacters( const char *sPtr ); /* Protótipo da função */

int main( void )
{ 
    /* inicializa array de char */ 
    char string[] = "imprime caracteres de uma string";
    
    printf( "A string é:\n" ); 
    
    printCharacters( string ); 
    
    printf( "\n" );

    return 0; /* indica conclusão bem-sucedida */
} /* fim do main */ 

/* sPtr não pode modificar o caractere ao qual aponta, 
ou seja, sPtr é um ponteiro “somente de leitura” */

void printCharacters( const char *sPtr )
{ 
    /* loop pela string inteira */
    for ( ; *sPtr != '\0'; sPtr++ ) 
    { 
        /* sem inicialização */ 
        printf( "%c", *sPtr );
    } /* fim do for */
} /* fim da função printCharacters */