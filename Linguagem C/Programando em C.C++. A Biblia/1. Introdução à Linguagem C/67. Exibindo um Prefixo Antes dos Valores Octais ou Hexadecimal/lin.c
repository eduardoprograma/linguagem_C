//Porgrama: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*Na Dica 55 você aprendeu como usar o especificador de formato %o para exibir valores octais, e os especificadores de formato %x e % Xpara exibir valores hexadecimais. Quando seus programas apresentam esses valores, algumas vezes você pode querer preceder os valores octais com um zero (por exemplo, 0777), e os hexadecimais com Ox (por exemplo, OxFF).
Para instruir printfz preceder um valor octal ou hexadecimal com o prefixo apropriado, coloque um sinal de cerquinha (#) imediatamente após o % no especificador de formato. O programa a seguir, exibe_oh.c, ilustra o uso do caractere # no especificador de formato de printf:*/

#include<stdio.h>

int main(void)
{
    int valor = 255;

    printf("O valor decimal %d em octal é %#o\n", valor, valor);
    printf("O valor decimal %d em hexadecimal é %#x\n", valor, valor);
    printf("O valor decimal %d em hexadecimal é %#X\n", valor, valor);
}