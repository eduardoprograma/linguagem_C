/*Escreva uma instrução ou um conjunto de instruções em C para realizar cada uma das seguintes tarefas: 
b) Imprima o valor 333.546372 em um campo com 15 caracteres com precisões de 1, 2, 3, 4 e 5. Alinhe (justifique) a saída pela esquerda. Quais os cinco valores impressos?*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    float x = 333.546372;

    /*Bloco de comandos*/
    for(int i = 0; i < 1; i++)
    {
        printf("\nO numero: %15.1f", x);
        printf("\nO numero: %15.2f", x);
        printf("\nO numero: %15.3f", x);
        printf("\nO numero: %15.4f", x);
        printf("\nO numero: %15.5f", x);
        printf("\nO numero: %15f", x);
        printf("  Esse e base para os 5 anteriores.\n");
    }
    system("pause");
    return 0;
}
/*Fim do código*/