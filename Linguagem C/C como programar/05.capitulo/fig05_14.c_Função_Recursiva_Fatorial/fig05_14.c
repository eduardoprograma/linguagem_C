//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 20/07/2019
//Descrição ou Finalidade: 
/* Fig. 5.14: fig05_14.c Função recursiva fatorial */

#include <stdio.h>

long factorial(long number);			/* protótipo de função */

/* função main inicia a execução do programa */
int main(void)		
{
	/* declaração das varáveis */
	int i;			/* contador */

	/* processamento */
	/* loop 11 vezes; durante cada iteração, calcula fatorial(i) e mostra o resultado */
	for (i = 0; i <= 10; i++) 
	{
		printf("%2d! = %ld\n", i, factorial(i));
	}			/* fim do for */
	/* saída de dados */
	return 0;			/* indica conclusão bem-sucedida */
}			//fim da função main.

/* definição recursiva da função fatorial */
long factorial(long number)
{
	/* caso básico */ 
	if (number <= 1) 
	{ 
		return 1;
	}			/* fim do if */ 
	else 
	{ 
		/* etapa recursiva */ 
		return (number * factorial(number - 1)); 
	}			/* fim do else */
}			/* fim da função fatorial */