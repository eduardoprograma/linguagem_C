//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/* */

/* Figura 6.8: fig06_08.c 2
Programa de impressão de histograma */
#include <stdio.h> 

#define SIZE 10

/* função main inicia a execução do programa */ 
int main( void ) 
{
	/* usa lista de inicializadores para inicializar array n */ 
	int n[ SIZE ] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 }; 
	int i; /* contador do for externo para elementos do array */
	int j; /* contador do for interno conta *s em cada barra do histograma */ 
	
	printf( "%s%13s%17s\n", "Elemento", "Valor", "Histograma");
	/* para cada elemento do array n, mostra uma barra do histograma */ 
	for ( i = 0; i < SIZE; i++ ) 
	{
		printf( "%7d%13d\t", i, n[ i ]);
		for ( j = 1; j <= n[ i ]; j++ ) 
		{ 
			/* imprime uma barra */ 
			printf("%c", '*' );
		} /* fim do for interno */
		printf( "\n" ); /* fim de uma barra do histograma */ 
	} /* fim do for externo */
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */