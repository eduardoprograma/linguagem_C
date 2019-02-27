/* Faça um programa que leia uma string e imprima as quatro primeiras letras dela. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* inicio do código */
int main()
{
    /* declaração de variáveis */
    char str[50];
    setbuf(stdin, NULL);

    /* entrada de dados */
    printf("Digite uma palavra: ");
    fgets(str, 5, stdin);

    /* saida de dados */
    printf("\n\n");
    printf("%s", str);
    printf("\n\n");
}
/* fim do código */