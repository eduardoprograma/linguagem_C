/* Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* decaração de variáveis */
    int maior = 0, menor = 0, num = 0, i;

    /* blocode comandos */
    for(i = 1; i <= 10; i++)
    {
        printf("Controle %d: Digite um numero inteiro: ", i);
        scanf("%d", &num);
        if(menor == 0)
        {
            menor = num;
        }
        if(num > maior)
        {
            maior = num;
        }
        else if(num < menor)
        {
            menor = num;
        }
    }
    printf("O maior numero %d, o menor numero %d\n", maior, menor);
    return 0;
}
/* Fim do código */