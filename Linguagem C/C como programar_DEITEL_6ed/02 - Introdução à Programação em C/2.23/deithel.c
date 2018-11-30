/*Escreva um programa que leia cinco números inteiros e então determine e imprima o maior e o menor inteiro do grupo. Use somente as técnicas de programação ensinadas neste capítulo.*/

#include <stdio.h>
#include <stdlib.h>

/*Inicio do código*/
int main(void)
{
    /*Declaração de variáveis*/
    int n1, n2, n3, n4, n5;
    int maior = 0, menor = 0;

    /*Entrada de dados*/
    printf("Digite cinco n%cmeros inteiros: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    /*Bloco de comandos*/
    if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)                    //maior n1
    {
        printf("O maior %c: %d", 130, n1);
    }
    else
    {
        if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)                //maior n2
        {
            printf("O maior %c: %d", 130, n2);
        }
        else
        {
            if(n3 > n2 && n1 < n3 && n3 > n4 && n3 > n5)            //maior n3
            {
                printf("O maior %c: %d", 130, n3);
            }
            else
            {
                if(n4 > n2 && n4 > n3 && n1 < n4 && n4 > n5)        //maior n4
                {
                    printf("O maior %c: %d", 130, n4);
                }
                else
                {
                    printf("O maior %c: %d", 130, n5);              //maior n5
                }
            }
        }
    }
    printf("\n");

    if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)                    //menor n1
    {
        printf("O maior %c: %d", 130, n1);
    }
    else
    {
        if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)                //menor n2
        {
            printf("O maior %c: %d", 130, n2);
        }
        else
        {
            if(n3 < n2 && n1 > n3 && n3 < n4 && n3 < n5)            //menor n3
            {
                printf("O maior %c: %d", 130, n3);
            }
            else
            {
                if(n4 < n2 && n4 < n3 && n1 > n4 && n4 < n5)        //menor n4
                {
                    printf("O maior %c: %d", 130, n4);
                }
                else
                {
                    printf("O maior %c: %d", 130, n5);              //menor n5
                }
            }
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/