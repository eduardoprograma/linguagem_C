/*Escreva um programa que receba a entrada de um número de cinco dígitos, separe o número em seus dígitos componentes e os imprima separados uns dos outros por três espaços. Por exemplo, se o usuário digitar 42339, o programa deve escrever:
4 2 3 3 9*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de varáveis*/
    char numero[6];

    /*Entrada de dados*/
    printf("Entre com um n%cmero de cinco digitos: ", 163);
    scanf("%c%c%c%c%c", &numero[0], &numero[1], &numero[2], &numero[3], &numero[4], numero[5]);

    /*Bloco de comando*/
    printf("O s numeros foram %c %c %c %c %c %c\n", numero[0], numero[1], numero[2], numero[3], numero[4], numero[5]);
}
/*Fim do código*/