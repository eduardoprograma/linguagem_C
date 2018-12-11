/*Obtenha um inteiro contendo apenas 0s e 1s (i.e., um inteiro "binário") e imprima seu valor equivalente na base dez. (Sugestão: Use os operadores resto e divisão para selecionar um a um os dígitos do número "binário", da direita para a esquerda. Da mesma forma que o sistema decimal de numeração onde o dígito da extremidade direita tem um valor posicional 1 e o dígito imediatamente à sua esquerda tem um valor posicionai 10, e depois 100 e depois 1000 etc, no sistema binário o dígito da extremidade direita tem o valor posicionai 1, o dígito imediatamente à sua esquerda tem o valor posicionai 2, e depois 4, e depois 8 etc. Assim, o número 234 pode ser interpretado como 4*1+3*10 + 2*100. O equivalente decimal do binário 1101 é 1 * 1 + 0*2 + 1*4+1*8 ou 1+0 + 4 + 8 ou 13.)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
 
int main(void) 
{
    /*Declaração de variáveis*/
	int valor, j = -1, sobra, novoValor = 0;

    /*Entrada de dados*/
    printf("Digite um numero binario: ");
	scanf("%d", &valor);
 
	//pega os dígitos da direita para a esquerda
    while(j < 9)
	{
        j++;
		sobra = valor - ((valor / 10)*10);
		//printf("%d\n", sobra);
		valor = valor / 10;
		novoValor += sobra * pow(2,j);
	}
	printf("Decimal: %d \n", novoValor);
 
	return 0;
}
/*Fim do código*/