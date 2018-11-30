/*Programa teste senha*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declaração de varáveis*/
	int senha;
	/*Entradede dados*/
	printf("Só poderá acessar o sistema se a senha corresponder\n\n");
	printf("Digite sua senha de 4 digitos: ");
	scanf("%d", &senha);
	/*Bloco de comando*/
	printf("\n\n");
	/*Saida de dados*/
	if(senha == 4531){
		printf("Acesso permitido.\n\n");
	}
	else{
		printf("Acesso negado.\n\n");
	}
	/*Fim do código*/
    system("pause");
    return 0;
}