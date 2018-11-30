/*Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e imprima a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números.*/

#include <stdio.h>
#include <stdlib.h>

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
    printf("Soma: %d\n", x + y);
    printf("Produto: %d\n", x * y);
    printf("Diferen%ca: %d\n", 135, x - y);
    printf("Quociente: %d\n", x / y);
    printf("Resto da Divis%co: %d\n", 198, x % y);
}
/*fim do código*/