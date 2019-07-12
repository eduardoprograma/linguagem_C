//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.22 	Separando dígitos. 
	Escreva segmentos de programa que realizem, cada um, o seguinte:
		a) O cálculo da parte inteira do quociente quando o inteiro a é dividido pelo inteiro b.
		b) O cálculo do módulo inteiro quando o inteiro a é dividido pelo inteiro b.
		c) Use as partes do programa desenvolvidas em a) e b) para escrever uma função que peça um inteiro entre 1 e 32767 e o imprima como uma série de dígitos, com dois espaços entre cada dígito. Por exemplo, o inteiro 4562 deverá ser impresso como: */

#include <stdio.h>

int divisor(int dividendo, int divisor);			/* Protótipo da função */
int modulo(int dividendo, int divisor);			/* Protótipo da função */
int digitos();			/* Protótipo da função */

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int dividendo, diviso;
	int selecao1, opcao;

	/* entrada de dados */
	printf("Digite um dividendo inteiro: ");
	scanf("%d", &dividendo);
	printf("Digite um divisor inteiro: ");
	scanf("%d", &diviso);

	/* processamento */
	while(dividendo != -1 || diviso != 0)
	{
		printf("Se quiser fazer a operacao completa digite 1. Se nao digite 2: ");
		scanf("%d", &selecao1);

		if(selecao1 == 1)		//Modulo completo.
		{
			printf("A quociente e %d.\n", divisor(dividendo, diviso));
			printf("O modulo e %d.\n", modulo(dividendo, diviso));
			digitos();
		}
		else			//Modular.
		{
			printf("Opcoes:\n1.Divisao.\n2.Calculo do modulo.\n3.Digitos.\n");
			printf("Digite uma opcao: ");
			scanf("%d", &opcao);
			switch (opcao)
			{
			case 1:
				printf("A quociente e %d.\n", divisor(dividendo, diviso));
				break;
			
			case 2:
				printf("O modulo e %d.\n", modulo(dividendo, diviso));
				break;
			
			case 3:
				digitos();
				break;

			default:
				printf("Digite uma opcao valida: '1, 2, 3'.n");
				break;
			}
		}
		printf("Digite um dividendo inteiro (-1 para encerrar): ");
		scanf("%d", &dividendo);
		printf("Digite um divisor inteiro (0 para encerrar): ");
		scanf("%d", &diviso);
	}
	/* saída de dados */
}			//fim da função main.

int divisor(int dividendo, int divisor)			//Cálculo da parte inteira do quociente quando o inteiro a é dividido pelo inteiro b.
{
	int quociente;

	quociente = dividendo / divisor;

	return quociente;
}

int modulo(int dividendo, int divisor)			//Cálculo do módulo inteiro quando o inteiro a é dividido pelo inteiro b.
{
	int modular;

	modular = dividendo % divisor;

	return modular;
}

int digitos()			//Está função que peça um inteiro entre 1 e 32767 e o imprima como uma série de dígitos.
{
	int numero;
	int d1, d2, d3, d4, d5;
	printf("Digite um numero inteiro entre 1 e 32767: ");
	scanf("%d", &numero);

	/* Digitos */
	d1 = numero / 10000;
	d2 = (numero % 10000) / 1000;
	d3 = ((numero % 10000) % 1000) / 100;
	d4 = (((numero % 10000) % 1000) % 100) / 10;
	d5 = (((numero % 10000) % 1000) % 100) % 10;

	printf("Os digitos sao: %d %d %d %d %d.\n", d1, d2, d3, d4, d5);
	return 0;
}