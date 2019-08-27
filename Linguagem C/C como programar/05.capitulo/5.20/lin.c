//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.20 	Exibindo o quadrado de um caractere. 
	Modifique a função criada no Exercício 5.19 para formar um quadrado a partir de qualquer caractere contido no parâmetro de caractere fillCharacter. Assim, se side é 5 e fillCharacter é ‘#’, então essa função deverá imprimir: */


#include <stdio.h>
int side(int lado);
int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x;

	/* entrada de dados */
	printf("Digite o lado do quadrado: ");
	scanf("%d", &x);

	/* processamento */
	printf("\n");
	while (x != -1)
	{
		printf("%d", side(x));
		printf("\n\nDigite o lado do quadrado: ");
		scanf("%d", &x);
	}
	
	/* saída de dados */
	return 0;
}			//fim da função main.
int side(int lado)
{
	int i, j;

	if(lado != 5)
	{
		for(j = 0; j < lado; j++)
		{
			for(i = 0; i < lado; i++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		for(j = 0; j < lado; j++)
		{
			for(i = 0; i < lado; i++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
}		//fim da função side.