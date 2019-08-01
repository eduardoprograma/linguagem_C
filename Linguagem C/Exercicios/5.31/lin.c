//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.31	Jogando uma moeda. 
	Escreva um programa que simule o lançamento de uma moeda. Para cada lançamento da moeda, o programa deverá imprimir Cara ou Coroa. Deixe o programa jogar a moeda 100 vezes e conte o número de vezes que cada lado da moeda aparece. Imprima os resultados. O programa deverá chamar uma função flip separada, que não utilize argumentos e retorne 0 para cara e 1 para coroa. [Nota: se o programa realisticamente simula o lançamento de uma moeda, então cada lado da moeda deve aparecer aproximadamente em metade do tempo para um total de aproximadamente 50 caras e 50 coroas.] */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Randomizando o programa de lançamento de dado */
int main(void)		
{
	/* declaração das varáveis */
	int i, ContCara = 0, ContCoroa = 0;			/* contadores */
	int moeda;			/* Variáveis */

	/* entrada de dados */

	srand(time(NULL));			/* inicia gerador de número aleatório */

	/* processamento */
	/* loop 100 vezes */ 
	for (i = 1; i <= 100; i++)
	{
		/* escolhe número aleatório de 1 = Cara a 2 = Corôa */ 
		moeda = 1 + (rand() % 2);

		/* Seleciona o lado da moeda para contar */
		switch (moeda)
		{
		case 1:
			ContCara++;
			break;
		
		case 2:
			ContCoroa++;
			break;

		default:
			break;
		}
		
	}		/* fim do for */
	printf("\n");

	/* saída de dados */
	printf("O numero de vezes em que saiu as faces da moeda.\n");
	printf("Face da moeda 'Cara' = %10d.\n", ContCara);
	printf("Face da moeda 'Coroa' = %10d.\n\n", ContCoroa);

	return 0;		/* indica conclusão bem-sucedida */
}			//fim da função main.
