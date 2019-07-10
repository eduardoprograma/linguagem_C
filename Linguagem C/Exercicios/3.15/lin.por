//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.15 	Formule um algoritmo em pseudocódigo para cada um dos seguintes comandos:
	a) Obter dois números a partir do teclado, calcular sua soma e exibir o resultado.
	b) Obter dois números a partir do teclado, determinar e exibir qual deles (se houver algum) é o maior dos dois números.
	c) Obter uma série de números positivos a partir do teclado, determinar e exibir sua soma. Suponha que o usuário digite um valor de sentinela −1 para indicar o ‘fim da entrada de dados’. */

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	interio x, y, soma = 0;		//intem a, b

	/* entrada de dados */
	escreva("Escreva dois numeros inteiro: ");		//item a, b
	leia(x, y);										//item a, b

	/* processamento */
	soma = x + y;		//item a
	se(x > y)			//item b
	{
		escreva("O número ", x, " é maior que ", y, "\n");
	}
	senao
	{
		escreva("O número ", y, " é maior que ", x, "\n");
	}

	enquanto(x != -1)
	{
		soma += (x + y);
		escreva("Escreva dois numeros inteiro: ");		//item d
		leia(x, y);										//item d
	}
	
	/* saída de dados */
	escreva("O valor da soma é ", soma, "\n");		//item a
}			//fim da função main.