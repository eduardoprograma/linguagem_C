/*Desenvolva um programa em C que determine o pagamento bruto de cada um de vários empregados. A companhia paga o valor de uma "hora normal" pelas primeiras 40 horas trabalhadas de cada empregado e paga o valor de uma "hora extra" (uma vez e meia a hora normal) para cada hora trabalhada depois de completadas as primeiras 40 horas. Você recebeu uma lista de empregados da companhia, o número de horas que cada empregado trabalhou durante a semana passada e o valor da "hora normal" de cada empregado. Seu programa deve receber essas informações de cada empregado além de determinar e exibir o pagamento bruto do empregado.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    float horasTrabalhadas = 0;
    float valorHoraNormal = 0, salario = 0;

    /*Entrada de dados & Bloco de comandos*/
    printf("Entre com o numero de horas trabalhadas (-1 para finalizar): ");
    scanf("%f", &horasTrabalhadas); 
    while(horasTrabalhadas != -1)
    {
        printf("Entre com o valor da hora normal do trabalhador C$00.00): C$");
        scanf("%f", &valorHoraNormal);
        if(horasTrabalhadas > 40)
        {
            salario = (40 * valorHoraNormal) + ((horasTrabalhadas - 40) * (valorHoraNormal * 1.5));
        }
        else
        {
            salario = horasTrabalhadas * valorHoraNormal;
        }
        printf("Salário: C$%.2f\n\n", salario);
        printf("Entre com o numero de horas trabalhadas (-1 para finalizar): ");
        scanf("%f", &horasTrabalhadas); 
    }
    printf("\n\n");
    system("pause");
    return 0;
}
/*Fim do código*/