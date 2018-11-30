/*Programa calculo da area do quadrado*/
#include <stdio.h>
#include <stdlib.h>
main(){
    /*Declare as variaveis*/
    float A, lado;
    /*Entre com os valor das variaveis*/
    printf("Bem vindo ao programa que calcula a area do quadrado.\n\n");
    printf("Digite o lado do Quadrado: ");
    scanf("%f", &lado);
    /*Bloco de comando*/
    A = lado * lado;
    /*Saida do valor das variaveis*/
    printf("\nA area do quadrado e %.1f\n\n", A);
    /*Fim do codigo*/
    system("pause");
    return 0;
}