/*Escreva um programa em C que utilize um loop para imprimir os números de 1 a 10, lado a lado na mesma linha e com 3 espaços entre eles.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*declare as variáveis*/
    int x = 0;

    /*Bloco de comandos*/
    printf("Valor a se iniciar %d\n", x);
    while(x < 10)
    {
        x++;
        printf("%3d", x);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
/*Fim do código*/