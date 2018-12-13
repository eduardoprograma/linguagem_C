/*Escreva uma instrução ou um conjunto de instruções em C para realizar cada uma das seguintes tarefas: 
d) Imprima os inteiros de 1 a 20 usando um loop while e a variável x. Considere que a variável x já foi declarada, mas não inicializada. Imprima somente 5 inteiros por linha. Sugestão: Use o cálculo x % 5. Quando o valor desse cálculo for 0, imprima um caractere de nova linha; caso contrário, imprima um caractere de tabulação. Repita o exercício 4.3(d) usando uma estrutura for.*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int x, i = 0;

    /*Bloco de comando*/
    printf("Funcao while, x nao inicializado\n");
    while(x < 20)
    {                       //Inicio do bloco while
        x++;
        i = x % 5;
        printf("%d\t", x);
        if(i == 0)          //Inicio do bloco if
        {
            printf("\n");
        }                   //Fim do bloco if
    }                       //Fim do bloco while
    printf("Funcao for, x inicializado\n");
    for(x = 1; x <= 20; x++)//Inicio do bloco for
    {
        i = x % 5;
        printf("%d\t", x);
        if(i == 0)          //Inicio do bloco if
        {
            printf("\n");
        }                   //Fim do bloco if
    }                       //Fim do bloco for
    system("pause");
    return 0;
}
/*Fim do código*/