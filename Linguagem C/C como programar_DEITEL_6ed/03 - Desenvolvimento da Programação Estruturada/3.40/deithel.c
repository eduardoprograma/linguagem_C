/*Escreva um programa que exiba o seguinte padrão quadriculado
figura pagina 128
* * * * * * * * * * * * * *
 * * * * * * * * * * * * * *
* * * * * * * * * * * * * *
 * * * * * * * * * * * * * *
* * * * * * * * * * * * * *
 * * * * * * * * * * * * * *
* * * * * * * * * * * * * *
 * * * * * * * * * * * * * *
Seu programa só pode usar três instruções printf, uma da forma 
printf("* "); 
uma da forma 
printf(" ") 
e uma da forma 
printf("\n");*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int x = 0, y = 1, espY = 1, espX = 0;

    /*Bloco de comandos*/
    while(y < 8)
    {
        y++;
        while(x < 14)
        {
            x++;
            printf("* ");
        }
        x = 0;
        printf("\n");
        espY = y % 2;
        if(espY == 0)
        {
            printf(" ");
        }
    }

    system("pause");
    return 0;
}
/*Fim do código*/