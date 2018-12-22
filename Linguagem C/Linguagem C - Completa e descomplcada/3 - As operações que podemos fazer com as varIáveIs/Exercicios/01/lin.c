/*Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 10, y = 0; //Variável com valor atribuido.
    printf("\nO valor de x = %d\n", x);
    y = ++x;
    printf("O valor de x = %d\n", y);
    x = 10;
    y = --x;
    printf("O valor de x = %d\n", y);
    system("system");
    return 0;
}