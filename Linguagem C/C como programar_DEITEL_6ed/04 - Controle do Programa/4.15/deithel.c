/*A função fatorial é usada com freqüência em problemas de probabilidade. O fatorial de um número positivo n (escrito n! e pronunciado "fatorial de n") é igual ao produto dos inteiros positivos de 1 a n. Escreva um programa que calcule os fatoriais dos inteiros de 1 a 5. Imprima o resultado no formato de uma tabela. Que problema pode evitar que você possa calcular o fatorial de 20?*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int n, y, x;
    float fatorial = 1.0;

    /*Bloco de comando*/
    for(y = 1; y <= 5; y++)
    {
        for(x = 1; x <= y; x++)
        {
            fatorial *= x;
        }
        printf("Fatorial de %d e: %.0f\n", y, fatorial);
        fatorial = 1;
    }
    printf("\n");
    //Estudando até fatorial de 20.. Realmente a notação cientifica resolve o problema.
    for(y = 1; y <= 20; y++)
    {
        for(x = 1; x <= y; x++)
        {
            fatorial *= x;
        }
        printf("Fatorial de %d e: %.2e\n", y, fatorial);
        fatorial = 1;
    }
    system("pause");
    return 0;
}
/*Fim do código*/