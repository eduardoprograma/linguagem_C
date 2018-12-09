/*Desenvolva um programa em C que determine se um cliente de uma loja de departamentos excedeu o limite de crédito de sua conta. Os seguintes dados de cada cliente estão disponíveis: 
1. Número da conta 
2. Saldo devedor no início do mês 
3. Total de itens cobrados do cliente no mês em questão 
4. Total de créditos aplicados à conta do cliente no mês em questão. 
5. Limite de crédito permitido. O programa deve receber esses dados, calcular o novo saldo (= saldo devedor inicial + cobranças — créditos) e determinar se o novo saldo supera o limite de crédito do cliente. Para os clientes cujo limite de crédito foi excedido, o programa deve exibir o número da conta do cliente, o limite de crédito e a mensagem "Limite de Crédito Excedido".*/

#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int NumConta;
    float SaldoDevedorInicioMes = 0, totalItensCobrados = 0;
    float totalCredito = 0, limiteCredito = 0, novoSaldoCredito = 0;

    /*Entrada de dados*/
    printf("Entre com o numero da conta (-1 para finalizar): ");    //Entrada de dados para dar start na operação.
    scanf("%d", &NumConta);

    /*Bloco de comandos*/ 
    while(NumConta != -1)
    {   
        printf("Entre com o saldo inicial: $ ");
        scanf("%f", &SaldoDevedorInicioMes);  
        printf("Entre com o total de cobranças: $ ");
        scanf("%f", &totalItensCobrados); 
        printf("Entre com o total de créditos: $ ");
        scanf("%f", &totalCredito);
        printf("Entre com o limite de credito: $ ");
        scanf("%f", &limiteCredito);

        /*Calculos*/
        novoSaldoCredito = (SaldoDevedorInicioMes + totalItensCobrados) - totalCredito;
        /*if(totalItensCobrados > totalCredito)
        {
            novoSaldoCredito = (SaldoDevedorInicioMes + totalItensCobrados) - totalCredito;
        }
        else
        {
            novoSaldoCredito = SaldoDevedorInicioMes + totalItensCobrados;
        }*/

        /*Codição para aprovação de crédito*/
        if(novoSaldoCredito > limiteCredito)
        {
            printf("\n\nSituação da operação:\n");
            printf("Conta: %d\n", NumConta); 
            printf("Limite de credito: $ %.2f\n", limiteCredito); 
            printf("Saldo: $ %.2f\n", novoSaldoCredito); 
            printf("Limite de Credito Excedido.\n\n");
        }
        else
        {
            printf("\n\nSituação da operação:\n");
            printf("Conta: %d\n", NumConta); 
            printf("Limite de credito: $ %.2f\n", limiteCredito); 
            printf("Saldo: $ %.2f\n", novoSaldoCredito); 
            printf("Limite de Credito Aprovado.\n\n");
        }

        /*Reinicialização do sistema*/
        printf("Entre com o numero da conta (-1 para finalizar): ");
        scanf("%d", &NumConta);
    }
    
    printf("\n\n");
    system("pause");
    return 0;
}
/*Fim do código*/