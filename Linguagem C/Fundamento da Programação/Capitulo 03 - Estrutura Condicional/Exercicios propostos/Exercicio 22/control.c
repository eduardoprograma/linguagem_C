/*Programa por controle de peso e idade*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declaração de variáveis*/
	int idade;              																				//Varável de seleção
	float peso;				            																	//Variável de seleção
	int i2060 = 0, i2069 = 0, i2090 = 0, i2560 = 0, i2569 = 0, i2590 = 0, i5060 = 0, i5069 = 0, i5090 = 0;	//Varíaveis de controle
	/*Entrada de dados*/
	printf("Programa 'Controle de Peso Baseado na idade'.\n\n");
	printf("Digite a idade : ");
	scanf("%d", &idade);
	/*Bloco de comando*/
	while(idade != -1){						//Qunado digitar -1 o programa é ancerrado
		printf("Digite o peso: ");
		scanf("%f", &peso);
		if(idade <= 20){						//Controle baseado na idade
			if(peso <= 60){
				i2060++;						//Controle por somador
			}
			else if(peso > 60 && peso <= 90){
				i2069++;
			}
			else{
				i2090++;
			}
		}
		else if(idade > 20 && idade <= 50){
			if(peso <= 60){
				i2560++;
			}
			else if(peso > 60 && peso <= 90){
				i2569++;
			}
			else{
				i2590++;
			}
		}
		else{
			if(peso <= 60){
				i5060++;
			}
			else if(peso > 60 && peso <= 90){
				i5069++;
			}
			else{
				i5090++;
			}
		}
		printf("Programa 'Controle de Peso Baseado na idade'.\n\n");
		printf("Digite a idade : ");
		scanf("%d", &idade);
	}
	/*Saída de dados*/
	printf("\n\n%8s\t%15s\t\n", "IDADE", "PESO");		            	//Saída em forma de tabela
    printf("%18s\t%s\t%s\t\n","> 60", "60 > e <= 90", "> 90");
	printf("%8s\t%1d\t%5d\t%10d\t\n","<= 20", i2060, i2069, i2090);
	printf("%s\t%d\t%5d\t%10d\t\n","> 20 e <= 50", i2560, i2569, i2590);
	printf("%8s\t%1d\t%5d\t%10d\t\n\n","> 50", i5060, i5069, i5090);
	/*Fim do código*/
    system("pause");
    return 0;
}