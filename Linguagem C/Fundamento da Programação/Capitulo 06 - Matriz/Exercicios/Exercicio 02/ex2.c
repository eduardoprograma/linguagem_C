/*Faça um programa que carregue uma matriz 2x4 com números inteiros, calcule e mostre:
* A quantidade de elemntos entre 12 e 20 em cada linha;
* A média dos elementos pares da matriz;*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elementos da Matriz*/
#define LINHA 2
#define COLUNA 4

/*Inicio*/
main()
{
    /*Definição da linguagem*/
    setlocale(LC_ALL, "portuguese");

    /*Declaração das varáveis*/
    int mat[LINHA][COLUNA] = {0};
    int i, j, num, cont = 0;
    int media = 0, soma = 0;

    /*Entrada de dados*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("Digite o %dº número da linha %d: ", j, i);
            scanf("%d", &num);
            mat[i][j] = num;
        }
        printf("\n");
    }
    
    /*Bloco de comandos*/
    for(i = 0; i < LINHA; i++)
    {
        cont = 0;
        for(j = 0; j < COLUNA; j++)
        {
            if(mat[i][j] >= 12 && mat[i][j] <= 20)
            {
                cont++;
            }
        }
        printf("\nA quantidade de números entre 12 e 20 na %dª Linha é : %d\n", i, cont);
    }
    cont = 0;
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            int divisao = mat[i][j] % 2;
            if(divisao == 0)
            {
                cont++;
                soma += mat[i][j];
            }
        }
    }
    media = soma / cont;
    printf("\nA media dos números pares é: %d\n\n", media);
    system("pause");
    return 0;    
}