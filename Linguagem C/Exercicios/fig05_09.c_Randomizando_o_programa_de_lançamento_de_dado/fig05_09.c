//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: Randomizando o programa de lançamento de dado

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Fig. 5.9: fig05_09.c
Randomizando o programa de lançamento de dado */
int main(void)		
{
	/* declaração das varáveis */
	int i;			/* contador */
	unsigned seed;			/* número usado para criar semente do gerador de número aleatório */

	/* entrada de dados */
	//printf( "Digite a semente: "); 
	//scanf("%u", &seed );			/* observe o %u de unsigned */

	srand(time(NULL));			/* inicia gerador de número aleatório */

	/* processamento */
	/* loop 10 vezes */ 
	for (i = 1; i <= 10; i++)
	{
		/* escolhe número aleatório de 1 a 6 e o imprime */ 
		printf("%10d", 1 + ( rand() % 6));

		/* se o contador é divisível por 5, inicia nova linha de impressão */ 
		if ( i % 5 == 0 ) 
		{ 
			printf("\n");
		}		/* fim do if */
	}		/* fim do for */

	/* saída de dados */
	return 0;		/* indica conclusão bem-sucedida */
}			//fim da função main.