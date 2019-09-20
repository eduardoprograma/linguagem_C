//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*Um jogador lança dois dados. Cada dado tem seis faces. Essas faces contêm 1, 2, 3, 4, 5 e 6 pontos. Depois que os dados param, a soma dos pontos nas duas faces voltadas para cima é calculada. Se a soma for 7 ou 11 na primeira jogada, o jogador vence. Se a soma for 2, 3 ou 12 na primeira jogada (chamado ‘craps’), o jogador perde (ou seja, a ‘casa’ vence). Se a soma for 4, 5, 6, 8, 9 ou 10 na primeira jogada, então a soma se torna o 'ponto' do jogador. Para vencer, o jogador precisa continuar lançando os dados até que 'faça seu ponto'. O jogador perde lançando um 7 antes de fazer o ponto. */

/* Fig. 5.10: fig05_10.c 2
Craps */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>		/* Contém protótipos pra a função time */

/* constantes de enumeração representam status do jogo */
enum Status {CONTINUE, WON, LOST};
int rollDice(void);			/* protótipo de função */

/* função main inicia a execução do programa */
int main(void)		
{
	/* declaração das varáveis */
	int sum;			/* soma dos dados lançados */ 
	int myPoint; 		/* ponto ganho */

	enum Status gameStatus; 		/* pode conter CONTINUE, WON ou LOST */
	
	/* entrada de dados */
	/* randomiza gerador de número aleatório usando hora atual */ 
	srand( time(NULL) );

	sum = rollDice();			/* primeiro lançamento dos dados */

	/* processamento */
	/* determina status do jogo com base na soma dos dados */ 
	switch(sum)
	{
		/* vence na primeira jogada */ 
		case 7:
		case 11:
			gameStatus = WON; 
			break;
		
		/* perde na primeira jogada */ 
		case 2:
		case 3: 
		case 12:
			gameStatus = LOST; 
			break;
		
		/* lembra ponto */ 
		default:
			gameStatus = CONTINUE; 
			myPoint = sum;
			printf("Ponto é %d\n", myPoint ); 
			break; /* optional */
	}			/* fim do switch */

	/* enquanto jogo não termina */ 
	while ( gameStatus == CONTINUE )
	{
		sum = rollDice();			/* joga dados novamente */

		/* determina status do jogo */
		if (sum == myPoint) 
		{ 
			/* vence fazendo ponto */ 
			gameStatus = WON;	/* jogo termina, jogador vence */
		}			/* fim do if */
		else
		{
			if (sum == 7) 
			{ 
				/* perde por lançar 7 */ 
				gameStatus = LOST;			/* jogo termina, jogador perde */ 
			}			/* fim do if */
		}			/* fim do else */
	}			/* fim do while */
	
	/* saída de dados */
	/* mostra mensagem de vitória ou perda */ 
	if (gameStatus == WON) 
	{ 
		/* jogador venceu? */ 
		printf( "Jogador vence\n");
	}			/* fim do if */
	else 
	{ 
		/* jogador perdeu */ 
		printf("Jogador perde\n");
	}			/* fim do else */ 
	return 0; /* indica conclusão bem-sucedida */
}			//fim da função main.

/* lança dados, calcula soma e exibe resultados */
int rollDice(void)
{
	int die1;			/* primeiro dado */ 
	int die2;			/* segundo dado */
	int workSum;		/* soma dos dados */

	die1 = 1 + (rand() % 6);			/* escolhe valor aleatório die1 */ 
	die2 = 1 + (rand() % 6);			/* escolhe valor aleatório die2 */ workSum = die1 + die2; /* soma die1 e die2 */

	/* exibe resultados dessa jogada */
	printf("Jogador rolou %d + %d = %d\n", die1, die2, workSum ); 
	return workSum; /* retorna soma dos dados */
}			/* fim da função rollRice */