/*Uma grande companhia química paga seus vendedores por comissão. Os vendedores recebem $200 por semana mais 9 por cento de suas vendas brutas naquela semana. Por exemplo, um vendedor que vender o equivalente a $5000 em produtos químicos em uma semana recebe $200 mais 9 por cento de $5000, ou um total de $650. Desenvolva um programa em C que receba as vendas brutas de cada vendedor na última semana, calcule seu salário e o exiba. Processe os dados de um vendedor de cada vez.*/

#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    float porcentagem = 0.09, salarioFixo = 200.00;
    float vendasSemana = 0.00, valorReceber = 0;

    /*Entrada de dados*/
    printf("Entre com o valor da venda da semana (-1 para encerrar): $ ");
    scanf("%f", &vendasSemana);
    while(vendasSemana != -1)
    {
        valorReceber = salarioFixo + (vendasSemana * porcentagem);
        printf("Vendas da semana: $ %.2f\n", vendasSemana);
        printf("Salario fixo: $ %.2f\n", salarioFixo);
        printf("Porcentagem das vendas: $ %.2f\n", vendasSemana * porcentagem);
        printf("Valor a receber: $ %.2f\n\n", valorReceber);

        printf("Entre com o valor da venda da semana (-1 para encerrar): $ ");
        scanf("%f", &vendasSemana);
    }
}
/*Fim do código*/