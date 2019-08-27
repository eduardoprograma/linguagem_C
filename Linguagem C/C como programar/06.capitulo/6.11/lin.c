//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*6.11 	Bubble sort. 
	O bubble sort apresentado na Figura 6.15 é ineficaz no caso de arrays grandes. Faça as modificações simples descritas a seguir para melhorar o desempenho do bubble sort.
		a) Após a primeira passada, o maior número estará certamente no elemento de número mais alto do array; após a segunda passada, os dois maiores números estarão ‘no lugar’ e assim por diante. Em vez de nove comparações em cada passada, modifique o bubble sort para que sejam feitas oito comparações na segunda passada, sete na terceira e assim por diante.
		b) Os dados no array talvez já estejam na ordem correta, ou na ordem quase correta, portanto, por que fazer nove passadas se menos que isso já seria suficiente? Modifique a ordenação para verificar, ao final de cada passada, se alguma troca foi feita. Se nenhuma troca tiver sido feita, então os dados já deverão estar na ordem certa, de modo que o programa deverá ser concluído. Se foram feitas trocas, então, pelo menos mais uma passada será necessária. */

/* Figura 6.15: fig06_15.c 2
Esse programa ordena os valores de um array em ordem crescente */
#include <stdio.h> 

#define SIZE 10

/* função main inicia a execução do programa */ 
int main( void ) 
{ 
	/* inicializa a */
	int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 }; 
	int pass; 			/* contador de passada */ 
	int i; 			/* contador de comparação */
	int hold; 			/* local temporário usado para trocar elementos do array */ 
	
	printf( "Itens de dados na ordem original\n" );
	
	/* imprime array original */ 
	for ( i = 0; i < SIZE; i++ ) 
	{
		 printf( "%4d", a[ i ] );
	} 			/* fim do for */ 
	
	/* bubble sort */
	/* loop para controlar número de passadas */ 
	for ( pass = 1; pass < SIZE; pass++ ) 
	{
		/* loop para controlar número de comparações por passada */ 
		for ( i = 0; i < SIZE - 1; i++ ) 
		{
			/* compara elementos adjacentes e os troca se o primeiro elemento for maior que o segundo elemento */ 
			if ( a[ i ] > a[ i + 1 ] ) 
			{ 
				hold = a[ i ];
				a[ i ] = a[ i + 1 ]; a[ i + 1 ] = hold;
			} 			/* fim do if */
		} 			/* fim do for interno */ 
	} 			/* fim do for externo */

	printf( "\nItens de dados em ordem crescente\n" );
	
	/* imprime array ordenado */ 
	for ( i = 0; i < SIZE; i++ ) 
	{ 
		printf( "%4d", a[ i ] );
	} 			/* fim do for */ 
	printf( "\n" ); 
	return 0; 			/* indica conclusão bem-sucedida */ 
} 			/* fim do main */