/* Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    float altura, peso;

    /* Entrada de dados */
    printf("Entre com a altura: ");
    scanf("%f", &altura);
    
    /* Bloco de comandos */
    while(altura != -1)
    {
        printf("Entre com o peso: ");
        scanf("%f", &peso);
        if(altura <= 1.20)
        {
            if(peso <= 60)
            {
                printf("\nSua classificacao 'A'.\n\n");
            }
            else
            {
                if(peso > 60 && peso <= 90)
                {
                    printf("\nSua classificacao 'D'.\n\n");
                }
                else
                {
                    printf("\nSua classificacao 'G'.\n\n");
                }
            }
        }
        else
        {
            if(altura > 1.20 && altura <= 1.70)
            {
                if(peso <= 60)
                {
                    printf("\nSua classificacao 'B'.\n\n");
                }
                else
                {
                    if(peso > 60 && peso <= 90)
                    {
                        printf("\nSua classificacao 'E'.\n\n");
                    }
                    else
                    {
                        printf("\nSua classificacao 'H'.\n\n");
                    }
                }
            }
            else
            {
                if(altura > 1.70)
                {
                    if(peso <= 60)
                    {
                        printf("\nSua classificacao 'C'.\n\n");
                    }
                    else
                    {
                        if(peso > 60 && peso <= 90)
                        {
                            printf("\nSua classificacao 'F'.\n\n");
                        }
                        else
                        {
                            printf("\nSua classificacao 'I'.\n\n");
                        }
                    }
                }
            }
        }
        printf("Entre com a altura: ");
        scanf("%f", &altura);
    }
    return 0;
}
/* Fim do código */