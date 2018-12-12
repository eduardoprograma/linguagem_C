/*O fatorial de um inteiro não-negativo n é escrito n! (lido como "fatorial de n") e é definido da seguinte maneira: 
n! = n-(n — l)*(n — 2)
1 (para valores de n maiores que ou iguais a 1) e
n! = 1 (para n = 0). 
Por exemplo, 5! = 5*4*3*2*1 que é 120. 
a) Escreva um programa que leia um inteiro não-negativo e depois calcule e imprima seu fatorial. 
b) Escreva um programa que calcule o valor da constante matemática e usando a fórmula: e = 1 + 1/1! + 1/2!+ ...
c) Escreva um programa que calcule o valor de x usando a fórmula e^(x = 1 + x/1! + x*x/2! + (X*X*X)/3!)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as varáveis*/
    int fat = 1, numero = 0;
    int fatorial = 1;

    /*Entrada de dados*/
    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &numero);

    /*Bloco de comandos*/
    while(numero > 1)
    {
        fat = fat * numero;
        //printf("Fat %d, fatorial %d\n", fat);     //Teste
        --numero;
    }
    printf("\nFatorial calculado: %d\n", fat);
    system("pause");
    return 0;
}
/*Fim do código*/