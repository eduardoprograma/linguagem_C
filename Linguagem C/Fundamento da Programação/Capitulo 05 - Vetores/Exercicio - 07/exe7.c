/*Porgrama carrega 1 vetor com 10 números reais:
 *Calcula e mostra:
 *Total de números negativos;
 *A soma dos números positivos;*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Definição do números de elementos do vetor */
#define SIZE 10

/* Inicio */
main(){
    setlocale(LC_ALL, "pt-br");

    /* Decalaração de varáveis */
    float vetorR[SIZE] ={0.0}, n, soma = 0;
    int i, nn = 0; 

    /* Entrada de dados */
    for(i = 0; i < SIZE; i++)
    {
        printf("Digite um numero real: ");
        scanf("%f", &n);
        vetorR[i] = n;
    }

    /* Bloco de comando */
    for(i = 0; i < SIZE; i++)
    {
        /* Bloco de comando para encontar números negativos */
        if(vetorR[i] < 0){
            nn++;
        }

        /* Bloco de comando para realizar a soma dos números positivos */
        if(vetorR[i] >= 0){
            soma += vetorR[i];
        }
    }
    printf("\nA quantidade de numeros negativos e %d\n\n", nn);
    printf("A soma dos numeros pares e %.2f\n\n", soma);
    system("pause");
    return 0;
}