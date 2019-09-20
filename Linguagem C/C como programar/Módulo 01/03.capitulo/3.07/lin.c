//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.7 	Escreva instruções em C que:
	a) leiam a variável inteira x com scanf. 
	b) leiam a variável inteira y com scanf. 
	c) inicializem a variável inteira i em 1. 
	d) inicializem a variável inteira potência em 1. 
	e) multipliquem a variável potência por x e atribua o resultado à potência.
	f) incrementem a variável i em 1. 
	g) testem i para verificar se ele é maior ou igual a y na condição de uma estrutura while.
	h) exibam a variável inteira potência com printf. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int x = 1, y = 10, i = 1, potencia = 1;
	/* entrada de dados */
	/* processamento */
	potencia *= x;
	i++;

	while (i < y)
	{
		if(i >= y)
		{
			printf(";");
		}
	}
	
	/* saída de dados */
	printf("A potencia e %d\n", potencia);

	return 0;
}			//fim da função main.