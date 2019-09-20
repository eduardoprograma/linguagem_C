//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.33 	Equivalente de valores decimais em números romanos. 
	Escreva um programa que imprima uma tabela de todos os equivalentes em números romanos dos números decimais no intervalo de 1 a 100.*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	char N1[] = "I";
	char N2[] = "II";
	char N3[] = "III";
	char N4[] = "IV";
	char N5[] = "V";
	char N6[] = "VI";
	char N7[] = "VII";
	char N8[] = "VIII";
	char N9[] = "IX";
	char N10[] = "X";
	char N20[] = "XX";
	char N30[] = "XXX";
	char N40[] = "XL";
	char N50[] = "L";
	char N60[] = "LX";
	char N70[] = "LXX";
	char N80[] = "LXXX";
	char N90[] = "XC";
	char N100[] = "C";

	/* entrada de dados */
	/* processamento */
	for(int i = 1; i <= 100; i++)
	{
		if(i < 10)
		{
			printf("%d\t%s", i);
		}
	}
	/* saída de dados */
}			//fim da função main.
