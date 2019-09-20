/*
 ============================================================================
 Name			: exercicio_2.18
 Author      	: Eduardo Felizardo
 Creation date 	: 27/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
 2.18 Comparando inteiros. 
	Escreva um programa que peça ao usuário que digite dois inteiros, obtenha 
	os números e depois imprima o maior número seguido das palavras ‘é maior’. 
	Se os números forem iguais, imprima a mensagem “Esses números são iguais”. 
	Use apenas a forma de seleção única da instrução if que você aprendeu nes-
	te capítulo.
 ============================================================================
*/ 

#include <stdio.h>

/* inicio da função main */
int main()
{
	/* declaração de variáveis */
	int x = 0;
	int y = 0;
	
	/* entrada de dados */
	printf("Digite dois numeroa inteiros: ");
	scanf("%d%d", &x, &y);

	/*Processamento de dados */
	/* Aqui ainda não aprendemos a ultilizar o else por isso
	continuaremos só com o if */
	if(x > y)
	{
		printf("%d e maior que %d.\n", x, y);		//saída de dados
	}
	if(y > x)
	{
		printf("%d e maior que %d.\n", y, x);		//saída de dados
	}
	if(x == y)
	{
		printf("%d e igual a %d.\n\n", x, y);
	}

	return 0;		//Sucesso.
}
/* fim da função main */
