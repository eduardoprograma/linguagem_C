/*Economizar dinheiro se torna muito difícil em períodos de recessão, portanto as empresas podem reduzir seus limites de crédito para evitar que suas contas a receber (dinheiro que lhes é devido) se tornem muito grandes. Em resposta a uma recessão prolongada, uma companhia reduziu o limite de crédito de seus clientes à metade. Desta forma, se um cliente tinha um limite de crédito de $2000, agora seu limite passou a ser | $1000. Se um cliente tinha um limite de crédito de $5000, seu limite passou a ser $2500. Escreva um programa que analise a situação do crédito de três clientes dessa companhia. De cada cliente você recebe 
1. O número de sua conta
2. Seu limite de crédito antes da recessão
3. Seu saldo atual (i.e., a quantia que o cliente deve à companhia).
Seu programa deve calcular e imprimir o novo limite de crédito de cada cliente e determinar (e imprimir) | que clientes possuem saldos que excedem seus novos limites de crédito. 4.10*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração variáveis*/
    int numConta;
    float credAnterior, credAtual = 0.0, saldoAtual= 0.0, credor;

    /*Entrada de dados*/
    printf("Digite o numero da conta do cliente: ");
    scanf("%d", &numConta);

    /*Bloco de comandos*/
    while(numConta != -1)
    {
        printf("Entre com o limite de credito: $ ");
        scanf("%f", &credAnterior);
        printf("Entre com o valor do credor: $ ");
        scanf("%f", &credor);
        /*Calculo*/
        credAtual = credAnterior * 0.5;
        saldoAtual = credAtual - credor;
        /*Cadeia de ações*/
        if(saldoAtual >= 0)
        {
            printf("Cliente nao excedeu limite.\nLimite atual: $%.2f\nSaldo atual:$%.2f\n", credAtual, saldoAtual);
        }
        else
        {
            printf("Cliente excedeu limite.\nLimite atual: $%.2f\nSaldo atual:$%.2f\n", credAtual, saldoAtual);
        }
        printf("\n");
        printf("Digite o numero da conta do cliente: ");
        scanf("%d", &numConta);
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/