//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2019

/*Na Dica 58 você aprendeu que, usando o especificador de formato %fi é possível instruir printf a exibir valores em ponto flutuante usando seus formatos em ponto decimal. Da mesma forma, na Dica 60, vimos que é possível usar os especificadores de formato %e e %E para instruir printfa exibir um valor em ponto flutuante usando um formato exponencial. De uma forma similar, p rin tf suporta os especificadores de formato %g e %G. Quando você usa esses especificadores de formato, printfdecide se deve usar o formato % fou %e, dependendo da técnica que exibirá a saída no formato mais significativo para o usuário. O programa a seguir, flt_pt.c, ilustra o uso do especificador de formato % g:*/

#include<stdio.h>

int main(void)
{
    printf("Exibir 0.1234 resulta em %g\n", 0.1234);
    printf("Exibir 0.00001234 resulta em %g\n", 0.00001234);
}