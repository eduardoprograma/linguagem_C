/*Faça um programa que carregue uma matriz 5x5 de números reais. A seguir, multiplique cada linha pelo elemento da diagonal principal daquela linha. Mostre a matriz após as multiplicações.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ELEMENTOS DA MATRIZ*/
#define CINCO 5

/*INICIO*/
main()
{
    /*LOCALIZAÇÃO*/
    setlocale(LC_ALL, "Portuguese-br");

    /*DECLARAÇÃO DE DADOS*/
    float matrizCinco[CINCO][CINCO] = {0};
    int i, j;
    float vetorDiagonal[CINCO]= {0};
    
    /*ENTRADA DE DADOS*/
    for(i = 0; i < CINCO; i++)
    {
        for(j = 0; j < CINCO; j++)
        {
            printf("L:%d, C:%d :_Digite um numero real: ", i +1, j + 1);
            scanf("%f", &matrizCinco[i][j]);
        }
        printf("\n");
    }
    
    /*BLOCO DE COMANDO*/
    /*SELECIONAR A DIAGONAL PRINCIPAL*/
    for(i = j = 0; i < CINCO; i++)
    {
        vetorDiagonal[i] = matrizCinco[i][j];
        j++;
    }
    
    /*MULTIPLICAÇÃO DA DIAGONAL PRINCIPAL POR CADA INTEGRANTE DA MATRIZ*/
    for(i = 0; i <= CINCO; i++)
    {
        for(j = 0; j < CINCO; j++)
        {
            matrizCinco[i][j] = vetorDiagonal[i] * matrizCinco[i][j];
        }
    }
    
    /*SAÍDA DE DADOS*/
    printf("\n\nMatriz apos a multiplicacao:\n\n");
    for(i = 0; i < CINCO; i++)
    {
        for(j = 0; j < CINCO; j++)
        {
            printf("%.2f\t", matrizCinco[i][j]);
        }
        printf("\n");
    }
    
    system("pause");
    return 0;
}
/*FIM DO CÓDIGO*/