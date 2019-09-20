//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.27 Ache os dois maiores números. 
	Usando uma técnica semelhante à do Exercício 3.24, ache os dois maiores valores dos 10 números. [Nota: você poderá informar cada número apenas uma vez.] */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int i = 0, x = 0, maior1 = 1, maior2 = 0;
	int guard = 0;

	/* entrada de dados */
	/* processamento */
	while (i < 10)
	{
		printf("Digite um numero inteiro: ");		//entro com o número
		scanf("%d", &x);

		if(x > maior1)			//se o número for maior
		{
			guard = maior1;
			maior1 = x;
		}
		if(x > maior2)			//Se o número for maior
		{
			if(guard > maior2)			//Se guard maior maior2
			{
				maior2 = guard;
			}
			else
			{
				if(x != maior1)				//se x diferente de maior1
				{
					maior2 = x;
				}
			}
		}
		i++;
	}
	
	/* saída de dados */
	printf("O primeiro numero maior e %d, e o segundo numero maior e %d.\n\n", maior1, maior2);
	return 0;
}			//fim da função main.