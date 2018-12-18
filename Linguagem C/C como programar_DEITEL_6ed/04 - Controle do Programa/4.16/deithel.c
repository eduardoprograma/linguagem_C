/*Modifique o programa de juros compostos da Seção 4.6 para repetir seus passos para taxas de juros de 5 por cento, 6 por cento, 7 por cento, 8 por cento, 9 por cento e 10 por cento. Use um loop for para variar a taxa de juros.*/
/* Calculando juros compostos */ 
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int ano, y;
    double quantia, principal = 1000.0, taxa = .05;

    /*Bloco de comandos*/
    printf ("%54s\n", "Saldo na conta"); 
    printf("\n");
    for(ano = 1; ano <= 10; ano++)
    {
        printf("%4s\t", "Ano");
        for(ano = 1; ano <= 10; ano++)
        {
            printf("%4d\t", ano);
        }
    }
    for(y = 1; y <= 6; y++)
    {
        printf("\n");
        printf("T%1.0f%%\t", taxa * 100);
        for(ano = 1; ano <= 10; ano++)
        {
            quantia = principal * pow(1 + taxa, ano);
            printf("%5.2f\t", quantia);
        }
        printf("\n");
        taxa += 0.01;

    }
    return 0;
}
/*Fim do código*/