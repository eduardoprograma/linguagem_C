/*Programa que calcula a hipotenusa*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
	{
		/*Declarar variaveis*/
		float a, b, c;
		/*Entrada dedaos*/
		printf("Programa para calculo da hipotenusa.\n\n");
		printf("Digite o valor do cateto oposto: ");
		scanf("%f", &a);
		printf("Digite o cateto adjacente: ");
		scanf("%f", &b);
		/*Bloco de comando*/
		c = sqrt(pow(a, 2) + pow(b, 2));
		/*Saida de dados*/
		printf("\nO calculo da hipotenusa para este trangulo e %.2f\n\n", c);
		/*Fim do codigo*/
        system("pause");
        return 0;
	}