/* Faça um programa que leia dois números e mostre qual deles é o maior. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    int num1, num2, maior = 0;

    /* Entrada de dados */
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);

    /* Bloco de comandos */
    if(num1 > maior)
    {
        maior = num1;
    }
    if(num2 > maior)
    {
        maior = num2;
    }
    
    /* Saída de dados */
    printf("\nO maior numero: %d\n\n", maior);
    return 0;
}
/* Fim do código */