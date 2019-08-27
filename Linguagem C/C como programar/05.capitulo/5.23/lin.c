//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.23 	Tempo em segundos. 
	Escreva uma função que considere a hora como três argumentos inteiros (horas, minutos e segundos) e retorne o número de segundos desde a última vez em que o relógio ‘bateu 12 horas’. Use essa função para calcular a quantidade de tempo em segundos entre duas horas, ambas dentro de um ciclo de 12 horas do relógio. */

#include <stdio.h>

int Segundos(int hora, int minutos, int segundos);			//Protótipo da função.

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	int H, Min, Seg;

	/* entrada de dados */
	printf("Digite o tempo marcado no relogio, no formato Hora, Minuto e segundo.\nSeparados por espaco: ");
	scanf("%d%d%d", &H, &Min, &Seg);

	/* processamento */
	while (H != -1)
	{
		printf("Os segundos qu constitui o intervalo de %d:%d:%d, e de %d_s.\n\n", H, Min, Seg, Segundos(H, Min, Seg));
		printf("Digite o tempo marcado no relogio, no formato Hora, Minuto e segundo.\nH = -1 encerra a sessao).\nSeparados por espaco: ");
		scanf("%d%d%d", &H, &Min, &Seg);
	}
	
	/* saída de dados */
}			//fim da função main.

int Segundos(int hora, int minutos, int segundos)		//Cálcular os segundos.
{
	int Hhora = 3600;
	int Mminutos = 60;
	int Cal_Segundos;

	if(hora <= 12)			//Estabelencendo um controle.
	{
		Cal_Segundos = (Hhora * hora) + (Mminutos * minutos) + segundos;
		return Cal_Segundos;
	}
	else
	{
		printf("Digite uma hora no intervalo de 12 Horas.\n\n");
	}
}