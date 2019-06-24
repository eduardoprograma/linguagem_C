//Porigrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de Criação: 24/06/2019

#include<stdio.h>
#include<string.h>

int main(void)
{
    char nome[20];
    char letra;

    printf("Digite seu nome:");
    gets(nome);

    printf("%s", strset(nome, ' F'));

    return 0;
}