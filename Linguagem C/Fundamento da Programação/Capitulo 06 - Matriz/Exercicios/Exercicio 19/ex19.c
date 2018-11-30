/*Faça um programa que carregue uma matriz 5x5 com números reais e encontre o maior valor da matriz. A seguir, multiplique cada elemento da diagonal principal pelo maior valor encontrado. Mostre a matriz resultante após as multiplicações.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ELEMENTOS DA MATRIZ*/
#define MATE 5

/*INICIO*/
main()
{
    /*LOCALIZAÇÃO*/
    setlocale(LC_ALL, "Portuguese-br");

    /*DECLARAÇÃO DAS VARIÁVEIS*/
    float matrizCinco[MATE][MATE] = {0};
    int i, j;
    float maior = 0, mulDiagonal[MATE][MATE] = {0};

    /*ENTRADA DE DADOS*/
    for(i = 0; i < MATE; i++)
    {
        for(j = 0; j < MATE; j++)
        {
            printf("L:%d,  C:%d:_Digite um numero real: ", i + 1, j + 1);
            scanf("%f", &matrizCinco[i][j]);
        }
        printf("\n");
    }
    
    /*BLOCO DE COMANDO*/
    /*ESTABELECER O MAIOR*/
    for(i = 0; i < MATE; i++)
    {
        for(j = 0; j < MATE; j++)
        {
            if(matrizCinco[i][j] > maior)
            {
                maior = matrizCinco[i][j];
            }
        }
    }
    
    /*MULTIPLICAR A DIAGONAL PELO NUMERO MAIOR*/
    for(i = j = 0; i < MATE; i++)
    {
        mulDiagonal[i][j] = maior * matrizCinco[i][j];
        j++;
    }

    /*SAÍDA DE DADOS*/
    /*MATRIZ DIGITADA*/
    printf("\n\nMatriz fornecida pelo usuario:\n");
    for(i = 0; i < MATE; i++)
    {
        for(j = 0; j < MATE; j++)
        {
            printf("%.2f\t", matrizCinco[i][j]);
        }
        printf("\n");
    }
    
    /*MATRIZ CALCULADA*/
    /*printf("\nTabela com valores da diagonal principal multiplicada pelo maior numero.\n");
    for(i = 0; i < MATE; i++)
    {
        for(j = 0; j < MATE; j++)
        {
            printf("%.2f\t", mulDiagonal[i][j]);
        }
        printf("\n");
    }*/
    printf("\nTabela com valores da diagonal principal multiplicada pelo maior numero.\n");
    for(i = 0; i < MATE; i++)
    {
        for(j = 0; j < MATE; j++)
        {
            if(mulDiagonal[i][j] > 0)
            {
                printf("%.2f\t", mulDiagonal[i][j]);
            }
            else
            {
                printf("%s\t", " ");
            }
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
