/*Programa Calculo de peso*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	/*Declaração de variáveis*/
	float peso, h;
	char sexo[11];
    int aux;
	/*Entrada de dados*/
	printf("Programa 'Peso leve'.\nDigite:\n1 - Masculino\n2 -dFeminino\n\n");
	printf("Digite o sua altura: ");
	scanf("%f", &h);
	printf("Digite o sexo: ");
	scanf("%d", &aux);
	/*Bloco de comando*/
    switch (aux)
    {
        case 1:
            strcpy(sexo, "Masculino");
		    peso = (72.7 * h) - 58;
            break;
        case 2:
            strcpy(sexo, "Feminino");
		    peso = (62.1 * h) - 44.7;
            break;
        default:
			printf("Opção sexo invalido. Digite 1 ou 2\n");
            break;
    }
	/*Saída de dados*/
	if(aux == 1 || aux == 2){
		printf("Sendo voce do sexo %s e com altura de %.2f o seu peso deve ser %.2f kg\n\n", sexo, h, peso);
	}
	else
	{
		printf("Inicie o programa novamente\n\n");
	}
	
	/*FIM DO CÓDIGO*/
    system("pause");
    return 0;
}