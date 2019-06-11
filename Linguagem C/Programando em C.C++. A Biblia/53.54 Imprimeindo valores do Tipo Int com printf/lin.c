//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 11/06/2016

/*A função printfsuporta especificadores de formato que oferecem a p rin tf nformações sobre seus tipos de parâmetros (tais como int, float, char e. assim por diante). Para exibir valores do tipo int com printf, use o especificador de formato %d O programa a seguir, intsai.c, usa o especificador de formato % dpara exibir valores e variáveis do tipo int:*/
#include<stdio.h>

int main(void)
{
    int idade = 41;
    int altura = 182;
    int peso = 80;

    printf("\n\nIdade do usuario: %d peso: %d altura: %d\n",idade, peso, altura);
    printf("%d mais %d igual a %d\n", 1, 2, 1+2);
}