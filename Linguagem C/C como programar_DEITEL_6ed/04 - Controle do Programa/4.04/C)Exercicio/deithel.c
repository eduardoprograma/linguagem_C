/*Encontre o erro em cada um dos segmentos de código a seguir e explique como corrigi-lo. 
c)  switch (n) 
        { 
            case 1: puts( "The number is 1" );
            case 2: puts( "The number is 2" ); 
            break;
            default: puts( "The number is not 1 or 2" ); 
            break;
        }*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare a varável*/
    int n;

    /*Entrada de dados*/
    printf("Digite 1 ou 2; ");
    scanf("%d", &n);

    /*Bloco de comandos*/
    switch (n)
    {
        case 1:
            puts("O numero e 1.");
            break;
        case 2:
            puts("O numero e 2.");
            break;
        default:
            puts("O numeronao e 1 nem 2.");
            break;
    }
    system("pause");
    return 0;
}
/**Fim do código*/