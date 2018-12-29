/* Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente o resultado na tela. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* declare variáveis */
    int num, soma = 0, i = 1;

    /* entrdade dados */
    printf("Digite um numero inteiro:");
    scanf("%d", &num);
    printf("\nControle %d\n", i);
    do 
    {
        i++;
        soma += num;
        printf("Digite um numero inteiro:");
        scanf("%d", &num);
        if(i <= 10)
        {
            printf("\nControle %d\n", i);
        }
    }while(i <= 10);
    /* Saída de dados */
    printf("\nA soma dos %d numeros: %d\n", i - 1, soma);
    return 0;
}
/* Fim do código */