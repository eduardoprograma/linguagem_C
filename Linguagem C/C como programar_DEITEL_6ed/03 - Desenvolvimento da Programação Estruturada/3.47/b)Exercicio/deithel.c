/*b) Escreva um programa que calcule o valor da constante matemática e usando a fórmula: e = 1 + 1/1! + 1/2!+ ...*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    float dividendo = 1, divisor = 0, resultado = 1, result  = 1;
    int i = 0;

    /*Bloco de comandos*/
    while(i < 100)
    {
        i++;
        divisor++;
        result *= divisor;
        //printf("divisor: %.2f\n", divisor);   //Teste
        //printf("Fatorial: %.2f\n", result);   //Teste
        resultado += dividendo / result;
        printf("Numero de operacao: %d\nResultado: %.3f\n\n", i, resultado);
        //system("pause");                      //Teste
    }
    return 0;
}
/*Fim do código*/