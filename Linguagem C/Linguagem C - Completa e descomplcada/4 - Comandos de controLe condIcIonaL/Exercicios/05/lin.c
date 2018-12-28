/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado. 
• A raiz quadrada do número digitado. */
#include <stdio.h>
#include <math.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    float num;
    int d = 0;
    float raiz = 0, expo = 0;

    /* Entrada de dados */
    printf("Degite um numero inteiro: ");
    scanf("%f", &num);

    /* Bloco de comandos */
    d = (int)num % 2;
    if(d == 0)
    {
        expo = pow(num, 2);
        raiz = sqrt(num);
    }
    else
    {
        printf("O numero nao e positivo.\n\n");
    }
    if(d == 0)
    {
        printf("\nA raiz do numero %.0f: %.2f\nO numero %.0f elevado ao quadrado: %.2f\n\n", num, raiz, num, expo);        
    }
    return 0;
}
/* fim do código */