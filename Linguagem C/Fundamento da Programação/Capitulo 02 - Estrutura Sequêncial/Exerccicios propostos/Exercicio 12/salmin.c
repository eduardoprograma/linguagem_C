/*Programa que calcula a quantidade de salarios minimos um funcionario ganha*/
#include <stdio.h>
#include <stdlib.h>
main(){
    /*Declração de varáveis*/
    float salMin = 967.00, salFunc, NSalMin;
    /*Enrada de dados*/
    printf("Bem vindo ao Programa calcula salario minimo.\n\n");
    printf("Digite seu salario: $");
    scanf("%f", &salFunc);
    /*Bloco de comando*/
    NSalMin = salFunc / salMin;
    /*Saída de dodos*/
    printf("\nO numero de salrios minimos que o funcionario recebe e de %.1f\n\n", NSalMin);
    /*Fim do código*/
    system("pause");
    return 0;
}