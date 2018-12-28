/* Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim por diante */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    int semana;

    /* Entrada de dados */
    printf("Digite o numero da semana desejado: ");
    scanf("%d", &semana);

    /* Bloco de comandos */
    switch (semana)
    {
        case 1:
            printf("\nDia da semana = Domingo.\n");
            break;
        case 2:
            printf("\nDia da semana = Segunda-Feira.\n");
            break;

        case 3:
            printf("\nDia da semana = Terca-Feira.\n");
            break;

        case 4:
            printf("\nDia da semana = Quarta-Feira.\n");
            break;

        case 5:
            printf("\nDia da semana = Quinta-Feira.\n");
            break;

        case 6:
            printf("\nDia da semana = Sexta-Feira.\n");
            break;

        case 7:
            printf("\nDia da semana = Sabado.\n");
            break;

        default:
            if(semana >= 8)
            {
                printf("\nOs Dia da semana são 7, por tanto digite um numero nesta faixa.\n");
            }
            break;
    }
    return 0;
}
/* Fim do código */