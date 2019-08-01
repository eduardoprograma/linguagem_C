//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.30 Escreva uma função qualityPoints que peça a média de um estudante e retorne 4 se a média for 90-100, 3 se a média for 80-89, 2 se a média for 70-79, 1 se a média for 60-69 e 0 se a média for menor que 60. */

#include <stdio.h>

int qualityPoints(int nota);

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int media;
	int qualif = 0;

	/* entrada de dados */
	printf("Digite a media do aluno: ");
	scanf("%d", &media);

	/* processamento */
	qualif = qualityPoints(media);

	/* saída de dados */
	printf("A qualificação do aluno e %d\n\n", qualif);

	return 0;
}			//fim da função main.

int qualityPoints(int nota)
{
	int x;

	if((nota >= 90) && (nota <= 100))
	{
		x = 4;
	}
	if((nota >=80) && (nota < 90))
	{
		x = 3;
	}
	if((nota >= 70) && (nota < 80))
	{
		x = 2;
	}
	if((nota >= 60) && (nota < 70))
	{
		x = 1;
	}
	if(nota < 60)
	{
		x = 0;
	}
	
	return x;
}