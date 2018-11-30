/*Programa de calculo de angulo*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare a variavel*/
	int a1, a2, a3;
	/*Entrada de dados*/
	printf("Calculo de angulo\n\n");
	printf("Digite o primerio angulo: ");
	scanf("%d", &a1);
	printf("Digite o segundo angulo: ");
	scanf("%d", &a2);
	/*Bloco de comando*/
	a3 = 180 - (a1 + a2);
	/*Saida de dados*/
	printf("\nO valor do terceiro angulo e %d.\n\n", a3);
	/*Fim do codigo*/
    system("pause");
    return 0;    
}