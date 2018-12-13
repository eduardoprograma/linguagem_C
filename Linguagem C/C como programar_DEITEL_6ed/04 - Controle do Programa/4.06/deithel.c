/*O código a seguir deve somar os inteiros de 100 até 150 (admita que total foi inicializado como 0): 
for (x = 100; x <= 150; x+ + ); total += x;*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int x, i = 0, y = 0, total = 0;

    /*Bloco de comandos*/
    for(x = 100; x < 150; x++)
    {
        i++;
        y = i % 10;
        total += x;
        printf("%d\t", total);
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