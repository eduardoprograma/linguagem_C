/* Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule e imprima a matriz B, sendo que B = A^2. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MATRIZ 5
/* inicio do código */
int main()
{
    /* declaração de variaveis */
    int A[MATRIZ][MATRIZ] = {0};
    int B[MATRIZ][MATRIZ] = {0};
    int i, j;

    /* entrada de dados */
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Digite um numero inteiro: ");
            scanf("%i", &A[i][j]);
        }
    }

    /* bloco de comandos */
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            B[i][j] = pow(A[i][j], 2);    
        }
    }

    /* saida de dados */
        /* Matriz A */
        puts(" ");
        puts(" ");
        printf("Matriz A\n");
        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                printf("%i\t", A[i][j]);
                if(j == 4)
                {
                    puts(" ");
                }
            }
        }

        /* Matriz B */
        puts(" ");
        puts(" ");
        printf("Matriz B\n");
        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                printf("%i\t", B[i][j]);
                if(j == 4)
                {
                    puts(" ");
                }
            }
        }
    return 0;
}
/* fim do código */