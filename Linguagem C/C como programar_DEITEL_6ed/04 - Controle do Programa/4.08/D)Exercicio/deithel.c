/*Escreva instruções for que imprimam as seguintes series de valores: 
d) 19, 27,35,43,51*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void) 
{
    int x, y;      //declaração de variáveis

    for(x = 19; x <= 51; x += 8)
    {
        printf("%d\t", x);
    }
    printf("\n");
    system("pause");
    return 0;
} 
/*Fim do código*/