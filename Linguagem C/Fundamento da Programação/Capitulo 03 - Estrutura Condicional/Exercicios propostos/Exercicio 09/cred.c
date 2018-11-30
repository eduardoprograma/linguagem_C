/*Programa de analise de crédito*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declare as varáveis*/
	/*SM = Saldo médio , VC = Valor do crédito*/
	float SM, A, VC;
	/*Entrada de dados*/
	printf("Programa analise de crédito.\n"
           "Apenas para saldos médios acima de $200.00.\n\n");
	printf("Digite o Saldo Médio: $");
	scanf("%f", &SM);
	/*Bloco de comandos*/
	if(SM > 200 && SM <= 300){
		A = 0.20;
		VC =SM + (SM * A);
	}
	else if(SM <= 400 && SM > 300){
		A = 0.25;
		VC =SM + (SM * A);
	}
	else{
		A = 0.30;
		VC =SM + (SM * A);
	}
	/*Saída de dados*/
	printf("Saldo Médio: $%.2f\n", SM);
	printf("Valor do crédito: $%.2f\n", VC);
	/*Fim do código*/
    system("pause");
    return 0;
}
