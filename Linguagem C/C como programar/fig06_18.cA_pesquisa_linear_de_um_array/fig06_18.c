//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: A pesquisa linear de um array

/* Figura 6.18: fig06_18.c
Pesquisa linear de um array */
#include <stdio.h> 

#define SIZE 100            

/* protótipo de função */ 
int linearSearch( const int array[], int key, int size );           

/* função main inicia a execução do programa */
int main( void )
{ 
    int a[ SIZE ];          /* cria array a */
    int x;          /* contador para inicializar elementos 0-99 do array a */ 
    int searchKey;          /* valor para localizar no array a */
    int element;            /* variável para manter local de searchKey or -1 */ /* criar dados */
    
    for ( x = 0; x < SIZE; x++ ) 
    { 
        a[ x ] = 2 * x;
    } /* fim do for */

    printf( "Digite chave de pesquisa de inteiro:\n" ); 
    scanf( "%d", &searchKey );


    /* tenta localizar searchKey no array a */ 
    element = linearSearch( a, searchKey, SIZE );


    /* exibe resultados */ 
    if ( element != -1 ) 
    {
        printf( "Valor encontrado no elemento %d\n", element );
    } /* fim do if */ 
    else 
    {
        printf( "Valor não encontrado\n" ); 
    } /* fim do else */ 
    
    return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* Compara chave com cada elemento do array até o local ser encontrado ou até o final do array ser alcançado; retorna subscrito do elemento se chave foi encontrada ou -1 se chave não encontrada */
int linearSearch( const int array[], int key, int size )
{
    int n; /* contador */

    /* loop pelo array */ 
    for ( n = 0; n < size; ++n ) 
    { 
        if ( array[ n ] == key ) 
        { 
            return n; /* retorna local da chave */ 
        } /* fim do if */ 
    } /* fim do for */

    return -1; /* chave não encontrada */
}   /* fim da função linearSearch */