//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 17/07/2019
//Descrição ou Finalidade: Lançando um dado de seis lados seis mil vezes

/* Fig. 5.8: fig05_08.c 
Lançando um dado de seis lados 6000 vezes */
#include <stdio.h>
#include <stdlib.h>

/* função main inicia a execução do programa */
int main(void)		
{
	/* declaração das varáveis */
	int frequency1 = 0;			/* contador de lançamento 1 */ 
	int frequency2 = 0; 		/* contador de lançamento 2 */ 
	int frequency3 = 0; 		/* contador de lançamento 3 */ 
	int frequency4 = 0; 		/* contador de lançamento 4 */ 
	int frequency5 = 0; 		/* contador de lançamento 5 */ 
	int frequency6 = 0; 		/* contador de lançamento 6 */

	int roll; 		/* contador de lançamento, valor de 1 a 6000 */ 
	int face; 		/* representa o valor de um dado lançado, de 1 a 6 */

	/* processamento */
	/* loop 6000 vezes e resume resultados */ 
	for ( roll = 1; roll <= 6000; roll++ )
	{
		face = 1 + rand() % 6; 		/* número aleatório de 1 a 6 */

		/* determina valor da face e incrementa contador apropriado */ 
		switch (face)
		{
			case 1: 		/* valor foi 1 */ 
				++frequency1; 
				break;

			case 2: 		/* valor foi 2 */ 
				++frequency2; 
				break;

			case 3: 		/* valor foi 3 */ 
				++frequency3; 
				break;

			case 4: 		/* valor foi 4 */ 
				++frequency4; 
				break;

			case 5: 		/* valor foi 5 */ 
				++frequency5; 
				break;

			case 6: 		/* valor foi 6 */ 
				++frequency6;
				break; /* opcional */
		}		/* fim do switch */
	}		/* fim do for */

	/* saída de dados */
	/* exibe resultados em formato tabular */ 
	printf("%s%13s\n", "Face", "Frequência"); 
	printf(" 1%13d\n", frequency1);
	printf(" 2%13d\n", frequency2); 
	printf(" 3%13d\n", frequency3); 
	printf(" 4%13d\n", frequency4);
	printf(" 5%13d\n", frequency5); 
	printf(" 6%13d\n", frequency6);
	return 0; 		/* indica conclusão bem-sucedida */
}			//fim da função main.