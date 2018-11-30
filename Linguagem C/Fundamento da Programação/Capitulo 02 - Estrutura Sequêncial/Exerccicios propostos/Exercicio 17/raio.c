/*Programa de calculo do circulo*/
#include <stdio.h>
#include <stdlib.h>
main()
	{
		/*Declare a variavel*/
		float R, C, A, V;
		/*Entrada de dados*/
		printf("Programa calcula circulo.\n\n");
		printf("Digite o raio do circulo: ");
		scanf("%f", &R);
		/*Bloco de comandos*/
		C = 2 * 3.1415 * R;
		A = 3.1415 * R;
		V = 2.3561 * R;
		/*Saida de dados*/
		printf("\nA corda do circulo e %.2f\n", C);
		printf("A area do circulo e %.2f\n", A);
		printf("O volume do circulo e %.2f\n", V);
		/*Fim do codigo*/
        system("pause");
        return 0;
	}