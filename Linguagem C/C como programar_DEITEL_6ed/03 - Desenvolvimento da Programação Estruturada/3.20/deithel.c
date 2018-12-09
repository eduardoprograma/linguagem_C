/*Os juros simples em um empréstimo são calculados pela fórmula juros = capital * taxa * dias / 365 A fórmula anterior admite que taxa c a taxa anual de juros e portanto inclui a divisão por 365 (dias). Desenvolva um programa em C que receba os valores de capital, taxa e dias de vários empréstimos, calcule os juros simples de cada empréstimo e os exiba, usando a fórmula anterior.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de varáveis*/
    float juros = 0, capital = 0, taxa = 0, dias = 0;

    /*Entrada de dados & Bloco de comando*/
    printf("Entre com o valor do empréstimo (-1 para finalizar): ");
    scanf("%f", &capital); 
    while(capital != -1)
    {
        printf("Entre com a taxa de juros: ");
        scanf("%f", &taxa); 
        printf("Entre com o periodo do empréstimo em dias: ");
        scanf("%f", &dias); 
        juros = capital * taxa * dias / 365;
        printf("O valor dos juros é: $%.2f\n\n", juros);

        printf("Entre com o valor do empréstimo (-1 para finalizar): ");
        scanf("%f", &capital);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
/*Fim do código*/