/*(Leis de De Morgan) Neste capítulo, analisamos os operadores lógicos &&, || e !. As Leis de De Morgan podem fazer com que algumas vezes nos seja mais conveniente exprimir uma expressão lógica. Estas lei afirmam que a expressão ! (condição1 && condição2) é logicamente equivalente à expressão (!condição1 || !condição2). Além disso, a expressão !(condição1 || condição2) é logicamente equilente à expressão (!condição1 || !condição2). Use as Leis de De Morgan para escrever expressões equivalentes a cada um dos itens seguintes e depois escreva um programa que mostre que a expressão original e a nova expressão em cada caso são equivalentes.
a) !(x < 5) && !(y >= 7)*/ 
#include <stdio.h>

int main(void)
{
    int x = 0, y = 0;

    printf("Entre com dois valores inteiros: ");
    scanf("%d%d", &x, &y);

    do
    {
        printf("O valor de x = %d e o valor de y = %d\n\n", x, y);
        printf("1 - Entre com dois valores inteiros: ");
        scanf("%d%d", &x, &y);
    }while(!(x < 5) && !(y >= 7));

    do
    {
        printf("O valor de x = %d e o valor de y = %d\n\n", x, y);
        printf("2 - Entre com dois valores inteiros: ");
        scanf("%d%d", &x, &y);
    }while(!(x < 5 && y >= 7));

    do
    {
        printf("O valor de x = %d e o valor de y = %d\n\n", x, y);
        printf("3 - Entre com dois valores inteiros: ");
        scanf("%d%d", &x, &y);
    }while(!x < 5 || !y >= 7);
    return 0;
}