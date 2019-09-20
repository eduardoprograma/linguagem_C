/*
 ============================================================================
 Name			: fig07_04.C
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
/* Fig. 7.4: fig07_04.c
Usando os operadores & e */
#include <stdio.h> 

int main( void )
{
    int a; /* a é um inteiro */ 
    int *aPtr; /* aPtr é um ponteiro para um inteiro */ 
    
    a= 7;   
    aPtr = &a; /* aPtr definido para o endereço de a */ 
    
    printf( "O endereço de a é %p" 
    "\nO valor de aPtr é %p", &a, aPtr ); 
    printf( "\n\nO valor de a é %d" 
    "\nO valor de *aPtr é %d", a, *aPtr );
    
    printf( "\n\nMostrando que * e & são complementos um " 
    "do outro\n&*aPtr = %p"
    "\n*&aPtr = %p\n", &*aPtr, *&aPtr ); 
    
    return 0; /* indica conclusão bem-sucedida */ 
} /* fim do main */