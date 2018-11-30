/*Programa para calculoa de iluminação*/
#include <stdio.h>
#include <stdlib.h>
main()
	{
		/*Declaração de variáveis*/
		float L1, L2, A, MQ = 18.00, L;
		/*Entrada de dados*/
		printf("Programa para calculo de iluminação de um ambiente\n\n");
		printf("Digite o primeiro lado do ambiente: ");
		scanf("%f", &L1);
		printf("Digite o segundo lado do ambiente: ");
		scanf("%f", &L2);
		/*Bloco de comando*/
		A = L1 * L2;
		L = A * MQ;
		/*Saída de dados*/
		printf("A iluminação para esse ambiente deve antender a %.2f Watts.\n\n", L);
		/*Fim de codigo*/
        system("pause");
        return 0;
	}