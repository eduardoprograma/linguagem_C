/*Escreva um programa que fique imprimindo múltiplos de 2, ou seja, 2,4, 8, 16, 32,64 etc. Seu loop não deve terminar (i.e., você deve criai' um loop infinito). O que acontece quando esse programa é executado?*/
/*Resposta: Loop ifinito*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int x = 2, i = 0, potencia = 0;

    /*Bloco de comandos*/
    while(x > 0)
    {
        i++;
        potencia = pow(x, i);
        printf("%d\n", potencia);
    }
}
/*Fim do código*/