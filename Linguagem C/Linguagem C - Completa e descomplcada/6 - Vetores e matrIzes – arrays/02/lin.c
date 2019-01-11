/* Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa. */
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 6
/* inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int vet[NUMERO];
    int i;

    /* bloco de comandos */
    for(i = 0; i <= 5; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &vet[i]);
    }

    /* bloco de saída */
    printf("Os numeros digitados foram:");
    for(i = 5; i >= 0; i--)
    {
        if(i > 0)
        {
            printf(" %d,", vet[i]);
        }
        else
        {
            printf(" %d.\n\n", vet[i]);
        }
    }
    return 0;
}
/* fim do código */