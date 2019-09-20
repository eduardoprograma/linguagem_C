//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.15 	Cálculos de hipotenusa. 
	Defina uma função chamada hipotenusa que calcule o tamanho da hipotenusa de um triângulo retângulo quando os outros dois lados são conhecidos. Use essa função em um programa para determinar o tamanho da hipotenusa de cada um dos triângulos da tabela a seguir. A função deverá usar dois argumentos do tipo double e retornar a hipotenusa como um double. Teste seu programa com os valores de lado especificados na Figura 5.18. */

#include <stdio.h>
#include <math.h>

float hipotenusa(float cateto1, float cateto2);

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i;
	float cateto1, cateto2;

	/* entrada de dados */
	/* processamento */
	for(i = 0; i < 3; i++)
	{
		printf("Digite os dois catetos do triangulo retangulo: ");
		scanf("%f%f", &cateto1, &cateto2);

		printf("Cateto_1 %.2f\tCateto_2 %.2f\tHipotenusa %.2f\n", cateto1, cateto2, hipotenusa(cateto1, cateto2));
	}
	/* saída de dados */
	return 0;
}			//fim da função main.

float hipotenusa(float cateto1, float cateto2)
{
	return 0.5 * ((cateto1 * cateto1) + (cateto2 * cateto2));
}