/*Encontre o erro em cada um dos segmentos de código a seguir e explique como corrigi-lo. 
a)  x = 1; 
        while ( x <= 10 ); 
        ++x;
    }*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x = 1;

    /*Bloco de comando*/
    while(x <= 10)
    {
        printf("%d\t", x);
        ++x;
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/