/*Escreva instruções for que imprimam as seguintes series de valores: 
c) 10,14,8,2,-4,-10*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void) 
{
    int x, y;      //declaração de variáveis

    for(x = 10; x <= 14; x += 4)
    {
        printf("%d\t", x);
    }
    for(x = 8; x >= -10; x -= 6)
    {
        printf("%d\t", x);
    }
    printf("\n");
    system("pause");
    return 0;
} 
/*Fim do código*/