/*Escreva um programa em C que peça ao usuário para fornecer dois números inteiros, obtenha-os do usuário e imprima o maior deles seguido das palavras "e maior". Se os números forem iguais, imprima a mensagem "Estes números sao iguais". Use a instrução if somente na forma de seleção simples que você aprendeu neste capítulo.*/

#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x, y;

    /*Entrada de dados*/
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);

    /*Bloco de comando*/
    if(x > y)
    {
        printf("%d %c maior", x, 130);
    }

    if(x < y)
    {
        printf("%d %c maior", y, 130);
    }
    else if (y == x)
    {
        printf("Estes n%cmeros s%co iguais", 163, 198);
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/