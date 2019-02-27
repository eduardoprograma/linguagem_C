/* Faça um programa que leia uma string e a imprima na tela. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* inicio do código */
int main()
{
    /* declaração de variaveis */
    char nome[50];

    /* entrada de dados */
    printf("Digite seu nome: ");
    gets(nome);

    /* saida de dados */
    printf("\n\n\n");
    printf("Ola %s", nome);
    return 0;
}
/* fim do código */