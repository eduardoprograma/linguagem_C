/*Faça um programa que carregue um vetor com sete numeros inteiros*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define SIZE 7
int main(){
    setlocale(LC_ALL, "pt-br");
    /*Declaração das varáveis*/
    int vetor[SIZE] = {0}, i, aux;
    int n = 0, resto;
    /*Entrada de valores do vetor*/
    for(i = 0; i < SIZE; i++)
    {
        printf("Digite um número enquanto for solicitado: ");
        scanf("%d", &n);
        vetor[i] = n;
    }
    /*Seleção dos multiplos*/
    printf("\nOs multiplos de 2 são:\n");
    for(i = 0; i < SIZE; i++)
    {
        aux = vetor[i];
        resto = (aux % 2);
        if (resto == 0) {
            printf(" Vetor[%d],", vetor[i]);
        }
        else
        {
            /* Não faça nada */
        }      
    }
    printf("\nOs multiplos de 3 são:\n");
    for(i = 0; i < SIZE; i++)
    {
        aux = vetor[i];
        resto = (aux % 2);
        if (resto == 1) {
            printf(" Vetor[%d],", vetor[i]);
        }
        else
        {
            /* Não faça nada */
        }      
    }
    printf("\nOs multiplos de 2 e 3 são:\n");
    for(i = 0; i < SIZE; i++)
    {
        printf(" Vetor[%d],", vetor[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}