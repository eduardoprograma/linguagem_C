//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 17/06/2019

/*Quando seus programas trabalharem com strings, algumas vezes você precisará copiar o conteúdo de uma string em outra string. Para lhe ajudar a realizar operações em strings de caracteres, a maioria dos compiladores C oferece uma função strcpy, que copia os caracteres em uma string (o parâmetro origem) em outra string (o parâmetro destino):

#include <string.h> 
char *strcpy(char *destino, const char *origem); 

A função strcpy retorna um ponteiro para o início da string de destino. O programa a seguir, strcpy.c, ilustra
como você usará a função strcpy dentro de seus programas. */

#include<stdio.h>
#include<string.h>

int main(void)
{
    char titulo[]="Biblia do Programador C/C++, do Jamsa!"; 
    char livro[128];

    strcpy(livro, titulo); 
    printf("Nome do livro %s\n", livro);
}

/*Para compreender melhor como a função strcpy funciona, considere a seguinte implementação:

char *strcpy(char *destino, const char *origem) 
{
    while (*destino++ = *origem++); 
    return(destino - 1);
}*/