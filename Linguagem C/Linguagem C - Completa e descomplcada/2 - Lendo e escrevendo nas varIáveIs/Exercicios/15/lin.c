/*Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.*/
#include <stdio.h>

int main(void)
{
    int x = 7;
    char y = 'E';
    float z = 2.34;
    printf("\nValores lido : %c %d %.2f\nValores lido : %c\t%d\t%.2f\nValores lido : %c\nValores lido : %d\nValores lido : %.2f\n", y, x, z, y, x, z, y, x, z);
    return 0;
}