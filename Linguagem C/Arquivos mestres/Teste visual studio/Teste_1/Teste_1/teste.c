/*Programa teste */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Declara os elementos dos vetores*/
#define SIZEL 2
#define SIZEC 2

/*INICIO*/
int main()
{
	setlocale(LC_ALL, "Portuguese-brazilian");

	/*Declaração das variáveis*/
	int mat[SIZEL][SIZEC] = {0}, resultado[SIZEL][SIZEC] = {0};
	int i, j, maior;
	maior = mat[1, 1];

	/*Entrada de dados*/
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			if (mat[i, j] > maior)
			{
				maior = mat[i, j];
			}
		}
	}
	for (i = 0; i <= 2; i++)
	{

	}
}
