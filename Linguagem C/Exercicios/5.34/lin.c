//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.34	Exponenciação recursiva. 
	Escreva uma função recursiva power( base, expoente ) que, quando chamada, retorna 
			base^expoente
		Por exemplo, power( 3, 4 ) = 3 * 3 * 3 * 3. 
		Suponha que expoente seja um inteiro maior ou igual 
		a 1. Dica: a etapa de recursão usaria o relacionamento 
			base^expoente = base * base^(expoente–1)
		e a condição de término ocorre quando expoente é igual a 1, pois base1 = base */

#include <stdio.h>

int power(int base, int expoente);			//Protótipo da função;

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int base, expoente;
	int resp;

	/* entrada de dados */
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("Digite o expoente: ");
	scanf("%d", &expoente);

	/* processamento */
	printf("A potencia de (%d, %d), e %d\n", base, expoente, power(base, expoente));

	/* saída de dados */
	printf("Deseja fazer mais testes?.\n");
	printf("Se sim digite '1', se nao '2': Resposta... ");
	scanf("%d", &resp);

	if (resp == 1)
	{
		main();
	}
	else
	{
		return 0;
	}
	
}			//fim da função main.

int power(int base, int expoente)
{
	int i = 0;
	int mult;

	mult = base;

	for(i = (expoente - 1); i >= 1; i--)
	{
		mult = mult * base;
	}

	return mult;
}