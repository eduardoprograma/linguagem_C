/*Faça um programa que receba os preços de 20 produtos em 5 lojas diferentes e armazene-os em uma matriz 20x5. Desconsiderando empates, mostre o número do produto e o número da loja do produto mais caro.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ELEMENTOS DOS VETORES E MATRIZES DO PROGRAMA*/
#define PRODUTO_PRECO 20
#define LOJA 5

/*INICIO*/
main()
{
    /*DECLARAÇÃO DAS VARIÁVEIS*/
    float matrizLojas[PRODUTO_PRECO][LOJA] = {0};
    int i, j, loja = 0, produto = 0;
    float maior = 0.00,  menor = 0.00;

    /*ENTRADA DE DADOS*/
    for(i = 0; i < PRODUTO_PRECO; i++)
    {
        printf("Produto %d", i + 1);
        for(j = 0; j < LOJA; j++)
        {
            printf("\nLoja %d\n", j + 1);
            printf("Digite o valor do produto %d: R$ ", i + 1);
            scanf("%f", &matrizLojas[i][j]);
        }
        printf("\n");
    }
    
    /*BLOCO DE COMANDOS*/
    for(i = 0; i < PRODUTO_PRECO; i++)
    {
        for(j = 0; j < LOJA; j++)
        {
            if(matrizLojas[i][j] > maior)
            {
                maior = matrizLojas[i][j];
                loja = j + 1;
                produto = i + 1;
            }
            else
            {
                //fazer nada
            }
        }
    }
    
    /*SAÍDA DE DADOS*/
    printf("\nNa loja %d o produto %d é o mais caro.\nSeu valor é de R$ %.2f\n", loja, produto, maior, setlocale(LC_ALL, "portuguese"));
    system("pause");
    return 0;
}
/*Fim do código*/