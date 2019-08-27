#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome[60];
    printf("Digite um nome: ");
    gets(nome);
    printf("O nome digitado foi: %s\n", nome);
    printf("Digite um nome: ");
    scanf("%s", nome);
    printf("O nome digitado foi: %s", nome);
    return 0;
}