/*Diga que valores da variável de controle x são impressos por cada uma das seguintes instruções:
c) for(x = 3; x <= 15; x+= 3)printf("%d\n", x);*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int x;

    /*Bloco de comandos*/
    for(x = 3; x <= 15; x+= 3)
    {
        printf("%d\n", x);  //3, 6, 9, 12, 15.
    }
    system("pause");
    return 0;
}
/*Fim do código*/