/*Programa que carrega um vetor de 6 elementos numéricos inteiros*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*A quantidade de números pares;
  Quais os números pares;
  A quantidade de números impares;
  Quais os números impares;*/
//void quantNumPares(int);
//void quaisNumPares();
//void quantNumImpares();
//void quaisNumImpares();

/*Pré processador SIZE*/
#define SIZE 6

/*Inicio*/
int main(){
    setlocale(LC_ALL, "Portuguese");

    /*Declaração das varáveis*/
    int ni = 0, np= 0, resto, p;
    int vetor[SIZE] = {0}, n = 0, i, aux;

    /*Entrada de dados*/
    for(i = 0; i < SIZE; i++)
    {
        printf("Digite um número enquanto solicitado: ");
        scanf("%d", &n);
        vetor[i] = n;
    }
    /*Destacando número pares e impares*/
    for(i = 0; i < SIZE; i++)
    {   
        aux = vetor[i];
        resto = (aux %= 2);
        if (resto == 0) {
            np++;
        }
        else
        {
            ni++;
        }
        n++;
    }
    /*Quais são pares e quais são impares*/
    printf("\nOs vetores pares são: \n");
    for(i = 0; i < SIZE; i++)
    {
        aux = vetor[i];
        resto = (aux %= 2);
        if(resto == 0){
            printf(" Vetor[%d],", vetor[i]);
        }
        else{
            /*Não faça nada*/
        }
    }
    /*Quantidade de números pares.*/
    printf("\nNumeros pares: %d\n", np);
    /*Quais são os números impares.*/
    printf("\nOs vetores impares são: \n");
    for(i = 0; i < SIZE; i++)
    {
        aux = vetor[i];
        resto = (aux %= 2);
        if(resto == 1){
            printf(" Vetor[%d],", vetor[i]);
        }
        else{
            /*Não faça nada*/
        }
    }
    printf("\nNumeros impares: %d\n", ni); 
    /*Saída dos valores*/
    printf("\nNúmeros digitados para os vetores:\n");
    for(i = 0; i < SIZE; i++)
    {
        printf(" %d,", vetor[i]);
    }
    printf("\n");
    system("pause");
    return 0;  
}