/*Programa Maior idade*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare varáveis*/
	int ida = 0;
	/*Entrada de dados*/
	printf("Programa de Conferência.\n\n");
	printf("Digite a idade: ");
	scanf("%d", &ida);
	/*Bloco de comando*/
	if(ida >= 18){
		/*Saída de dados*/
		printf("Maior de idade.\n\n");
	}
	else{
		/*Saída de dados*/
		printf("Menor de idade.\n\n");
	}
	/*Fim de código*/
    system("pause");
    return 0;
}