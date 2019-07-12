//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.3	Escreva um programa que teste se os exemplos das chamadas de função da biblioteca matemática mostrados na Figura 5.2 realmente produzem os resultados indicados. */

#include <stdio.h>
#include <math.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	float x;

	/* entrada de dados */
	printf("Digite um numero real: ");
	scanf("%f", &x);

	/* processamento */
	printf("raiz quadrada de %.2f\n", sqrt(x));
	printf("função exponencial de %.2f\n", exp(x));
	printf("logaritmo natural de %.2f\n", log(x));
	printf("logaritmo  de %.2f\n", log10(x));
	printf("valor absoluto de %.2f\n", fabs(x));
	printf("arredonda x ao menor inteiro não menor que de %.2f\n", ceil(x));
	printf("arredonda x ao maior inteiro não maior que de %.2f\n", floor(x));
	printf("x elevado à potência y de %.2f\n");
	printf("módulo (resto) de x/y como um número em ponto flutuante de %.2f\n");
	printf("seno trigonométrico de %.2f\n");
	printf("cosseno trigonométrico de %.2f\n");
	printf("tangente trigonométrica de %.2f\n");
	/* saída de dados */
}			//fim da função main.