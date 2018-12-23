/* Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar. */
#include <stdio.h>

/* Inicio de código */
int main(void)
{
    /* Declaração de variáveis */
    int num, par = 0, impar = 0, verifica = 0;

    /* Entrada de dados */
    printf("Digite um numero interio: ");
    scanf("%d", &num);

    /* Bloco de comandos */
    verifica = num % 2;
    if(verifica == 0)
    {
        printf("Numero e par.\n\n");
    }
    else
    {
        printf("Numero e impar.\n\n");
    }
    return 0;
}
/* fim do código */