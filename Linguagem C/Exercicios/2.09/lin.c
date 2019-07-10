//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*2.9	Escreva uma única instrução em C, ou linha única, que cumpra os comentários a seguir:
	a) Exiba a mensagem ‘Digite dois números.
	b) Atribua o produto das variáveis b e c à variável a. 
	c) Indique um programa que realize um cálculo de folha de pagamento (ou seja, use um texto que ajude a documentar um programa).
	d) Informe três valores inteiros usando o teclado e coloque esses valores nas variáveis inteiras a, b e c.*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int a, b, c;

	printf("Este porgrama calcula folha de pagamento.\n");

	/* entrada de dados */
	printf("Digite dois numeros inteiros: ");
	scanf("%d%d", &b, &c);

	/* processamento */
	a = b * c;

	printf("Por favor digite agora tres valores interios: ");
	scanf("%d%d%d", &a, &b, &c);
	/* saída de dados */
}			//fim da função main.