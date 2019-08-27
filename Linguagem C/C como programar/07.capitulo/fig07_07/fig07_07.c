/*
 ============================================================================
 Name			: fig07_07.C
 Author      	: deitel
 Creation date 	: 05/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Usando os operadores & e *.
 ============================================================================
*/
/*
 ============================================================================

 ============================================================================
*/
/* Fig. 7.7: fig07_07.c 2
Calcula o cubo de uma variável usando chamada por referência com argumento ponteiro */ 
#include <stdio.h>

void cubeByReference( int *nPtr ); /* protótipo */

int main( void )
{
    int number = 5; /* inicializa número */ 
    
    printf( "O valor original do número é %d", number );
    
    /* passa endereço do número a cubeByReference */ 
    cubeByReference( &number );
    
    printf( "\nO novo valor do número é %d\n", number ); 
    
    return 0; /* indica conclusão bem-sucedida */
} /* fim de main */

/* calcula cubo de *nPtr; modifica variável number em main */ 
void cubeByReference( int *nPtr )
{
    *nPtr = *nPtr * *nPtr * *nPtr; /* cubo de *nPtr */
}   /* fim da função cubeByReference */