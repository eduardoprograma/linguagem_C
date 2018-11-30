/*Programa que mostra o número menor*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare as varáveis*/
	int n1, n2;
	/*Entrada de dados*/
	printf("Programa mostra o numero menor.\n\n");
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite um numero: ");
	scanf("%d", &n2);
	/*Bloco de comando*/
	/*Saída de dados*/
	if(n1 > n2){
		printf("O numero menor e %d.\n\n", n2);
	}
	else if(n1 < n2){
		printf("O numero menor e %d.\n\n", n1);
	}
	/*Fim do código*/
    system("pause");
    return 0;
	}