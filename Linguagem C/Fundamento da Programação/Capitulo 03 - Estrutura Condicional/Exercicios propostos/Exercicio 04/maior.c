/*Programa mostra maior número*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare as variáveis*/
	int a , b , c;
	/*Entrada de dados*/
	printf("Programa que mostra o maior numero.\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	printf("Digite o terceiro numero: ");
	scanf("%d", &c);
	/*Bloco de comando*/
	/*Saída de dados*/
	if(a > b && a > c){
		printf("O numero maior e %d.\n\n", a);
	}
	else if(b > a && b > c){
		printf("O numero maior e %d.\n\n", b);
	}
	else{
		printf("O numero maior e %d.\n\n", c);
	}
	/*Fim do código*/
    system("pause");
    return 0;
}