//Programa: lin.c
//escrito por: Eduardo Felizardo Cândido
//Data de Criação: 12/06/2019

/*Na Dica 65 você aprendeu a formatar um valor inteiro colocando o número desejado de dígitos imediatamente após o % no especificador de formato %d. Usando uma técnica similar, printf lhe permite formatar a saída em ponto flutuante. Quando você formata um valor em ponto flutuante, especifica dois valores. O primeiro valor diz a printf o número mínimo de caracteres que você quer exibir. O segundo valor diz a printf o número de dígitos que você quer que sejam exibidos à direita do ponto decimal. O programa a seguir, lin.c, ilustra como formatar valores em ponto flutuante usando printf.*/

#include <stdio.h>

int main(void)
{
    float valor = 1.23456;

    printf ("%8.1f\n", valor);
    printf ("%8.3f\n", valor);
    printf ("%8.5f\n", valor);
}