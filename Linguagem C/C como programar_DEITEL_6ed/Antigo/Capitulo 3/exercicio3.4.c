#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"Portuguese");
	int soma, x;
	
	//inicializa��o
	x =1;
	soma = 0;
	
	//desenvolvimento
	soma = soma + x;
	
	printf("A soma � %d", soma);
	
	return 0;
}
