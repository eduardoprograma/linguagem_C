//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.16 	Exponenciação 
	Escreva uma função potenciaInt(base, expoente) que retorne o valor de base^expoente
	Por exemplo, potenciaInt( 3, 4 ) = 3 * 3 * 3 * 3. Suponha que expoente seja um inteiro positivo, diferente de zero, e base seja um inteiro. A função potenciaInt deve usar for para controlar o cálculo. Não use funções da biblioteca matemática. */

#include <stdio.h>

int potenciaInt(int base, int expoente);

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int base, expoente;

	/* entrada de dados */
	printf("Digite um numero inteiro: ");
	scanf("%d", &base);
	
	/* processamento */
	while(base != -1)
	{
		printf("Digite um numero inteiro para expoente: ");
		scanf("%d", &expoente);

		printf("O resulado e %d\n\n", potenciaInt(base, expoente));

		printf("Digite um numero inteiro: ");
		scanf("%d", &base);
	}
	/* saída de dados */
	return 0;
}			//fim da função main.

int potenciaInt(int base, int expoente)
{
	int i;
	int resultado = base;

	if(expoente == 0)
	{
		return 1;
	}
	else
	{
		for(i = 0; i < expoente - 1; i++)
		{
			resultado *= base;
		}
		return resultado;
	}
}