/*Escreva um programa que calcule e imprima a média de vários inteiros. Admita que o último valor lido com scanf é o sentinela 9999. Uma seqüência típica de entrada poderia ser 10 8 11 7 9 9999 indicando que a média de todos os valores que aparecem antes de 9999 deve ser calculada.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaraçao das variáveis*/
    int x, media = 0, i;

    /*Entrada de dados*/
    printf("Digite um numero inteiro (9999 para terminar): ");
    scanf("%d", &x);

    /*Bloco de comandos*/
    for(i = 0; x != 9999; i++)
    {
        media += x;
        printf("Digite um numero inteiro (9999 para terminar): ");
        scanf("%d", &x);
    }
    printf("A media e %d.\n", media / i);
    system("pause");
    return 0;
}
/*Fim do código*/