/*Programa salário*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Declare as variáveis*/
    float Salario, salario, vendas;
    /*Entre com o valor das variáveis*/
    printf("Bem vindo ao programa calculo de salario.\n\n");
    printf("Digite o valor do salario: $");
    scanf("%f", &salario);
    printf("Digite o valor das vendas: $");
    scanf("%f", &vendas);
    /*Bloco de comando*/
    Salario = salario + (vendas * .04);
    /*Saída das variaveis*/
    printf("Comissao: $%.2f\n", vendas * 0.04);
    printf("Salario fixo: $%.2f\n", salario);
    printf("Salario Total: $%.2f\n", Salario);
    /*Fim do programa*/
    system("pause");
    return 0;
}