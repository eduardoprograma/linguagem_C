//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.3	Escreva uma única instrução em C que possibilite realizar as seguintes tarefas:
	a) atribuir a soma de x e y a z e incrementar o valor de x em 1 após o cálculo.
	b) multiplicar a variável produto por 2 usando o operador *=.
	c) multiplicar a variável produto por 2 usando os operadores = e *.
	d) testar se o valor da variável contador é maior do que 10. Se for, imprimir ‘Contador é maior do que 10’.
	e) decrementar a variável x em 1, depois subtraí-la da variável total.
	f) somar a variável x à variável total, depois decrementar x por 1.
	g) calcular o resto após q ser dividido por divisor e atribuir o resultado a q; escreva essa instrução de duas maneiras diferentes.
	h) imprimir o valor 123.4567 com 2 dígitos de precisão. Que valor é impresso?
	i) imprimir o valor de ponto flutuante 3.14159 com três dígitos à direita do ponto decimal. Que valor é impresso? */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	/* int x, y, z;
	int soma = 0;
	int produto = 0;
	int contador = 0;
	int total  = 0;
	int q , resto = 0, divisor = 0;*/

	/* entrada de dados */
	/* processamento */
	/*soma = x + y + z;
	++x;
	produto *= 2;
	produto = produto  * 2;

	if(contador > 10)
	{
		printf("Contador e maior do que 10.\n");
	}
	--x;
	total -= x;

	total += x;
	--x;

	q /= divisor;
	resto = q % divisor;
	q =  resto;*/

	/* saída de dados */

	printf("o valor %.2f\n", 123.4567);
	printf("o valor de ponto flutuante %.3f\n", 3.14159);

	return 0;
}			//fim da função main.