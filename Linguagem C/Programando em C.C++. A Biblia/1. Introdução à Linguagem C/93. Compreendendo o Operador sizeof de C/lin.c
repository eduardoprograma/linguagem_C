//Programa: lin.c
//Escrito por: Eduardo Felizardo Cândido
//Data de criação: 14/06/2019

/* Quando seus programas declaram uma variável, o compilador C aloca memória para armazenar o valor da variável. Ao escrever programas que efetuem operações de entrada/saída ou aloquem memória para as listas dinâmicas, ver que conveniente saber a quantidade de memória que seu programa alocou para uma variável específica. O operador sizeof de C retorna o número de bytes que uma vari vel ou tipo requer. O programa a seguir, sizeof c, ilustra o uso do operador sizeof: */

#include<stdio.h>

int main(void)
{
    printf("As variáveis do tipo int usam %d bytes\n", sizeof(int)); 
    printf("As variáveis do tipo float usam %d bytes\n", sizeof(float)); 
    printf("As variáveis do tipo double usam %d bytes\n", sizeof(double)); 
    printf("As variáveis do tipo unsigned usam %d bytes\n", sizeof(unsigned));
    printf("As variáveis do tipo unsigned int usam %d bytes\n", sizeof(unsigned int)); 
    printf("As variáveis do tipo long usam %d bytes\n", sizeof(long));
}

/* Dependendo do seu computador e do hardware do sistema, a saída produzida pelo programa sizeof poderá ser diferente. Quando você usar o Turbo C++ Lite, o programa exibirá o seguinte:
As variáveis do tipo int usam 2 bytes 
As variáveis do tipo float usam 4 bytes 
As variáveis do tipo double usam 8 bytes 
As variáveis do tipo unsigned usam 2 bytes 
As variáveis do tipo long usam 4 bytes */