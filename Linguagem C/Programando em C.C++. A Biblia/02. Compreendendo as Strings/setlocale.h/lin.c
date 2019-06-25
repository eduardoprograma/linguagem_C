// Programa: lin.c 
// Escrito por: Eduardo Felizardo Cândido
// Data de criação:  25/06/2019
// Propósito: testar o setlocale da biblioteca

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brasil.1252");

    char string[] = "";

    printf("Digite uma palavra com acento: ");
    gets(string);

    printf("%s", string);

    return 0;
}