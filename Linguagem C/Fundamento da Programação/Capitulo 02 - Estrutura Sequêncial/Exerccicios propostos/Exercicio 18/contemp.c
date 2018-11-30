/*Programa conversão de temperatura*/
#include <stdio.h>
#include <stdlib.h>
main()
	{
		/*Declare a variavel*/
		float C , F;
		/*Entrada de dados*/
		printf("Programa de conversao de temperarura C/F.\n\n");
		printf("Digite uma temperatura: ");
		scanf("%f", &C);
		/*Bloco de comando*/
		F = ((9 * C) + (32 * 5)) / 5;
		/*Saida de dados*/
		printf("A temperatura convertida e %.2f F.\n\n", F);
		/*Fim do codigo*/
        system("pause");
        return 0;
	}