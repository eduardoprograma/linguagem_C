/*Diga que valores da variável de controle x são impressos por cada uma das seguintes instruções:
d) for(x = 1; x <= 5; x+= 7) printf("%d\n", x);*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x;

    /*Bloco de comandos*/
    for(x = 1; x <= 5; x+= 7)
    {
        printf("%d\n", x);  //1
    }
    system("pause");
    return 0;
}
/*Fim do código*/