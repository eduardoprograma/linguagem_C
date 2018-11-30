/*Programa Teste*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declaração das varáveis*/
	int N = 1000, R = 0, p = 0, n = 0, cinco=0, ncinco = 0;
	while(N >= 1000 && N < 2000){
		N++;
		if(1000 < N && N <= 2000){
			p++;
			R = N % 11;
		}
		else{
			n++;
			printf("Digite um número válido.\n\n");
		}
		/*Saída de dados*/
		if(R == 5){
			cinco++;
			printf("O resto do número e %d\n\n", R);
		}
		else{
			ncinco++;
			printf("Este número não tem resto = 5\n");
			printf("Tente novamente.\n\n");
		}
	}
	/*Saída de dados*/
	printf("Numero de ações positivas: %d\n", p);
	printf("Numero de ações negativas: %d\n", n);
	printf("Numero de vezes que o modulo 5 aparece: %d\n", cinco);
	printf("Numero de vezes que o modulo 5 aparece: %d\n", ncinco);
	/*Fim de comando*/
    system("pause");
    return 0;
}