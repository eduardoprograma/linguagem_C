/*Programa Desconto*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declarção de varaveis*/
	float prec, desc, pNew;
	/*Entrada de dados*/
	printf("Programa 'Desconto.\n\n");
	printf("Digite o valor : $");
	scanf("%f", &prec);
	/*Bloco de comando*/
	if(prec <= 30){
		desc = 0.0;
		pNew = prec - (prec * desc);
	}
	else if(prec > 30 && prec <= 100){
		desc = 0.1;
		pNew = prec - (prec * desc);
	}
	else{
		desc = 0.15;
		pNew = prec - (prec * desc);
	}
	/*Saida de dados*/
	printf("Valor a ser pago: $%.2f\n\n", pNew);
	/*Fim do código*/
    system("pause");
    return 0;
}