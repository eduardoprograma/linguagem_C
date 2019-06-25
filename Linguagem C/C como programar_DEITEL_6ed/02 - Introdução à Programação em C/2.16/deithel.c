/*Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e imprima a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números.*/

#include <stdio.h>
#include <stdlib.h>

#define SOMA (x + y)
#define PRODUTO (x * y)
#define DIFERENCA (x - y)
#define QUOCIENTE (x / y)
#define MODULO (x % y)

/*Inicio do código*/
int main(void)
{
    /*Declaração das variáveis*/
    int x = 0, y = 0;

    /*entrada de dados*/
    printf("Digite um n%cmero inteiro: ", 163);
    scanf("%d", &x);
    printf("Digite outro n%cmero inteiro: ", 163);
    scanf("%d", &y);

    /*Bloco de comandos*/
    printf("Soma: %d\n", SOMA);
    printf("Produto: %d\n", PRODUTO);
    printf("Diferen%ca: %d\n", 135, DIFERENCA);
    printf("Quociente: %d\n", QUOCIENTE);
    printf("Resto da Divis%co: %d\n", 198, MODULO);
}
/*fim do código*/