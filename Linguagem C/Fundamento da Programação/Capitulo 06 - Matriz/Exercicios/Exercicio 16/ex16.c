/*Faça um programa que calcule e mostre a média dos elementos da diagonal principal de uma matriz 10x10.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ELEMENTOS DA MATRIZ*/
#define LINHA 10
#define COLUNA 10

/*INICIO*/
main()
{
    /*LOCALIZAÇÃO*/
    setlocale(LC_ALL, "Portuguese-Brazilian");

    /*DECLARAÇÃO DE VARIÁVEIS*/
    int matrizNum[LINHA][COLUNA] = {0};
    int i, j;
    int somaDiagonal = 0;

    /*ENTRADA DE DADOS*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("L:%d C:%d : Digite um número: ", i + 1, j +1);
            scanf("%d", &matrizNum[i][j]);
        }
        printf("\n");
    }
    
    /*BLOCO DE COMANDO*/
    /*CALCULO DA DIAGONAL*/
    for(i = 0; i < LINHA; i++)
    {
        j++;
        somaDiagonal += matrizNum[i][j];
    }
    
    /*SAÍDA DE DADOS*/
    printf("\n\nO valor e: %d\n\n", somaDiagonal);

    /*ECERRAMNTO*/
    system("pause");
    return 0;
}
/*FIM DO CÓDIGO*/