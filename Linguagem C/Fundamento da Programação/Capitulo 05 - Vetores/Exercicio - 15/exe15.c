/*Programa recebe o nome de 8 clientes em uma vetor. No segundo vetor armazena a quantidade de fita locada:
 *Para cada locação o cliente tem direito a uma locação grátis*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* DEFINE A QUANTIDADE DE ELMENTOS DOS VETORES */
#define SIZECLIENTEL 8
#define SIZECLIENTEC 8
#define SIZELOCACAO 8

/* INICIO */
main()
{
    setlocale(LC_ALL, "pt-br");

    /* DECLARAÇÃO DAS VARIÁVEIS */
    char vetorCliente[SIZECLIENTEL][SIZECLIENTEC] = {0};
    int vetorLocacao[SIZELOCACAO] = {0}, i, l;

    /*ENTRADA DE DADOS */
    for(i =0; i <SIZECLIENTEL; i++)
    {
        printf("Digite o nome do cliente : ");
        scanf("%s", vetorCliente[i]);
        printf("Digite a qunatidade de locaçoes: ");
        scanf("%d", &l);
        vetorLocacao[i] = l;
    }

    /* BLOCO DE COMANDOS */
    printf("Relatório:\n");
    printf("%10s\t%10s\t\n", "Clientes", "Locacao");
    for(i = 0; i < SIZECLIENTEL; i++)
    {
        int gratis = 0;
        gratis = vetorLocacao[i] / 10;
        printf("%10s\t%10d\t\n", vetorCliente[i], gratis);
    }
    printf("\n");
    system("pause");
    return 0;
}