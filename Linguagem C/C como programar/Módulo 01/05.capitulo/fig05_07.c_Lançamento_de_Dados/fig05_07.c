//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 17/07/2019
//Descrição ou Finalidade: Lançando um dado de seis lados

/* Fig. 5.7: fig05_07.c 2
Inteiros escalados e deslocados, produzidos por 1 + rand() % 6 */
#include <stdio.h>
#include <stdlib.h>

/* função main inicia a execução do programa */
int main(void)	
{
	/* declaração das varáveis */
	int i;			/* contador */

	/* processamento */
	/* loop 20 vezes */
	for(i = 1; i <= 20; i++)
	{
		/* escolhe número aleatório de 1 a 6 e imprime na tela */ 
		printf( "%10d", 1 + (rand() % 6));

		/* se contador é divisível por 5, inicia nova linha de impressão */ 
		if (i % 5 == 0)
		{
			printf("\n");
		}			/* fim do if */
	}			/* fim do for */

	/* saída de dados */
	return 0; /* indica conclusão bem-sucedida */
}			//fim da função main.