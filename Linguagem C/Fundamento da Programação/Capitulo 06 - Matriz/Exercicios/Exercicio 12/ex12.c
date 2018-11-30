/*Faça um programa que carregue uma matriz 6x4. Recalcule a matriz digitada, onde cada linha será multiplicada pelo maior elemento da linha em questão. Mostre a matriz resultante.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elementos do vetor*/
#define LINHA 6
#define COLUNA 4

/*Inicio*/
main()
{
    setlocale(LC_ALL, "Portuguese-brazilian");

    /*Declaração de varáveis*/
    int vetorNumber[LINHA][COLUNA] = {0}, i, j, num = 0;
    int multipl = 0, maior = 0, menor = 0;
    int vetorMult[LINHA] = {0}, k = 0;

    /*Entrada de dados*/
    printf("\nDigitara 24 numeros para compor a nossa matriz:\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            k++;
            printf("N %d: Digite um numero: ", k);
            scanf("%d", &num);
            vetorNumber[i][j] = num;
        }
    }
    
    /*Bloco de comandos*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            /*Comparação para saber qual é o numero maior de cada linha*/
            if(vetorNumber[i][j] > maior)
            {
                maior = vetorNumber[i][j];
            }
            else
            {
                menor = vetorNumber[i][j];
            }
            vetorMult[i] = maior;   //Coloca o numero maior em um vetor
        }
        /*Multiplica o numero maior de cada linha pelos numeros na mesma linha da Matriz*/
        for(j = 0; j < COLUNA; j++)
        {
            vetorNumber[i][j] *= vetorMult[i];
        }
    }

    /*Saída de dados*/
    printf("\nMatriz resultante da multiplicacao:\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("%d\t", vetorNumber[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}