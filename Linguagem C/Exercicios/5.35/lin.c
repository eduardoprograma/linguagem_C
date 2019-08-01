//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.35	Fibonacci. 
	A série de Fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, … começa com os termos 0 e 1, e tem a propriedade de estabelecer que o termo seguinte é a soma dos dois termos anteriores. 
		a) Escreva uma função não recursiva fibonacci(n) que calcule o n-ésimo número de Fibonacci. 
		b) Determine o maior número de Fibonacci que pode ser impresso no seu sistema. Modifique o programa da parte a) para usar double em vez de int para calcular e retornar números de Fibonacci. Faça com que o programa se repita até que falhe devido a um valor excessivamente alto. */

#include <stdio.h>

double fibonacci(double n);			/* protótipo de função */

/* função main inicia a execução do programa */
int main(void)
{
	/* declaração das varáveis */
	double result;			/* valor de fibonacci */ 
	double number;			/* número fornecido pelo usuário */

	/* entrada de dados */
	/* obtém inteiro do usuário */ 
	printf("Digite um inteiro: "); 
	scanf("%lf", &number);

	/* processamento */
	/* calcula valor de fibonacci para número informado pelo usuário */ 
	result = fibonacci(number);

	/* saída de dados */
	/* mostra resultado */
	printf("Fibonacci( %.0f ) = %.0f\n", number, result); 
	return 0;			/* indica conclusão bem-sucedida */
}			//fim da função main.

/* Definição recursiva da função fibonacci */
double fibonacci(double n)
{
	/* caso básico */
	if (n == 0 | n == 1) 
	{ 
		return n;
	}			/* fim do if */ 
	else 
	{ 
		/* etapa recursiva */ 
		return n - 1 + n - 2; 
	}			/* fim do else */
}