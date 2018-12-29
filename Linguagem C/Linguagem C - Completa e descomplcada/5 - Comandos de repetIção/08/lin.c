/* Faça um programa que leia 10 inteiros e imprima sua média. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int num, soma = 0, media = 0, i = 1;

    /* bloco de comandos */
    while(i <= 10)
    {
        printf("Controle %d: Digite um numero inteiro: ", i);
        scanf("%d", &num);
        i++;
        soma += num;
    }
    media = soma / (i - 1);
    printf("A media de %d numeros: %d\n", i - 1, media);
    return 0;
}
/* Fim do código */