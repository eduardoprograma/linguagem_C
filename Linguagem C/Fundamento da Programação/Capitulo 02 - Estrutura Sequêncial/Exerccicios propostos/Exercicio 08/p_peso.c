/*Programa de conversão de peso de kg x g*/
#include <stdio.h>
#include <stdlib.h>
main() {
    /*Declaração de variaveis*/
    float p_peso, converte;
    /*Entre com os valores das variaveis*/
    printf("Bem vindo ao programa de conversao de uniddades kg x g\n\n");
    printf("Digite o valor do peso: ");
    scanf("%f", &p_peso);
    /*Bloco de comando*/
    converte = p_peso * 1000;
    /*Saida de valores das variaveis*/
    printf("O seu peso convertido em %.2f g\n", converte);
    /*Fim do codigo*/
    system("pause");
    return 0;
}