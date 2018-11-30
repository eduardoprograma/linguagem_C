/*Programa divisão*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    /*Declaração de varpaveis*/
    float n1, n2, divi;
    /*Entrada de valores de variaveis*/
    printf("Bem vindo ao programa de divisao.\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    /*Bloco de comandos*/
    
    if (n2 != 0) {
        divi = n1 / n2;
        printf("O valor da diviao e %.2f\n\n", divi);
    }
    else
    {
        printf("O segundo numero não pode ser = 0\n");
    }
    printf("Fim do programa.\n\n");
    system("pause");
    return 0;
    /*Fim do codigo*/
}