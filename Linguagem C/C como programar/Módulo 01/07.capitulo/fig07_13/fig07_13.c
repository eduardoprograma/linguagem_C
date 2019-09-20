/*
 ============================================================================
 Name			: fig07_13.C
 Author      	: deitel
 Creation date 	: 05/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Tentando modificar um ponteiro constante para dados não co-
 nstantes.
 ============================================================================
*/
/*
 ============================================================================

 ============================================================================
*/
/* Fig. 7.13: fig07_13.c 2
Tentando modificar um ponteiro constante para dados não constantes */
#include <stdio.h> 
int main( void ) 
{
    int x; /* define x */ 
    int y; /* define y */

    /* ptr é um ponteiro constante para um inteiro que pode ser modificado por 
    meio de ptr, mas ptr sempre aponta para o mesmo local da memória */ 
    int * const ptr = &x;
    
    *ptr = 7; /* permitido: *ptr não é const */
    ptr = &y; /* erro: ptr é const; não pode atribuir novo endereço */ 
    return 0; /* indica conclusão bem-sucedida */
} /* fim do main */