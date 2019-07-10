//Nome do programa: lin.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.3	Escreva uma única instrução C para executar cada uma das seguintes alternativas:
	a) Declarar as variáveis c, estaVariável, q76354 e número para que tenham o tipo int.
	b) Pedir que o usuário digite um inteiro. Terminar a mensagem com um sinal de dois pontos (:) seguido por um espaço, e deixar o cursor posicionado após o espaço.
	c) Ler um inteiro do teclado e armazenar o valor digitado na variável inteira a.
	d) Se o número não for igual a 7, exibir “A variável número não é igual a 7”.
	e) Imprimir a mensagem “Este é um programa em C.” em uma linha.
	f) Imprimir a mensagem “Este é um programa em C.” em duas linhas, de modo que a primeira linha termine em C. 
	g) Imprimir a mensagem “Este é um programa em C.” com cada palavra em uma linha separada.
	h) Imprimir a mensagem “Este é um programa em C.” com as palavras separadas por tabulações.*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int c, estaVariavel, q76354, numero;
	int a;

	/* entrada de dados */
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);

	/* processamento */
	if(a != 7)
	{
		printf("A variavel numero nao e igual a 7.\n");
	}
	/* saída de dados */
	printf("Este e um programa em C.\n");
	printf("Este e um programa em C.\n \n");
	printf("Este\n e\n um\n programa\n em\n C.\n");
	printf("Este\t e\t um\t programa\t em\t C.\n");
	return 0;
}			//fim da função main.