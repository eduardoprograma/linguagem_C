/*Escreva um programa que leia o lado de um quadrado e então imprima o quadrado com asteriscos. Seu programa deve funcionar com quadrados de todos os tamanhos entre 1 e 20. Por exemplo, se seu programa lesse um tamanho 4, deveria imprimir*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração das variaveis*/
    int lado, x = 0, y = 0;

    /*Entrada de dados*/
    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);

    /*Bloco de comando*/
    if(lado >= 1 && lado <= 20)
    {
        while(y < lado)
        {
            y++;
            while(x < lado)
            {
                x++;
                printf("# ");
            }
            x = 0;
            printf("\n");
        }
    }
    system("pause");
    return 0;
}
/*Fim  do código*/