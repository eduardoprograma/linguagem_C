/*Diga a ordem de cálculo dos operadores em cada uma das instruções em C a seguir e mostre o valor de x depois que cada instrução for executada. 
a)x = 7 + 3*6/2-l; 
b)x = 2%2 + 2*2-2/2; 
c) x = (3 * 9 * (3 + (9*3/ (3) ) ) );*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x;

    /*bloco de comandos*/
    x = 7 + 3 * 6 / 2 - 1;
    printf("\nx = 7 + 3 * 6 / 2 - 1\n");
    printf("= %d", x);
    x = 2 % 2 + 2 * 2 - 2 / 2;
    printf("\nx = 2 %% 2 + 2 * 2 - 2 / 2\n");
    printf("= %d", x); 
    x = (3 * 9 * (3 + (9 * 3/ (3))));
    printf("\nx = (3 * 9 * (3 + (9 * 3/ (3))))\n");
    printf("= %d\n", x);

    system("pause");
    return 0;
}
/*Fim do código*/