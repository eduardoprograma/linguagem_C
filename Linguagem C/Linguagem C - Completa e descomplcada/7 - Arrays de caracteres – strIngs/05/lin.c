/* Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável. Em seguida, imprima a string invertida. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* inicio do código */
int main()
{
    /* declaração de variáveis */
    char str[100];
    char str1[100];
    char C;
    int i, j = 0, tam = 0;

    /* entrada de dados */
    printf("Digite uma palavra: ");
    gets(str);

    /* saida de dados */
    tam =strlen(str);
    for(i = tam - 1; i >= 0; i--)
    {
        str1[j] = str[i];
        j++;
    }
    strcpy(str, str1);
    printf("%s", str);
    return 0;
}
/* fim do código */