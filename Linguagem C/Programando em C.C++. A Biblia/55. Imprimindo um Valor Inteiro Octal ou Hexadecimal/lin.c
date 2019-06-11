//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*A função p rin tf suporta especificadores de formato que oferecem a printf'informações sobre seus tipos de parâmetros (tais como int, float, chart assim por diante). Dependendo do seu programa, algumas vezes você pode querer exibir um valor inteiro em seu formato octal (base 8) ou hexadecimal (base 16). O especificador de formato %o (letra o, não zero) instrui printf a exibir um valor em octal. De uma forma similar, os especificadores %xe % A-instruem prin tf a exibir um valor no formato hexadecimal. A diferença entre %x e %X é que o último exibe valores hexadecimais em maiúsculas. O programa a seguir, oct_hexa.c, ilustra o uso dos especificadores de formato %o, %x e %X:*/

#include<stdio.h>

int main(void)
{
    int valor = 255;

    printf("O valor decimal %d em octal e %o\n", valor, valor);
    printf("O valor decimal %d em hexadecimal e %x\n", valor, valor);
    printf("O valor decimal %d em hexadecimal e %X\n", valor, valor);
}