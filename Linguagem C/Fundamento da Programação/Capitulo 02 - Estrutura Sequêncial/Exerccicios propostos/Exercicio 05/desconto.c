/*Programa desconto*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Declare as variaveis*/
    float preco, total;
    /*Entre com o valor das variaveis*/
    printf("Bem vindo ao programa Desconto.\n\n");
    printf("Digite o valor: $");
    scanf("%f", &preco);
    /*Bloco de comando*/
    total = preco - (preco * .1);
    /*Saida do valortotal com desconto*/
    printf("O valor total: $%.2f\n\n", total);
    /*Fim do código*/
    system("pause");
    return 0;
}