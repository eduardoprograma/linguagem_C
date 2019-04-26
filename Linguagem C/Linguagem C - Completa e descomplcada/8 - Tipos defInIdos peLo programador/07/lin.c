/* Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora. */
#include <stdio.h>
#include <stdlib.h>

/* Estrutura */
struct clock
{
    int horas;
    int minuto;
    int segundos;
}hora[5];
/* Fim da Estrutura */

/* Inicio do código */
int main()
{
    /* inicialização das variáveis */
    hora[5].horas = 0;
    hora[5].minuto = 0;
    hora[5].segundos = 0;
    int i;
    int hor = 0, min = 0, seg = 0;

    /* entrada de dados */
    for(i = 0; i < 5; i++)
    {
        printf("Digite as horas: ");
        scanf("%i", &hora[i].horas);
        printf("Digite os minutos: ");
        scanf("%i", &hora[i].minuto);
        printf("Digite os segundos: ");
        scanf("%i", &hora[i].segundos);
        printf("\n\n");
    }
    /* Fim da entrada de dados */

    /* Comparar as horas digitas */
    for(i = 0; i < 5; i++)
    {
        if(hor <= hora[i].horas)
        {
            if(min <= hora[i].minuto)
            {
                if(seg <= hora[i].segundos)
                {
                    hor = hora[i].horas;
                    min = hora[i].minuto;
                    seg = hora[i].segundos;
                }
            }
        }
    }
    /* Fim do bloco de comparação das horas digitadas */

    /* Saída de dados */
    printf("A maior hora e %i:%i:%i\n\n", hor, min, seg);
    return 0;
}
/* Fim do código */