/*Escreva um programa que imprima 100 asteriscos, um de cada vez. A cada dez asteriscos, seu programa deve imprimir um caractere de nova linha. (Sugestão: Conte de 1 a 100. Use o operador resto para reconhecer cada vez que o contador atingir um múltiplo de dez.)*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int x = 0, y = 0;

    /*Bloco de comando*/
    while(y < 100)
    {
        y++;
        x = y % 10;
        printf("# ");
        if(x == 0)
        {
            printf("\n");
        }
    }
    system("pause");
    return 0;
}
/*Fim do código*/