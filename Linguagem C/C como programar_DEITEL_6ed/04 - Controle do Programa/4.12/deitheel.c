/*Escreva um programa que encontre o menor valor entre vários inteiros. Admita que o primeiro valor lido especifica o número de valores restantes.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int menor = 100000, x, i;

    /*Entrada de dados*/
    printf("Digite um numero inteiro (-1 para terminar): ");
    scanf("%d", &x);
    
    /*Bloco de comandos*/
    for(i = 0; x != -1; i++)
    {
        if(x < menor)
        {
            menor = x;
        }
        printf("Digite um numero inteiro (-1 para terminar): ");
        scanf("%d", &x);
    }
    printf("O numero menor e %d", menor);
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/