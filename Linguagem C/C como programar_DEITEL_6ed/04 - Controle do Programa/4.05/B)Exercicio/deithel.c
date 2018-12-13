/*Ache o erro em cada uma das opções a seguir: (Obs.: pode haver mais de um erro.) 
b) O código a seguir deve imprimir se o número dado é ímpar ou par: switch (valor % 2) { case 0: printf("Inteiro par\n"); case 1: printf ("Inteiro impar\n"); }*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int num;

    /*Entrada de dados*/
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    /*Bloco e comandos*/
    switch (num % 2)
    {
        case 0:
            printf("Inteiro par\n");
            break;
        case 1:
            printf("Inteiro impar\n");
            break;
        default:
            printf("O numero não e inteiro");
            break;
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/