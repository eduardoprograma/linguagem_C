/*Programa Categoria para natação*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	/*Declaração de variáveis*/
	int ida;	 		//Idade
	char cat[22];    	// categorias
	/*Entrada de dados*/
	printf("Categoria para equipes de natação.\n\n");
	printf("Digite a idade: ");
	scanf("%d", &ida);
	/*Bloco de comando*/
	if(ida >= 5 && ida <= 7){
		strcpy(cat, "Infantil");
	}
	else if(ida >= 8 && ida <= 10){
		strcpy(cat, "Juvenil");
	}
	else if(ida >= 11 && ida <= 15){
		strcpy(cat, "Adolescente");
	}
	else if(ida >= 16 && ida <= 30){
		strcpy(cat, "Adulto");
	}
	else{
		strcpy(cat, "Senior");
	}
	/*Saída de dados*/
	printf("A categoria do participante: %s\n\n", cat);
	/*FIM DO CÓDIGO*/
    system("pause");
    return 0;
}