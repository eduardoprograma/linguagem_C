/*Faça um programa que:
* Receba o preço de 10 produtos e armazene-os em um vetor;
* Receba a quantidade estocada de cada um desses produtos em cinco armazéns diferentes, utilizando uma matriz 5x10.
Calcule e mostre:
* A quantidade de produtos estocados em cada um dos armazens;
* A quantidade de cada um dos produtos estocados em todos os armazéns juntos;
* O preço do produto que possui maior estoque em um único armazem;
* O menor estoque armazenado;
* O custo de cada armazém.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ELEMENTOS DOS VETORES E DAS MATRIZES*/
#define LINHA 5
#define COLUNA 10
#define PRECO 10

/*INICIO DO CÓDIGO*/
main()
{
    /*LOCALIZAÇÃO*/
    setlocale(LC_ALL, "portuguese");

    /*DECLARAÇÃO DAS VARIÁVEIS*/
    float vetorPreco[COLUNA] = {0};
    int matrizProduto[LINHA][COLUNA] = {0};
    float matrizPreco[LINHA][COLUNA] = {0};
    int i, j, maior = 0, menor = 0;
    int vetorProduto[COLUNA] = {0};
    
    /*ENTRADA DE DADOS*/
        /*PREÇO DOS PRODUTOS*/
        for(i = 0; i < COLUNA; i++)
        {
            printf("\nDigite o valor do produto %d: ", i + 1);
            scanf("%f", &vetorPreco[i]);
        }
    
        /*QUANTIDADE ESTOCADA DE PRODUTOS EM CINCO ARMAZENS*/
        for(i = 0; i < LINHA; i++)
        {
            printf("\nArmazem %d\nDigite os valores estocados:\n", i +1);
            for(j = 0; j < COLUNA; j++)
            {
                printf("Produto %d: ", j + 1);
                scanf("%d", &matrizProduto[i][j]);
            }
            printf("\n");
        }
        
    /*BLOCO DE COMANDOS*/
        /*A quantidade de produtos estocados em cada um dos armazens*/
        for(i = 0; i < LINHA; i++)
        {
            for(j =  0; j < COLUNA; j++)
            {
                vetorProduto[i] += matrizProduto[i][j];
            }
        }
        
        /*A quantidade de cada um dos produtos estocados em todos os armazéns juntos*/
        int vetorProdutoGeral[COLUNA] = {0};
        for(i = 0; i < COLUNA; i++)
        {
            for(j = 0; j < LINHA; j++)
            {
                vetorProdutoGeral[i] = matrizProduto[j][i];
            }
        }
        
        /*O preço do produto que possui maior estoque em um único armazem*/
        int armazem = 0;
        float preco = 0;
        for(i = 0; i < LINHA; i++)
        {
            for(j = 0; j < COLUNA; j++)
            {
                if(matrizProduto[i][j] > maior)
                {
                    maior = matrizProduto[i][j];
                    armazem = i + 1;
                    preco = vetorPreco[j];
                }
                /*O menor estoque armazenado*/
                else
                {
                    menor = matrizProduto[i][j];
                    armazem = i + 1;
                    preco = vetorPreco[j];
                }
            }
        }
        
        /*O custo de cada armazém*/
        float totalCusto[COLUNA] = {0};
        for(i = 0; i < COLUNA; i++)
        {
            totalCusto[i] = vetorProduto[i] * vetorPreco[i];
        }
        
    /*SAÍDA DE DADOS*/
        /*QUANTIDADE DE PRODUTO ESTOCADO*/
        printf("\nA quantidade de produtos estocados em cada Armazem:\n");
        printf("%s\t%s\t\n", "Armazem", "Estoque");
        for(i = 0; i < COLUNA; i++)
        {
            printf("%d\t%d\t", i + 1, vetorProduto[i]);
        }
        
        /*A QUANTIDADE DE CADA PRODUTO ESTOCADO EM TODOS OS ARMAZÉNS JUNTOS*/
        printf("\nA quantidade de cada produto estocado em todos Armazens:\n");
        printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n", "Pro-1", "Pro-2", "Pro-3", "Pro-4", "Pro-5", "Pro-6", "Pro-7", "Pro-8", "Pro-9", "Pro-10");
        for(i = 0; i < COLUNA; i++)
        {
            printf("%d\t", vetorProdutoGeral[i]);
        }
        /*PREÇO DO PRODUTO QUE POSSUI MAIS ESTOQUE*/
        printf("\nO produto que possui maior estoque:\n");
        printf("%s\t%s\t%s\t", "Armazem", "Estoque", "Preço");
        printf("%d\t%d\t%.2f\t\n", armazem, maior, preco);

        /*MENOR ESTOQUE*/
        printf("\nO produto que possui maior estoque:\n");
        printf("%s\t%s\t%s\t", "Armazem", "Estoque", "Preço");
        printf("%d\t%d\t%.2f\t\n", armazem, menor, preco);

        /*CUSTO DE CADA ARMAZÉM*/
    system("pause");
    return 0;
}
/*FIM DO CÓDIGO*/