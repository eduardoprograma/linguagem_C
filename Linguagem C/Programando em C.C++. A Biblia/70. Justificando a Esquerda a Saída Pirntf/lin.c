//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 12/06/2019

/* Por padrão, quando você exibir o texto usando os caracteres de formatação, printf exibirá o texto justificado à direita. Dependendo do seu programa, algumas vezes você pode querer que printf'justifique o texto à esquerda. Para justificar texto à esquerda, coloque um sinal de subtração (-) imediatamente após o % no especificador de formato. O programa a seguir, esquerda.c, ilustra o uso do sinal de subtração para justificar o texto à esquerda:*/

#include <stdio.h>

int main(void)
{
    int int_valor = 5;
    float flt_valor = 3.33;

    printf("Justificado à direita %5d valor\n", int_valor);
    printf("Justificado à esquerda %-5d valor\n", int_valor);
    printf("Justificado à direita %7.2f valor\n", flt_valor);
    printf("Justificado à esquerda %-7.2f valor\n", flt_valor);
}