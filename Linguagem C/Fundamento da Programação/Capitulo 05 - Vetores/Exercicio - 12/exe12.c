/*Programa recebe 5 números*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Define os elementos do vetor */
#define SIZE 5

/* INICIO */
main()
{
    setlocale(LC_ALL, "pt-br");

    /* DECLARAÇÃO DAS VARIÁVEIS */
    int vetor1[SIZE] = {0}, i, n, soma = 0;

    /* ENTRADA DE DADOS */
    for(i = 0; i < SIZE; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &n);
        vetor1[i] = n;
    }

    /* BLOCO COMANDO E SAÍDA DE DADOS */
    for(i = 0; i < SIZE; i++)
    {
        soma += vetor1[i];
    }
    printf("\nOs numeros digitados foram: \n");
    printf("\n%d + %d + %d + %d + %d = %d\n\n", vetor1[0], vetor1[1], vetor1[2], vetor1[3], vetor1[4], soma);
    system("pause");
    return 0;
}