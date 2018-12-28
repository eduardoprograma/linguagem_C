/* Escreva um programa que, dada a idade de um nadador, o classifique em uma das seguintes categorias:
Categoria   Infantil    A Infantil  B Juvenil   A Juvenil   B Sênior
Idade       5-7         8-10        11-13       14-17       maiores de 18 anos */
#include <stdio.h>

/* Inicio do código */
int main(void)
{
    /* Declaração de variáveis */
    int idade;

    /* Entrada de dados */
    printf("Entre com a idade do nadador: ");
    scanf("%d", &idade);

    /* Bloco de comandos */
    for( ; idade != -1; idade)
    {
        if(idade >= 5 && idade <= 7)
        {
            printf("Nandador 'Infantil'.\n\n");
        }
        else
        {
            if(idade >= 8 && idade <= 10)
            {
                printf("Nadador 'Infantil A'.\n\n");
            }
            else
            {
                if(idade >= 11 && idade <= 13)
                {
                    printf("Nadador 'Infantil B'.\n\n");
                }
                else
                {
                    if(idade >= 14 && idade <= 17)
                    {
                        printf("Nadador 'Juvenil A'.\n\n");
                    }
                    else
                    {
                        printf("Nadador 'Senior'.\n\n");
                    }
                }
            }
        }
        printf("Entre com a idade do nadador: ");
        scanf("%d", &idade);
    }
    return 0;
}
/* Fim do código */