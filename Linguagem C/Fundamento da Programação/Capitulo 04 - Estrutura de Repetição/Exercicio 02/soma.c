/*Programa Soma*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare as varáveis*/
	float S, n;				//Resultado da soma
	/*Entrada de dados*/
	printf("Programa Soma.\n\n");
	printf("Digite um numero: ");
	scanf("%f", &n);
	/*Saída de dados*/
	while(n != -1){
		S = 1 + ((1/2) + (1/3) + (1/4) + (1/5) + (1/6) + (1/7) + (1/8) + (1/9) + (1/n));
		printf("O valor da soma e :%.2f\n\n", S);
		printf("Digite um numero: ");
		scanf("%f", &n);
	}
	/*Fim do código*/
    system("pause");
    return 0;
}