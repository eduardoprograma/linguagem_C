/* Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* declaração de variáveis */
    int n, i = 1, soma = 0, media = 0, j = 1;

    /* bloco de comando */
    while(i <= 10)
    {
        printf("Controle %d: Digite um numero inteiro: ", i);
        scanf("%d", &n);
        i++;
        if(n >= 0)
        {
            j++;
            soma += n;
        }
        else
        {
            printf("Numero negativo:\n");
        }
    }
    
    /* saída de dados */
    media = soma / j;
    printf("\nA media %d", media);
    return 0;
}
/* Fim do código */