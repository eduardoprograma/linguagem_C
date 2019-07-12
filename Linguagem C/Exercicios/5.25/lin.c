//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.25 	Achar o mínimo. 
	Escreva uma função que retorne o menor de três números em ponto flutuante. */

#include <stdio.h>
#include <locale.h>

float menor(float n1, float n2, float n3);			//Protótipo da função

int main(void)		//inicio da função main.
{
	setlocale(LC_ALL, "Portuguese");		//Estou usando o VS_Code aqui não funciona.

	/* declaração das varáveis */
	float n1 = 0, n2 = 0, n3 = 0;
	
	/* Entrada de dados */
	printf("Digite o primeiro numero real (-1 encerra o processo): ");		//Entrada do primeiro número.
	scanf("%f", &n1);
	if(n1 == -1)		//Condição para encerrar o processo.
	{
		goto processo;
	}
	printf("Digite dois numeros reais: ");
	scanf("%f%f", &n2, &n3);
	
	/* Processamento */
	processo:			//Encerra o programa.
	while (n1 != -1)
	{
		printf("O menor número é %.2f\n\n", menor(n1, n2, n3));
		
		printf("Digite o primeiro numero real (-1 encerra o processo): ");		//Entrada do primeiro número.
		scanf("%f", &n1);
		if(n1 == -1)			//Condição para encerrar o processo.
		{
			goto processo;
		}
		printf("Digite dois numeros reais: ");
		scanf("%f%f", &n2, &n3);
	}
	
	/* saída de dados */
}			//fim da função main.

float menor(float n1, float n2, float n3)
{
	float menor;
	menor = n1;			//Inicialização da variável.

	if(n2 < menor)
	{
		menor = n2;
	}
	else if(n3 < menor)
	{
		menor = n3;
	}
	else
	{
		menor;
	}
	return menor;
}