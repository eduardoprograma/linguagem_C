//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.29	Máximo divisor comum. 
	O máximo divisor comum (MDC) de dois inteiros é o maior inteiro que divide cada um dos dois números sem deixar resto. Escreva a função mdc que retorna o máximo divisor comum de dois inteiros. */

#include <stdio.h>
#include <stdlib.h>

int MDC(int n1, int n2); 		//Protótipo da função MDC.
int Primo(int x);			//Protótipo da função Primo.

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int n1, n2;

	/* entrada de dados */
	printf("Digite dois numeros inteiros: ");
	scanf("%d%d", &n1, &n2);
	goto primeiro;
	/* processamento */
	while(n1 != -1)
	{
		/* Só da segunda vez terá essa chamada */
		printf("Digite o segundo numero interio: ");
		scanf("%d", &n2);

		/* Só chama na primeira vez */
		primeiro:
		printf("Agora saberemos o MDC destes numeros.\n\n");
		printf("O MDC de (%d, %d) e %d.\n\n", n1, n2, MDC(n1, n2));
		printf("Digite o primeiro numero interio(-1 para encerrar): ");
		scanf("%d", &n1);
	}
	/* saída de dados */
}			//fim da função main.

/* Inicio da função MDC */
int MDC(int fatora1, int fatora2)
{
	/* Declaração de varáveis */
	int x = 0, controle = 0;
	int MuDivCom1, MuDivCom2, mdc = 1;
	
	
	/* Módulo de fatoração */
	do
	{
		/* Moderador */
		if(x > 1)
		{
			/* Define os 0 da operação */
			MuDivCom1 = fatora1 % Primo(x);
			MuDivCom2 = fatora2 % Primo(x);

			if((MuDivCom1 == 0) && (MuDivCom2 == 0))
			{
				mdc *= Primo(x);
				fatora1 = fatora1 / Primo(x);
				fatora2 = fatora2 / Primo(x);
				controle++;
			}
			else 
			{
				if(MuDivCom1 == 0)
				{
					fatora1 = fatora1 / Primo(x);
					controle++;
				}
				if(MuDivCom2 == 0)
				{
					fatora2 = fatora2 / Primo(x);
					controle++;
				}
			}
			if(controle == 0)
			{
				x++;
			}
			controle = 0;
			if(fatora1 == 1 || fatora2 == 1)
			{
				x++;
			}
			if(Primo(x) == 1)
			{
				x++;
			}
		}
		else
		{
			x++;
		}
		printf("contador %d\n", x);
		system("pause");
	}while(fatora1 != 1 && fatora2 != 1);

	/* Saída de dados */
	return mdc;
}

/* Numeros primos */
int Primo(int x)
{
	/* Declaração de varáveis */
	int primo, div;
	int i, contador = 0;

	/* */
	for(i = 1; i <= x; i++)
	{
		div = x % i;

		/* Condição */
		if(div == 0)
		{
			contador++;
		}
	}
	if(contador == 2)
	{
		printf("Retorno %d\n", x);
		return x;
	}
	else
	{
		printf("Retorno %d\n", 1);
		return 1;
	}
}