/*Programa carrega 10 números inteiros em 1 vetor*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Definição de elementos do vetor */
#define SIZE 10

/* INICIO */
main()
{
    setlocale(LC_ALL, "pt-br");

    /* Declaração de variáveis */
    int vetorM[SIZE] = {0}, i, n;

    /* Entrada de dados */
    printf("\n Sera pedido 10 numeros inteiros para voce.\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &n);
        vetorM[i] = n;
    }

    /* Bloco de comando */
    printf("\nVetores pares: \n");
    for(i = 0; i < SIZE; i++)
    {
        int aux;
        aux = (vetorM[i] % 2);
        if(aux == 0){
            printf(" Vetor[%d] = %d,", i, vetorM[i]);
        }
    }

    /* Bloco de comando */
    printf("\nVetores impares: \n");
    for(i = 0; i < SIZE; i++)
    {
        int aux;
        aux = (vetorM[i] % 2);
        if(aux != 0){
            printf(" Vetor[%d] = %d,", i, vetorM[i]);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}