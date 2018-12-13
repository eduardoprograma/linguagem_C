/*Ache o erro em cada uma das opções a seguir: (Obs.: pode haver mais de um erro.) 
e) for(x = 999; x >= 1; x += 2) printf("%d\n", x);*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de dados*/
    int x, y = 0, i = 0;

    /*Bloco de comandos*/
    for(x = 999; x >= 1; x -= 2)    //O erro estava no incremento/decremento
    {
        i++;
        y = i % 10;
        printf("%d\t", x);
        if(y == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/