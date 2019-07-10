//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.18 Comparando inteiros. 
	Escreva um programa que peça ao usuário que digite dois inteiros, obtenha os números e depois imprima o maior número seguido das palavras ‘é maior’. Se os números forem iguais, imprima a mensagem “Esses números são iguais”. Use apenas a forma de seleção única da instrução if que você aprendeu neste capítulo. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x, y;

	/* entrada de dados */
	printf("Digite dois numeros inteiros: ");
	scanf("%d%d", &x, &y);

	/* processamento */
	if(x > y)
	{
		printf("O primeiro numero e maior\n");
	}
	if(y > x)
	{
		printf("O segundo numero e maior.\n");
	}
	/* saída de dados */

	return 0;
}			//fim da função main.