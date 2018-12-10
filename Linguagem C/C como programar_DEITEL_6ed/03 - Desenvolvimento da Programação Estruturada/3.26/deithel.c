/*Escreva um programa em C que utilize um loop para produzir a seguinte tabela de valores:
pagina 125*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declaração de varáveis*/
    int x = 3;
    int i = 0;

    /*Bloco de comando e saída de dados*/
    printf("%s\t%s\t%s\t%s\t\n\n", "A", "A+2", "A+4", "A+6");
    while(i < 5)
    {
        i++;
        printf("%d\t%d\t%d\t%d\t\n", x * i, (x * i) + 2, (x * i) + 4, (x * i) + 6);
    }
    system("pause");
    return 0;
}
/*Fim do código*/