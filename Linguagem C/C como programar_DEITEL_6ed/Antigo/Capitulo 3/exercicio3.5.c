#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int soma, x;
	
	//inicializa��o
	soma = 0;
	x = 1;
	
	//desenvolvimento
	while (soma < 10)
		{
			soma = soma + x;
		  	printf("A soma �: %d\n",soma);
		}				
	return 0;
}
