#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	int x;
	int produto, resultado;
	
	printf("Digite um n�meero:");
	scanf("%d", x);
	
	if (x == 5) {
		produto = ++x + x;
		printf("O produto �: %d\n", produto);
		printf("o resultado �: %d\n", resultado = ++x + x);
	}
	
	else
	{
		printf("digite um n�mero igual a 5:\n");
		scanf("%d", x);
	}
	
	return 0;
}
