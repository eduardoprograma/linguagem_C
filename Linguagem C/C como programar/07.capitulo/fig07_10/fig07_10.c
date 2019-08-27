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
/* Fig. 7.10: fig07_10.c 
Convertendo uma string em maiúsculas usando um ponteiro não constante para dados não constantes */
#include <stdio.h> 
#include <ctype.h> 

void convertToUppercase( char *sPtr ); /* protótipo */

int main( void ) 
{ 
    char string[] = "caracteres e R$32,98";     /* inicializa array de char */
    
    printf( "A string antes da conversão é: %s", string ); 
    
    convertToUppercase( string );
    
    printf( "\nA string após a conversão é: %s\n", string ); 
    
    return 0;       /* indica conclusão bem-sucedida */
} /* fim do main */

/* converte string em letras maiúsculas */ 

void convertToUppercase( char *sPtr )
{ 
    while ( *sPtr != '\0' ) 
    { 
        /* caractere atual não é '0' */
        if ( islower( *sPtr ) ) 
        { 
            /* se o caractere é minúsculo, */ 
            *sPtr = toupper( *sPtr );       /* converte em maiúsculas */
        } /* fim do if */
        
        ++sPtr;         /* desloca sPtr para o caracter seguinte */ 
    } /* fim do while */
} /* fim da função convertToUppercase */