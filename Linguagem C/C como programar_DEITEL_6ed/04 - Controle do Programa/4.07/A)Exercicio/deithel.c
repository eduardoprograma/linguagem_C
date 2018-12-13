/*Diga que valores da variável de controle x são impressos por cada uma das seguintes instruções:
a) for(x = 2; x <= 13; x+= 2)printf("%d\n", x);*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x;

    /*Bloco de comandos*/
    for(x = 2; x <= 13; x += 2)
    {
        printf("%d\n", x);  //2, 4, 6, 7, 8, 10, 12
    }
    system("pause");
    return 0;
}
/*Fim do código*/