/*Programa carrega 1 vetor com 15 elementos inteiros, e verifica a existencia de elementos iguais a 30, mostrando as posições em que esses elementos aparecem*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define SIZE 15 //minha definição de números de elementos do vetor
int main()
{
    setlocale(LC_ALL, "pt-br");
    /*Declaração de varáveis*/
    int vetor[SIZE] = {0}, i, n, np, ni;

    /*Entrada de dados*/
    for(i = 0; i < SIZE; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        vetor[i] = n;
    }
    /*Bloco de comando*/
    printf("\n%s\t%s\t\n\n", "Elemento", "Valor");
    for(i = 0; i < SIZE; i++)
    {
        if (vetor[i] == 30) {
            printf("Vetor[%d]\t%d\t\n", i, vetor[i] );
            ni++;
        }
        else
        {
            np++;
        }
    }
    if(np > 0 && ni == 0){
        printf("\nNão existe valores de vetores = 30.\n");
    }
    system("pause");
    return 0;
}

