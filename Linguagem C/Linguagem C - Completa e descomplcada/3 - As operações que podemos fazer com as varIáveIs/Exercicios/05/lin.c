/*Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.*/
#include <stdio.h>

int main(void)
{
    int anoAtual = 0, idade = 0, anoNascmento = 0;
    printf("Digite a sua idade e o ano atual: ");
    scanf("%d%d", &idade, &anoAtual);
    anoNascmento = anoAtual - idade;
    printf("\n\nO seu ano de nasceimento e %d.\n\n", anoNascmento);
    return 0;
}