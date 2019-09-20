/*
 ============================================================================
 Name			: exercicio_2.27
 Author      	: Eduardo Felizardo
 Creation date 	: 31/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
 2.27	Padrão de asteriscos alternados. 
		Apresente o seguinte padrão de asteriscos alternados com oito instru-
		ções printf, e depois apresente o mesmo padrão com o mínimo de instru-
		ções printf possível.
 ============================================================================
*/
/* solução do exercicio 2.27 */
#include <stdio.h>

/* inicio da função main */
int main()
{
	printf("Ultilizando 8 printf's para a impressão do conjnto.\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n\n");

	/* próxima sequência */
	printf("Ultilizando apenas 1 printf para a impressão do conjunto.\n");
	printf("* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n\n");

	return 0;		//programa executado com sucesso.
}
/* fim da função main */
