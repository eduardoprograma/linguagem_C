/*Escreva um programa em C que use as instruções do Exercício 3.7 para calcular x elevado à potência y. O programa deve ter a estrutura dc controle de repetição while. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int y, x;
    int potencia = 0;

    /*Entrada de dados*/
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    /*Bloco de comandos*/
    while(y != -1)
    {
        potencia = pow(x, y);
        printf("A potencia %c: %d\n\n", 130, potencia);
        printf("Digite o valor de y: ");
        scanf("%d", &y);
    }

    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/