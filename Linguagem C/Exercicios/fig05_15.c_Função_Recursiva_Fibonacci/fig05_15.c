//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade:Observe que os números da série de Fibonacci tendem a crescer rapidamente. Portanto, escolhemos o tipo de dado long para os tipos de parâmetro e de retorno na função fibonacci. 


/* Fig. 5.15: fig05_15.c Função recursiva fibonacci */
#include <stdio.h>

long fibonacci(long n);			/* protótipo de função */

/* função main inicia a execução do programa */
int main(void)
{
	/* declaração das varáveis */
	long result;			/* valor de fibonacci */ 
	long number;			/* número fornecido pelo usuário */

	/* entrada de dados */
	/* obtém inteiro do usuário */ 
	printf("Digite um inteiro: "); 
	scanf("%ld", &number);

	/* processamento */
	/* calcula valor de fibonacci para número informado pelo usuário */ 
	result = fibonacci(number);

	/* saída de dados */
	/* mostra resultado */
	printf("Fibonacci( %ld ) = %ld\n", number, result); 
	return 0;			/* indica conclusão bem-sucedida */
}			//fim da função main.

/* Definição recursiva da função fibonacci */
long fibonacci(long n)
{
	/* caso básico */
	if (n == 0 | n == 1) 
	{ 
		return n;
	}			/* fim do if */ 
	else 
	{ 
		/* etapa recursiva */ 
		return fibonacci(n - 1) + fibonacci(n - 2); 
	}			/* fim do else */
}