/* Faça um programa que leia uma string e a imprima de trás para a frente. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* inicio do código */
int main()
{
    /* declaração de variáveis */
    char str[100];
    int i = 0;

    /* entrada de dados */
    printf("Digite uma palavra: ");
    gets(str);

    /* saida de dados */
    for(i = strlen(str) - 1; i > -1; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
/* fim do código */
