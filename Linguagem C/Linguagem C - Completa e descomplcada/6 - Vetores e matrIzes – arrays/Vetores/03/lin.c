/* Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores. */
#include <stdio.h>
#include <stdlib.h>
#define NUMERO 5
/*inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int vet[NUMERO];
    int i, media = 0, soma = 0;

    /* bloco de comandos */
    for(i = 0; i <= 4; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    /* bloco de saída */
    printf("Os numeros digitados foram:");
    for(i = 0; i <= 4; i++)
    {
        if(i < 4)
        {
            printf(" %d,", vet[i]);
        }
        else
        {
            printf(" %d.\n\n", vet[i]);
        }
    }
    media = soma / 5;
    printf("A media da soma dos numeros e: %d\n\n", media);
    return 0;
}/*fim do código */