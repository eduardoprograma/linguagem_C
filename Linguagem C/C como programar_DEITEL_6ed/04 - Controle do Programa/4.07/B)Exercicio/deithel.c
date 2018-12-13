/*Diga que valores da variável de controle x são impressos por cada uma das seguintes instruções:
b) for(x = 5; x <= 22; x+= 7)printf("%d\n", x);*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int x;

    /*Bloco de comandos*/
    for(x = 5; x <= 22; x += 7)
    {
        printf("%d\n", x);  //5, 12, 19
    }
    system("pause");
    return 0;
}
/*Fim do código*/
