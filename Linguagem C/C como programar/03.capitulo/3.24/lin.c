//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.24 	Ache o número maior. 
	O processo de achar o número maior (ou seja, o máximo de um grupo de números) é usado com frequência nas aplicações de computador. Por exemplo, um programa que determina o vencedor de uma disputa de vendas lerá o número de unidades vendidas por vendedor. O vendedor que tiver vendido mais unidades vence a disputa. Escreva um programa em pseudocódigo e depois um programa que leia uma série de 10 números, determine e imprima o maior dos números. 
	[Dica: seu programa deverá usar três variá veis da seguinte forma]: 
contador: 
	Um contador para contar até 10 (ou seja, registrar quantos números foram informados e determinar quando os 10 números foram processados)
número: 
	O número da entrada atual no programa 
maior:
	O maior número achado até o momento */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i = 0, numero = 0, maior = 0;
	
	/* entrada de dados */
	/* processamento */
	while (i < 10)
	{
		printf("Digite um numero inteiro: ");
		scanf("%d", &numero);
		if(numero > maior)
		{
			maior = numero;
		}
		i++;
	}
	
	/* saída de dados */
	printf("O maior numero e %d, e o ultimo valor de entrada foi, %d.\n\n", maior, numero);
	return 0;
}			//fim da função main.