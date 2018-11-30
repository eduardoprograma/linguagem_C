/*Teste de escrita na matriz*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Definindo volume do vetor Matriz*/
#define LINHA 2
#define COLUNA 2

/*INICIO*/
main()
{
    /*definição da linguagem no visual code*/
    setlocale(LC_ALL, "portuguese-brazilian");

    /*Declarandoa as variáveis*/
    int mat[LINHA][COLUNA] = {0}, num, i, j;

    /*Entrada de dados*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Digite um numero inteiro: ");
            scanf("%d", &num);
            mat[i][j]= num;
        }
    }

    /*Saída de dados*/
    for(i = 0; i < LINHA; i++)
    {
        for(j =0; j < COLUNA; j++)
        {
            printf(" %d, ", mat[i][j]);
        }
        printf("\n");
    }
    
    system("pause");
    return 0;
}