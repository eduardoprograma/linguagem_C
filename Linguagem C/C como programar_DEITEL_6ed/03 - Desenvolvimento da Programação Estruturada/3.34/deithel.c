/*Modifique o programa escrito no Exercício 3.33 de forma que seja impresso um quadrado vazado. Por exemplo, se seu programa lesse um tamanho 5, deveria imprimir*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variaveis*/
    int lado, x = 0, y = 0, aux = 0;

    /*Entrada de dados*/
    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);

    /*Bloco de comando*/
    if(lado >= 1 && lado <= 20)
    {
        while(y < lado)
        {
            y++;
            if(y == 1 || y == lado)
            {
                while(x < lado)
                {
                    x++;
                    printf("# ");
                }
            }
            else
            {
                while(x < lado)
                {
                    x++;
                    aux = x + 1;
                    printf("# ");
                    while(aux < lado)
                    {
                        aux++;
                        printf("  ");
                    }
                    printf("# ");
                    x = lado;
                }
            }
            printf("\n");
            x = 0;
        }
    }
    //printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/