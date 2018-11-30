/*Faça um programa que carregue uma matriz 5x5 de números reais, calcule e mostre a soma dos elementos da diagonais secundária.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ELEMENTOS DA MATRIZ*/
#define MAT 5

/*INICIO*/
main()
{
    /*LOCALIZAÇÃO*/
    setlocale(LC_ALL, "Portuguese");

    /*DECLARAÇÃO DE VARIÁVEIS*/
    float matrizCinco[MAT][MAT] ={0};
    int i, j;
    float somaDiagonal = 0;

    /*ENTRADA DE DADOS*/
    for(i = 0; i < MAT; i++)
    {
        for(j = 0; j < MAT; j++)
        {
            printf("L:%d, C:%d:. Digite um numero real: ", i + 1, j + 1);
            scanf("%f", &matrizCinco[i][j]);
        }
        printf("\n");
    }
    
    /*BLOCO DE COMANDOS*/
    j = 5;
    for(i = 0; i < MAT; i++)
    {
        j--;
        somaDiagonal += matrizCinco[i][j];
    }
    
    /*SAÍDA DE DADOS*/
    printf("a soma da diagonal secundaria e : %.2f", somaDiagonal);

    system("pause");
    return 0;
}