/*O que há de errado com a seguinte instrução? Escreva-a novamente para realizar o que provavelmente o programador está tentando fazer. 
printf {"%d", ++(xx + y) ) ;*/
#include <stdio.h>
#include <stdlib.h>
/*Incio do código*/
int main(void)
{
    /*Declaração de varáveis*/
    int x = 0, y = 0;
    int res = 0;

    /*Bloco de comando*/
    while(y < 100)
    {
        y++;
        res = ++x * x + y;
        printf("%d\n",res);
    }
    system("pause");
    return 0;
}
/*Fim do código*/