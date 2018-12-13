/*Escreva instruções for que imprimam as seguintes series de valores: 
b) 3,8,13,18,23*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void) 
{
    int x;      //declaração de variáveis

    for(x = 3; x <= 23; x += 5)
    {
        printf("%d\t", x);
    }
    printf("\n");
    system("pause");
    return 0;
} 
/*Fim do código*/