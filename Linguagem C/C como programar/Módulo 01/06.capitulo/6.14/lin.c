/*
 ============================================================================
 Name			: linc.c
 Author      	: Eduardo Felizardo Cï¿½ndido
 Creation date 	: 31/07/2019
 Version     	: R00
 Copyright   	: Your copyright notice
 Description 	: Hello World in C, Ansi-style
 ============================================================================
*/
/*
 ============================================================================
 6.14 	Modificações nos programas de média, mediana e moda. Modifique o pro-
 grama da Figura 6.16 de modo que a função mode seja capaz de lidar com um 
 empate para o valor de moda. Modifique também a função median para que os 
 dois elementos do meio de um array tenham a média calculada caso haja um 
 número par de elementos.
 ============================================================================
 */ 

/* Figura 6.16: fig06_16.c 2
Esse programa introduz o tópico da análise de dados de pesquisa. Ele calcula a média, a mediana e a moda dos dados */
#include <stdio.h> 

#define SIZE 99		/* protótipo de funções */ 

int mean( const int answer[] ); 
int median( int answer[] );
int mode( int freq[], const int answer[] ) ; 
int bubbleSort( int a[] ); 
int printArray( const int a[] ); 

/* função main inicia a execução do programa */ 
int main( void ) 
{ 
	int frequency[ 10 ] = { 0 }; 			/* inicializa frequência do array */

	/* inicializa resposta do array */ 
	int response[ SIZE ] = { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8, 7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7 };
	
	/* processa respostas */ 
	mean( response ); 
	median( response );
	mode( frequency, response ); return 0; /* indica conclusão bem-sucedida */
} /* fim do main */ 

/* calcula média de todos os valores de resposta */ 
int mean( const int answer[] ) 
{ 
	int j; 			/* contador para totalizar os elementos do array */ 
	int total = 0; 			/* variável para manter a soma dos elementos do array */ 
	
	printf( "%s\n%s\n%s\n", "********", " Média", "********" );
	
	/* valores totais de respostas */ 
	for ( j = 0; j < SIZE; j++ ) 
	{ 
		total += answer[ j ];
	} 			/* fim do for */

	printf( "A média é o valor médio dos itens de dados.\n" 
			"A média é igual ao total de todos\n” “os itens de dados divididos pelo número\n"
			"de itens de dados ( %d ). O valor médio para esta\n" 
			"execução é: %d / %d = %.4f\n\n", SIZE, total, SIZE, ( double ) total / SIZE );
} 			/* fim da função mean */ 

/* ordena array e determina valor do elemento mediano */ 
int median( int answer[] ) 
{ 
	printf( "\n%s\n%s\n%s\n%s", "********", " Mediana", "********", "O array de respostas, não ordenado, é" );
	
	printArray( answer ); 			/* exibe array não ordenado */ 
	
	bubbleSort( answer ); 			/* ordena array */ 
	
	printf( "\n\nO array ordenado é" ); 
	
	printArray( answer ); 			/* exibe array ordenado */ 
	
	/* exibe elemento mediano */
	printf( "\n\nA mediana é o elemento %d do\n" 
			"array ordenado de %d elementos.\n" 
			"Para essa execução, a mediana é %d\n\n", SIZE / 2, SIZE, answer[ SIZE / 2 ] );
} 			/* fim da função median */ 

/* determina a resposta mais frequente */ 
int mode( int freq[], const int answer[] ) 
{
	int rating; 			/* contador para acessar os elementos 1-9 do array freq */ 
	int j; 				/* contador para resumir os elementos 0-98 do array answer */ 
	int h; 				/* contador para exibir histogramas dos elementos no array freq */ 
	int largest = 0; 			/* representa maior frequência */
	int modeValue = 0; 			/* representa resposta mais frequente */

	printf( "\n%s\n%s\n%s\n", "********", " Moda", "********" ); 			/* inicializa frequências em 0 */

	for ( rating = 1; rating <= 9; rating++ ) 
	{ 
		freq[ rating ] = 0;
	} 			/* fim do for */

	/* frequências de resumo */ 
	for ( j = 0; j < SIZE; j++ ) 
	{ 
		++freq[ answer[ j ] ];
	} /* fim do for */

	/* cabeçalhos de impressão para colunas do resultado */ 
	printf( "%s%11s%19s\n\n%54s\n%54s\n\n", "Resposta", "Frequência", "Histograma", "1 1 2 2", "5 0 5 0 5" );
	
	/* exibe resultados */
	for ( rating = 1; rating <= 9; rating++ ) 
	{ 
		printf( "%8d%11d ", rating, freq[ rating ] );
	
		/* acompanha valor da moda e valor da maior frequência */ 
		if ( freq[ rating ] > largest ) 
		{ 
			largest = freq[ rating ]; 
			modeValue = rating;
		} 			/* fim do if */

		/* barra de histograma de saída de impressão que representa valor de frequência */ 
		for ( h = 1; h <= freq[ rating ]; h++ ) 
		{ 
			printf( "*" );
		} 			/* fim do for interno */
	
		printf( "\n" ); 			/* sendo nova linha de saída */ 
	} 			/* fim do for externo */
	
	/* exibe o valor da moda */ 
	printf( "A moda é o valor mais frequente.\n"
			"Para essa execução, a moda é %d, que ocorreu" 
			" %d vezes.\n", modeValue, largest );
} 			/* fim da função mode */ 


/* função que ordena um array com o algoritmo bubble sort */
int bubbleSort( int a[] )
{
	int pass; 			/* contador de passada */ 
	int j; 			/* contador de comparação */
	int hold; 			/* local temporário usado para troca de elementos */

	/* loop para controlar número de passadas */ 
	for ( pass = 1; pass < SIZE; pass++ ) 
	{
		/* loop para controlar número de comparações por passada */ 
		for ( j = 0; j < SIZE - 1; j++ ) 
		{
			/* troca elementos se estiverem fora de ordem */ 
			if ( a[ j ] > a[ j + 1 ] ) 
			{ 
				hold = a[ j ];
				a[ j ] = a[ j + 1 ]; 
				a[ j + 1 ] = hold;
			} 			/* fim do if */
		} 			/* fim do for interno */ 
	} 			/* fim do for externo */
}			/* fim da função bubbleSort */

/* imprime conteúdo do array de resultados (20 valores por linha) */
int printArray( const int a[] )
{
	int j; 			/* contador */

	/* imprime conteúdo do array */ 
	for ( j = 0; j < SIZE; j++ ) 
	{
		if ( j % 20 == 0 ) 
		{ 
			/* inicia nova linha a cada 20 valores */ 
			printf( "\n" );
		} 			/* fim do if */ 
		printf( "%2d", a[ j ] ); 
	} 			/* fim do for */
}			/* fim da função printArray */