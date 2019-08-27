/*
 ============================================================================
 Name			: fig07_06.C
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
/* Fig. 7.6: fig07_06.c 2
Cubo de uma variável usando chamada por valor */
#include <stdio.h> 

int cubeByValue( int n ); /* protótipo */ 

int main( void ) 
{ 
    int number = 5; /* inicializa número */ 
    
    printf( "O valor original do número é %d", number );
    
    /* passa número por valor a cubeByValue */ 
    number = cubeByValue( number );

    printf( "\nO novo valor do número é %d\n", number ); 

    return 0; /* indica conclusão bem-sucedida */
} /* fim do main */ 

/* calcula e retorna cubo do argumento inteiro */ 
int cubeByValue( int n )
{
    return n * n * n; /* calcula cubo da variável local n e retorna resultado */
}   /* fim da função cubeByValue */