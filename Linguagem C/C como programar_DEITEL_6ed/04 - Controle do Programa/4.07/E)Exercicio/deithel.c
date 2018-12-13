/*Diga que valores da variável de controle x são impressos por cada uma das seguintes instruções:
e) for(x = 12; x <= 2; x -= 3)printf("%d\n", x);*/
#include <stdio.h>
#include <stdlib.h>
/*inicio do código*/
int main(void)
{
    /*Declaração de variávesi*/
    int x;
    
    /*Bloco de comandos*/
    for(x = 12; x <= 2; x -= 3)
    {
        printf("%d\n", x);   //Nada
    }
    system("pause");
    return 0;
}
/*Fim do código*/