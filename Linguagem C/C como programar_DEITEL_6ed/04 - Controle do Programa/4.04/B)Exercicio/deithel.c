/*Encontre o erro em cada um dos segmentos de código a seguir e explique como corrigi-lo. 
b)  for ( y = .1; y != 1.0; y += .1 ) 
        printf( "%f\n", y );*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    float y;

    /*Bloco de comandos*/
    for(y = 0.1; y < 1.0; y += 0.1)
    {
        printf("%.2f\t", y);
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/