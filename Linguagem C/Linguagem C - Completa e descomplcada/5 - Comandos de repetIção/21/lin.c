/* Escreva um programa que leia certa quantidade de números, imprima o maior deles e quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo usuário. */
#include<stdio.h>

/* Inicio do código */
int main(void)
{
    /* declaração de variáveis*/
    int N = 0;
    int i = 0;
    int maior = 0;

    /* entrada de dados */
    entrada:
    printf("Digite um numero inteiro: ");
    scanf("%d", &N);
    maior = N;

    /* bloco de comandos */
    while(N != -1)
    {
        if(N >= maior)
        {
            maior = N;
            if(maior == N)
            {
                i++;
            }
        }
        printf("Digite um numero inteiro (-1 para encerrar): ");
        scanf("%d", &N);
    }
    printf("O numero maior: %d\nEste e contado %d vezes\n\n", maior, i - 1);
    printf("Voce deseja continuar?\n");
    printf("Digite um 1 para continuar e 2 para encerrar: ");
    scanf("%d", &N);
    if(N == 1)
    {
        goto entrada;
    }
    else
    {
        return 0;
    }
}
/* Fim do código */