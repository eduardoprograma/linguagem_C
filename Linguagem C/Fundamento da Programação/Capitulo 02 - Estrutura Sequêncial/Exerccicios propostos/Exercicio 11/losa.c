/*Programa que calcula area do losnago*/
#include <stdio.h>
#include <stdlib.h>
main(){
    /*Declare as variáveis*/
    float A, digMaior, digMenor;
    /*Entre com o valor das variaveis*/
    printf("Bem vindo ao programa 'calculo de Area doLosango'.\n\n");
    printf("Digite o valor da diagonal maior: ");
    scanf("%f", &digMaior);
    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &digMenor);
    /*Bloco de comando*/
    A = (digMaior * digMenor) / 2;
    /*Saida de valores das variáveis*/
    printf("O valor da area do losango e %.1f\n\n", A);
    /*Fim do código*/
    system("pause");
    return 0;
}