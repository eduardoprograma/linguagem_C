/* Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela possui. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* inicio do código */
int main()
{
    /* declaração de variaveis */
    char str[100];
    int contCaracter = 0;

    /* entrada de dados */
    printf("Digite uma palavra: ");
    gets(str);

    /* saida de dados */
    while(str[contCaracter] != '\0')
    {
        contCaracter++;
    }
    printf("A palavra %s possui %i caracteres\n", str, contCaracter);
    return 0;
}
/* fim do código */