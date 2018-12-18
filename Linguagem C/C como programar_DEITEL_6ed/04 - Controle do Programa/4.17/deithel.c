/*Escreva um programa que imprima os seguintes padrões separadamente, um abaixo do outro. Use loops for para gerar os padrões. Todos os asteriscos (*) devem ser impressos por uma única instrução printf na forma printf ("*"); (isto faz com que os asteriscos sejam impressos lado a lado). Sugestão: Os dois últimos padrões exigem que cada linha comece com um número adequado de espaços em branco. 
(A) (B) (C) (D)*/
#include <stdio.h>
#include <stdlib.h>
/*Inicio do código*/
int main(void)
{
    /*Declare as variáveis*/
    int letra;
    int x, cX1, cX2;

    /*Entrada de dados*/
    printf("Digite A, B, c ou D para escolhar uma opcao de forma(EOF para finalizar): ");
    scanf("%d", &letra);
    while((letra = getchar()) != EOF)
    {
        switch (letra)
        {
            case 'A':
                for(x = 1; x <= 10; x++)
                {
                    for(cX1 = 1; cX1 <= x; cX1++)
                    {
                        printf("*");
                    }
                    for(cX2 = 1; cX2 <= (x - cX1); cX2++)
                    {
                        printf(" ");
                    }
                    printf("\n");
                }
                break;
            case 'B':
                for(x = 1; x <= 10; x++)
                {
                    for(cX1 = 10; cX1 >= x; cX1--)
                    {
                        printf("*");
                    }
                    for(cX2 = 10; cX2 >= abs(cX1 - x); cX2--)
                    {
                        printf(" ");
                    }
                    printf("\n");
                }
                break;
            case 'C':
                for(x = 1; x <= 10; x++)
                {
                    if(x > 1)
                    {
                        for(cX2 = 2; cX2 <= x; cX2++)
                        {
                            printf(" ");
                        }
                    }
                    for(cX1 = 10; cX1 >= x; cX1--)
                    {
                        printf("*");
                    }
                    //printf("%10d", x);
                    printf("\n");
                }
                break;
            case 'D':
                for(x = 1; x <= 10; x++)
                {
                    for(cX1 = 9; cX1 >= x; cX1--)
                    {
                        printf(" ");
                    }
                    for(cX2 = 1; cX2 <= x; cX2++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
                break;
            default:
                printf("Digite 'A', 'B', 'C' ou 'D' em maiusculo.");
                break;
        }
        printf("\n");
        printf("Digite A, B, C ou D para escolhar uma opcao de forma(EOF para finalizar): ");
        scanf("%d", &letra);    //Caso não funcione o EOF troca as letras por numeros e o a sentonela -1
    }
    printf("\n");
    system("pause");
    return 0;
}
/*Fim do código*/