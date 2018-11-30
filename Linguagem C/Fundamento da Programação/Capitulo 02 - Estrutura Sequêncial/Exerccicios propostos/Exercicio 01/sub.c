/*Programa que subtrai*/
#include <stdio.h>
#include <stdlib.h>
int main () {
    /*Declarração das variáveis*/
    int n1, n2, subtr;
    /*Entrada de valores de variáveis*/
    printf("Bem vindo ao programa de subtracao.\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    /*Bloco de comando*/
    subtr = n1 - n2;
    /*Saída dos valores*/
    printf("A subtracao entre %d e %d e igual a %d\n", n1, n2, subtr);
    system ("pause");
    return 0;
    /*Fim do código*/
}