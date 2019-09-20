/*
 ============================================================================
 Name			: exercicio_3.24
 Author      	: Eduardo Felizardo
 Creation date 	: 06/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_3 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
3.24 	Ache o número maior. 
	O processo de achar o número maior (ou seja, o máximo de um grupo de núm-
	eros) é usado com frequência nas aplicações de computador. Por exemplo, 
	um programa que determina o vencedor de uma disputa de vendas lerá o núm-
	ero de unidades vendidas por vendedor. O vendedor que tiver vendido mais 
	unidades vence a disputa. Escreva um programa em pseudocódigo e depois um 
	programa que leia uma série de 10 números, determine e imprima o maior 
	dos números. 
	[Dica: seu programa deverá usar três variá veis da seguinte forma]: 
contador: 
	Um contador para contar até 10 (ou seja, registrar quantos números foram 
	informados e determinar quando os 10 números foram processados)
número: 
	O número da entrada atual no programa 
maior:
	O maior número achado até o momento
 ============================================================================
*/
/* Solução do Exercício 3.24 */
#include<stdio.h>
/* Iniicio da função main */
int main()
{
	/* declaração das varáveis */
	int contador; 	//Contador com ciclo de 10 
	int numero; 	//Entrada atual
	int maior;		//maior numero encontrado até agora.

	/*Entrada de dados */
	/* Obtenha o primeiro número */
	printf("Digite o primeiro numero: ");
	scanf("%d", &maior);
	contador = 2;

	/* processamento dos dados */
	/* loop de com contagem de mais 9 */
	while(contador <= 10)
	{
		printf("Digite o proximo numero: ");
		scanf("%d", &numero);

		/* Se a entrada for maior que a variável maior */
		if(numero > maior)
		{
			maior = numero;
		}	//fim de if

		contador++;
	}	//fim de while

	printf("O maior numero e %d\n\n", maior);

	return 0;		//indica encerramento bem-sucedido.
}
/* fim da função main */