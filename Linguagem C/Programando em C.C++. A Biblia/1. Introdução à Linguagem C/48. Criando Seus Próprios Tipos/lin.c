//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019
//Parte do livro "Programando C/C++ A Biblia

/*Um tipo define o conjunto de valores que uma variável pode armazenar e o conjunto de operações que seu programa pode realizar com os dados. C oferece quatro tipos básicos de dados (int, float, chart double). Como visto,você pode combinar os modificadores de tipo para alterar o intervalo de valores que uma variável pode armazenar. Á medida que o número de variáveis declaradas aumentar, você poderá achar conveniente criar seu próprio nome de variável, o que oferece um nome de atalho para um tipo usado comumente. Por exemplo, considere
as seguintes declarações do tipo unsigned long int:

		unsigned long int segundos_desde_janeiro;
		unsigned long int populacao_mundial_em__2000;

Usando o comando typedef de C, você pode definir o nome de tipo ULINT, que é idêntico ao tipo unsigned long int, como mostrado aqui:

		typedef unsigned long int ULINT;

Após criar o nome do tipo, você poderá usar o nome para definir variáveis, como mostrado aqui:

		ULINT segundos_desde_janeiro;
		ULINT populacao_mundial_em_2000;

A medida que seus programas forem usando declarações de variáveis mais complexas, você verá que criar um novo nome de tipo é muito conveniente, pois reduz a quantidade de digitação e a possibilidade de erros.*/
#include <stdio.h>
int main()
{
	typedef unsigned long int ULINT; //Criando meu próprio tipo:

	ULINT segundos_desde_janeiro;
	ULINT populacao_mundial_em_2000;
}