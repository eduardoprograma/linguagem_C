/*Escreva um programa que some uma seqüência de inteiros. Admita que o primeiro inteiro lido com scanf especifica o número de valores que ainda devem ser fornecidos. Seu programa deve ler apenas um valor cada vez que scanf for executado. Uma seqüência típica de entrada poderia ser 5 100 200 300 400 500 onde o 5 indica que os valores subseqüentes 5 devem ser somados.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int num = 100, total = 0, x, y;

    /*Entrada de dados*/
    printf("Digite um numero inteiro que determinara o numero de vez que uma soma acontecera: ");
    scanf("%d", &x);

    /*Bloco de comandos*/
    for(y = 1; y <= x; y++)
    {
        total += num;
        printf("%d\t", total);
        if((y % 5) == 0)
        {
            printf("\n");
        }
    }
    system("pause");
    return 0;
}
/*Fim do código*/