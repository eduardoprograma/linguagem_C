/*
 ============================================================================
 Name			: fig07_12.C
 Author      	: deitel
 Creation date 	: 05/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Tentando modificar dados por meio de um ponteiro não const-
 ante para dados constantes.
 ============================================================================
*/
/*
 ============================================================================

 ============================================================================
*/
/* Fig. 7.12: fig07_12.c 2
Tentando modificar dados por meio de um ponteiro não constante para dados co-
nstantes. */
#include <stdio.h> 

void f( const int *xPtr ); /* protótipo */ 

int main( void ) 
{
    int y; /* define y */
    
    f( &y ); /* f tenta modificação ilegal */ 
    
    return 0; /* indica conclusão bem-sucedida */
} //fim da função main.

/* xPtr não pode ser usado para modificar o valor 17 da variável à qual ele 
aponta */

void f( const int *xPtr ) //como já está sendo dito para ele que é constate não será alterado
{
    *xPtr = 100; /* erro: não pode modificar um objeto const */
} // fim da função main