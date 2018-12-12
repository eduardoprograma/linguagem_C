/*Escreva um programa que leia três valores float diferentes de zero e depois determine e imprima se eles podem representar os lados de um triângulo.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    float a, b, c;

    /*Entrada de dados*/
    printf("Digite 3 numeros reais para sabermos se estes podem ser lados de um triangulo: ");
    scanf("%f%f%f", &a, &b, &c);

    /*Bloco de comandos*/
    if(a != 0 && b != 0 && c != 0)
    {
        while(a != -1 || b != -1 || c != -1)
        {
            if(abs(b - c) < a < b + c)
            {
                printf("%.2f<%.2f<%.2f (VERDADEIRO)\n", abs(b - c), a, b + c);
            }
            if(abs(a - c) < b < a + c)
            {
                printf("%.2f<%.2f<%.2f (VERDADEIRO)\n", abs(a - c), b, a + c);
            }
            if(abs(a - b) < c < a + b )
            {
                printf("%.2f<%.2f<%.2f (VERDADEIRO)\n", abs(a - b), c, a + b);
            } 
            else
            {
                printf("(FALSO)\n");
            }
            printf("\n");
            printf("Digite 3 numeros reais para sabermos se estes podem ser lados de um triangulo (-1 para encerrar): ");
            scanf("%f%f%f", &a, &b, &c);
        }
    }
    system("pause");
    return 0;
}
/*Fim do código*/