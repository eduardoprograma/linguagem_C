/*Combine as instruções escritas no Exercício 3.4 em um programa que calcule a soma dos inteiros de 1 a 10. Use a estrutura while para fazer um loop através das instruções de cálculo e incremento. O loop deve ter minar quando o valor de x se tornar 11.*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x = 0;

    /*Bloco de comandos*/
    while(x < 10)
    {
        x++;
        printf("O valor de x %c %d.\n", 130, x);
    }
    system("pause");
    return 0;
}
/*Fim do código*/