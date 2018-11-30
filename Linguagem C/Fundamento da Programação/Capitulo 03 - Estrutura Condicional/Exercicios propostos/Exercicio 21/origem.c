/*Programa Origens*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	/*Declaração das varáveis*/
	int cod;	//codigo do produto para determinar sua origem
	float prec;		//Preço do produto
	char city[22];	//Nome das regiões
	/*Entrada de dados*/
	printf("Programa ORIGENS.\n\n");
	printf("Digite o valor: $");
	scanf("%f", &prec);
	printf("Digite o código: ");
	scanf("%d", &cod);
	/*Bloco de comando*/
	printf("\n\n");
	if(cod == 1){   //Selção da região
		strcpy(city, "Sul");
	}
	else if(cod == 2){
		strcpy(city, "Norte");
	}
	else if(cod == 3){
		strcpy(city, "Leste");
	}
	else if(cod == 4){
		strcpy(city, "Oeste");
	}
	else if(cod == 5 || cod == 6){
		strcpy(city, "Nordeste");
	}
	else if(cod == 7 || cod == 8 || cod == 9){
		strcpy(city, "Sudeste");
	}
	else if(cod >= 10 && cod <= 20){
		strcpy(city, "Centro-Oeste");
	}
	else if(cod >= 21 && cod <= 30){
		strcpy(city, "Noroeste");
	}
	else{
		printf("Area nao cadstrada\n\n");
	}
	/*Saida de dados*/
	if(cod >=1 && cod <= 30){
		printf("Este produto vem da Região %s\n\n", city);
	}
	else{
		printf("Reinicie\n\n");
	}
	/*FIM DE CÓDIGO*/
    system("pause");
    return 0;
}