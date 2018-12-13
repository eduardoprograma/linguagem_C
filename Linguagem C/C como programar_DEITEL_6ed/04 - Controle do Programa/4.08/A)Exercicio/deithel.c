/*Escreva instruções for que imprimam as seguintes series de valores: 
a) 1,2,3,4,5,6,7 */
#include <stdio.h>
#include <stdlib.h>

int main(void)  //Incio do código
{
    int x;      //declaração de variáveis

    for(x = 1; x <= 7; x++)
    {
        printf("%d\t", x);
    }
    printf("\n");
    system("pause");
    return 0;
}               //Fim do código