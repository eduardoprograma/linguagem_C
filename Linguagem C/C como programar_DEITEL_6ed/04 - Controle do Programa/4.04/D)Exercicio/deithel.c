/*Encontre o erro em cada um dos segmentos de código a seguir e explique como corrigi-lo. 
d) O código a seguir deve imprimir valores de 1 a 10. 
    n = 1; 
    while(n < 10) 
        printf( "ud ", n++ );*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int n = 1;

    /*Bloco de comandos*/
    while(n < 10)
    {
        n++;
        printf("ud ");
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/