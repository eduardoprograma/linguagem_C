/*Ache o erro em cada uma das opções a seguir: (Obs.: pode haver mais de um erro.) 
a) For (x = 100, x >= 1, x++)
printf("%d\n" , x);*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x, y = 0;

    /*Bloco de comandos*/
    for(x = 100; x >= 1; x--)   //Erro ; e decremento implementado
    {
        y = x % 10;             //Só um adicional
        printf("%d\t", x);      //Criada tabulação para estetica
        if(y == 0 && x != 100)
        {
            printf("\n");       //Sofisticação do código
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/