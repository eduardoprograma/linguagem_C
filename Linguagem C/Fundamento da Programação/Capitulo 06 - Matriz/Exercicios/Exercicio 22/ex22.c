/*Faça um programa qua carregue uma matriz 3x4, calcule e mostre:
* A quantidade de elementos pares;
* A soma dos elementos ímpares;
* A média de todos os elementos.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ELEMENTOS DAS MATRIZES OU VETORES*/
#define LINHA 3
#define COLUNA 4

/*INICIO*/
main()
{
    /*LOCALIZAÇÃO*/
    setlocale(LC_ALL, "Portuguese-br");

    /*DECLARAÇÃO DE VARIÁVEIS*/
    int matrizNova[LINHA][COLUNA] = {0};
    int i, j;
    int pares = 0, impares = 0;
    int media = 0;

    /*ENTRADA DE DADOS*/
    printf("Digite a quantidade de numeros que lhe for solicitado para que completemos a nossa Matriz 3x4:\n");
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("Linha %d, Coluna %d\nDigite um numero inteiro: ", i + 1, j + 1);
            scanf("%d", &matrizNova[i][j]);
        }
        printf("\n");
    }

    /*BLOCO DE COMANDOS*/
        /*IMPARES E PARES*/
        for(i = 0; i < LINHA; i++)
        {
            for(j = 0; j < COLUNA; j++)
            {
                int num = 0;
                num = matrizNova[i][j] % 2;
                if(num == 0)
                {
                    pares++;
                }
                else
                {
                    impares++;
                }
            }
        }

        /*CALCULO DA MÉDIA*/
        int soma = 0;
        for(i = 0; i < LINHA; i++)
        {
            for(j = 0; j < COLUNA; j++)
            {
                soma += matrizNova[i][j];
            }
        }
        media =  soma / (LINHA * COLUNA);

    /*SAÍDA DE DADOS*/
    printf("\nA quantidade de numeros pares %d.\n", pares);
    printf("\nA quantidade de numeros impares %d.\n", impares);
    printf("\nA media dos numeros fornecidos para a matriz %d", media);
    printf("\n");

    system("pause");
    return 0;    
}
/*FIM DO CÓDIGO*/