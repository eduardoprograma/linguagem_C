/*Faça um programa que carregue uma matriz 2x3, calcule e mostre a quantidade de elementos da matriz que não pertencem ao intervalo |5, 15|.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elementos da Matriz e do vetor*/
#define LINHA 2
#define COLUNA 3

/*Inicio*/
main()
{
    /*Localização*/
    setlocale(LC_ALL, "Portuguese-brazilian");

    /*Declaração de variáveis*/
    int vetorNumber[LINHA][COLUNA] = {0}, i, j;
    int naoPert = 0, pert = 0;

    /*Entrada de dados*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("L%d C%d: Digite um numero inteiro: ", i + 1, j + 1);
            scanf("%d", &vetorNumber[i][j]);
        }
    }
    
    /*Bloco de comandos*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            /*Compara se os numeros estão dentro do intervalo |5, 15|*/
            if(vetorNumber[i][j] >= 5 && vetorNumber[i][j] <= 15)
            {
                pert++;
            }
            else{
                naoPert++;
            }
        }
    }
    
    /*Saída de dados*/
    printf("\nO numero de elementos que não pertencem ao intervalo |5, 15| e: %d\n\n", naoPert);
    system("pause");
    return 0;
}