//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.32	Descubra o número. 
	Escreva um programa em C que contenha o jogo ‘descubra o número’, da seguinte forma: seu programa escolhe o número a ser descoberto, selecionando um inteiro aleatório na faixa de 1 a 1000. O programa então exibe:
			Eu tenho um número entre 1 e 1000. Você consegue descobrir qual é? Digite sua primeira tentativa.
	O jogador, então, digita uma primeira tentativa. O programa responde com uma das seguintes sentenças:
			1 Excelente! Você descobriu o número! Gostaria de jogar novamente (s ou n)?
			2 Muito baixo. Tente novamente. 
			3 Muito alto. Tente novamente.
	Se a escolha do jogador estiver incorreta, seu programa deverá realizar um loop até que o jogador finalmente acerte o número. Seu programa deverá continuar informando ao jogador Muito alto ou Muito baixo para ajudá-lo a ‘mirar’ na resposta correta. [Nota: a técnica de pesquisa empregada nesse problema é chamada de pesquisa binária. Falaremos mais sobre isso no próximo problema.] */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Randomizando o programa de lançamento de dado */
int main(void)		
{
	/* declaração das varáveis */
	int i;			/* contadores */
	int numero, NumRandom;			/* Variáveis */
	char resposta;			/* Resposta */

	/* entrada de dados */
	printf("Eu tenho um numero entre 1 e 1000.\n Voce consegue descobrir qual e?\n Digite sua primeira tentativa.\n");
	scanf("%d", &numero);

	srand(time(NULL));			/* inicia gerador de número aleatório */

	/* processamento */
	/* loop 100 vezes */ 
	while (resposta != 'n')
	{
		/* escolhe número aleatório de 1 a 1000 */ 
		NumRandom = 1 + (rand() % 1000);

		/* Número de tentativas para descobrir o número correto. */
		for (i = 2; ; i++)
		{
			if (numero == NumRandom)
			{
				printf("Excelente! Voce descobriu o numero! Gostaria de jogar novamente (s ou n)?");
				scanf("%c", &resposta);
				resposta = getchar();

				if (resposta == 'n')
				{
					goto fim;
				}
				else
				{
					goto IniciarNovamente;
				}
			}
			else if ( numero < NumRandom)
			{
				printf("Muito baixo. Tente novamente.\n");
			}
			else 
			{
				printf("Muito alto. Tente novamente.\n");
			}
			printf("Digite sua %d%c tentativa.\n", i, 166);
			scanf("%d", &numero);
			printf("\n");
		}
		IniciarNovamente:
		printf("Eu tenho um numero entre 1 e 1000.\nVoce consegue descobrir qual e?\n Digite sua primeira tentativa.\n");
		scanf("%d", &numero);
		fim:
		printf("\n");
	}		/* fim do for */
	printf("\n");

	/* saída de dados */
	printf("Ok! Obrigado por brincar comigo!...\n");

	return 0;		/* indica conclusão bem-sucedida */
}			//fim da função main.
