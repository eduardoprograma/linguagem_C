/*
 ============================================================================
 Name			: ?
 Author      	: Eduardo Felizardo
 Creation date 	: 28/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Proposta no YouTube
 ============================================================================
*/
/*
 ============================================================================
 fiz esse código só que está errado por que toda hora que eu coloco um número 
 par por exemplo 22 ele da par mas se eu coloco um impar como o 33 ele ta dan
 do par tbm oq eu errei e como faço pra dar par quando for par e impar quando 
 for impar
 ============================================================================
*/ 
#include <stdio.h>
#include <stdlib.h>

/* inicio da função main */
int main()
{
    /* declaração de variáveis */
    int N1, N2, N3;
    int menor , maior;
    int aux = 0;      //variável auxilia em par ou impar

    /* entrada de dados */
    printf("Digite o primeiro numero inteiro: ");   //primeiro número inteiro
    scanf("%d", &N1);
    printf("Digite o segundo numero inteiro: ");   //segundo número inteiro
    scanf("%d", &N2);
    printf("Digite o terceiro numero inteiro: ");   //terceiro número inteiro
    scanf("%d", &N3);

    /* processamento de dados */
    //Compara o menor.
    menor = N1;     //Caso não haja número menor que N1, então ele será o menor.

    if((N2 < N1) && (N2 < N3))
    {
        menor = N2;
    }
    if((N3 < N1) && (N3 < N2))
    {
        menor = N3;
    }

    //Compara o maior
    maior = N1;     //Caso não haja número maior que N1, então ele será o menor.

    if((N2 > N1) && (N2 > N3))
    {
        maior = N2;
    }
    if((N3 > N1) && (N3 > N2))
    {
        maior = N3;
    }

    /* saída de dados */
    printf("O numero menor e %d. ", menor);   

    /* Diz se o número menor é par ou impar */
    aux = menor % 2;
    if(aux == 0)
    {
        printf("Este numero e par.\n");
    }
    else
    {
        printf("Este numero e impar.\n");
    }


    printf("O numero maior e %d. ", maior);   

    /* Diz se o número menor é par ou impar */
    aux = maior % 2;
    if(aux == 0)
    {
        printf("Este numero e par.\n");
    }
    else
    {
        printf("Este numero e impar.\n");
    }

    return 0;       //Caso o programa tenha sucesso.
    
}
/* fim da função main */
