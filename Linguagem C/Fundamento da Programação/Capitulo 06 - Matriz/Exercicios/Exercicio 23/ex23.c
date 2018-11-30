/*Faça um programa que carregue uma matriz 4x5, calcule e mostre um vetor com cinco posições, onde cada posição contém a soma dos elementos de cada coluna da matriz. Mostre apenas os elementos dos vetores maiores que 10. Se não existir nenhum elemento maior que dez mostre uma mensagem.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ELEMENTOS DA MATRIZ*/
#define LINHA 4
#define COLUNA 5

/*INICIO DO CÓDIGO*/
main()
{
    /*LOCALIZAÇÃO*/
    setlocale(LC_ALL, "Portuguese");

    /*DECLARAÇÃO DE VARIÁVEIS*/
    int matrizQC[LINHA][COLUNA] = {0};
    int i, j, k = 0;
    int vetorSoma[COLUNA] = {0};

    /*ENTRADA DE DADOS*/
    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {
            printf("Linha %d\nColuna %d\nDigite um numero inteiro: ", i + 1, j + 1);
            scanf("%d", &matrizQC[i][j]);
        }
        printf("\n");
    }
    
    /*BLOCO DE COMANDOS*/
        /*SOMA DAS COLUNAS*/
        for(j = 0; j < COLUNA; j++)
        {
            for(i = 0; i < LINHA; i++)
            {
                k++;
                vetorSoma[j] += matrizQC[i][j];
            }
        }
        
        /*SAÍDA DE DADOS*/
        printf("Tabela com a soma das colunas da Matriz:\n");
        if(k > 10)
        {
            for(i = 0; i < LINHA; i++)
            {
                if(vetorSoma[i] > 10)
                {
                    printf("%d\t", vetorSoma[i]);
                }
                else
                {
                    //Não fazer nada
                }
            }
        }
        else
        {
            printf("\nNão há valores maiores que 10 nesta sequência.\n");
        }
        printf("\n");
    system("Pause");
    return 0;
}
/*FIM DO CÓDIGO*/