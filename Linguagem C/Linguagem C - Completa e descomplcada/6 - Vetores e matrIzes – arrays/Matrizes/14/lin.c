/* Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule também a soma dos elementos que não pertencem a nenhuma das duas diagonais. Imprima na tela a diferença entre os dois valores. */
#include <stdio.h>
#include <stdlib.h>
#define MATRIZ 5
/* inicio do código */
int main()
{
    /* declaração de variáveis */
    int matriz[MATRIZ][MATRIZ] ={0};
    int i, j;
    int diagonal = 0;
    int soma = 0, somad = 0, diferenca = 0;

    /* entrada de dados */
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Digite um numero inteiro: ");
            scanf("%i", &matriz[i][j]);
        }
    }

    /* bloco de comandos */
        /* seleção da diagonal */
        puts("O que deseja fazer?");
        puts("1 - Para calcular a diagonal principal.");
        puts("2 - Para calcular a diagonal secundaria.");
        puts("3 - Para calcular as duas diagonais.");
        printf("Digite um valor: ");
        scanf("%i", &diagonal);
            /* diagonal primaria */
            if(diagonal == 1)
            {
                for(i = 0; i< 5; i++)
                {
                    for(j = 0; j < 5; j++)
                    {
                        if(i == 0)
                        {
                            if(j == 0)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 1)
                        {
                            if(j == 1)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 2)
                        {
                            if(j == 2)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 3)
                        {
                            if(j == 3)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 4)
                        {
                            if(j == 4)
                            {
                                soma += matriz[i][j];
                            }
                        }
                    }
                }
            }
            else if(diagonal == 2)
            {
                for(i = 0; i< 5; i++)
                {
                    for(j = 0; j < 5; j++)
                    {
                        if(i == 0)
                        {
                            if(j == 4)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 1)
                        {
                            if(j == 3)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 2)
                        {
                            if(j == 2)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 3)
                        {
                            if(j == 1)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 4)
                        {
                            if(j == 0)
                            {
                                soma += matriz[i][j];
                            }
                        }
                    }
                }
            }
            else if(diagonal == 3)
            {
                /* Primeira diagonal */
                for(i = 0; i< 5; i++)
                {
                    for(j = 0; j < 5; j++)
                    {
                        if(i == 0)
                        {
                            if(j == 0)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 1)
                        {
                            if(j == 1)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 2)
                        {
                            if(j == 2)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 3)
                        {
                            if(j == 3)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 4)
                        {
                            if(j == 4)
                            {
                                soma += matriz[i][j];
                            }
                        }
                    }
                }
                /* Segunda diagonal */
                for(i = 0; i< 5; i++)
                {
                    for(j = 0; j < 5; j++)
                    {
                        if(i == 0)
                        {
                            if(j == 4)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 1)
                        {
                            if(j == 3)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 2)
                        {
                            if(j == 2)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 3)
                        {
                            if(j == 1)
                            {
                                soma += matriz[i][j];
                            }
                        }
                        else if(i == 4)
                        {
                            if(j == 0)
                            {
                                soma += matriz[i][j];
                            }
                        }
                    }
                }
            }
        /* Calculo sem as digonais */
        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                if(i == 0)
                {
                    if(j != 0)
                    {
                        if(j != 4)
                        {
                            somad += matriz[i][j];
                        }
                    }
                }
                else if(i == 1)
                {
                    if(j != 1)
                    {
                        if(j != 3)
                        {
                            somad += matriz[i][j];
                        }
                    }
                }
                else if(i == 2)
                {
                    if(j != 2)
                    {
                        somad += matriz[i][j];
                    }
                }
                else if(i == 3)
                {
                    if(j != 1)
                    {
                        if(j != 3)
                        {
                            somad += matriz[i][j];
                        }
                    }
                }
                else if(i == 4)
                {
                    if(j != 0)
                    {
                        if(j != 4)
                        {
                            somad += matriz[i][j];
                        }
                    }
                }
            }
        }
    
    /* saida de dados */
    if(diagonal == 1)
    {
        printf("A soma da diagonal principal: %i\n\n", soma);
    }
    else if(diagonal == 2)
    {
        printf("A soma da diagonal secundaria: %i\n\n", soma);
    }
    else if(diagonal == 3)
    {
        printf("A soma das duas diagonal, principal e secundaria: %i\n\n", soma);
    }
    printf("A soma sem as diagonais: %i\n\n", somad);
    diferenca = somad - soma;
    printf("A diferença dos valores: %i\n\n", diferenca);
}
/* fim do código */