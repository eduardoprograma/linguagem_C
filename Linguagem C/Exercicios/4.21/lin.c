//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.21 	Reescreva o programa da Figura 4.2 de modo que a inicialização da variável contador seja feita na declaração, e não na estrutura for. */

/* Fig. 4.2: fig04_02.c 2
Repetição controlada por contador com a estrutura for */
#include <stdio.h> 
/* função main inicia a execução do programa */  
int main( void ) 
{ 
	int contador = 1 ; /* declara o contador */
	/* inicialização, condição de repetição e incremento são todos incluídos no cabeçalho da estrutura for. */ 
	for ( ; contador <= 10; contador++ ) 
	{ 
		printf( "%d\n", contador ); 
	} /* fim do for */
	return 0; /* indica que o programa terminou com sucesso */ 
} /* fim da função main */