/* Faça um programa que informe o mês de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = Abril. */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    int mes;

    /* Entrada de dados */
    printf("Digite o numero do mes desejado: ");
    scanf("%d", &mes);

    /* Bloco de comandos */
    switch (mes)
    {
        case 1:
            printf("\nMes = Janeiro.\n");
            break;
        case 2:
            printf("\nMes = Fevereiro.\n");
            break;

        case 3:
            printf("\nMes = Marco.\n");
            break;

        case 4:
            printf("\nMes = Abril.\n");
            break;

        case 5:
            printf("\nMes = Maio.\n");
            break;

        case 6:
            printf("\nMes = Junho.\n");
            break;

        case 7:
            printf("\nMes = Julho.\n");
            break;

        case 8:
            printf("\nMes = Agosto.\n");
            break;

        case 9:
            printf("\nMes = Setembro.\n");
            break;

        case 10:
            printf("\nMes = Outubro.\n");
            break;

        case 11:
            printf("\nMes = Novembro.\n");
            break;

        case 12:
            printf("\nMes = Dezembro.\n");
            break;
        
        default:
            if(mes >= 13)
            {
                printf("\nOs meses são 12, por tanto digite um numero nesta faixa.\n");
            }
            break;
    }
    return 0;
}
/* Fim do código */