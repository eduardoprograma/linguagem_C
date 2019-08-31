/*
 ============================================================================
 Name			: exercicio_2.23
 Author      	: Eduardo Felizardo
 Creation date 	: 31/08/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_2 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
 2.23 Maiores e menores inteiros. Escreva um programa que leia cinco inteiros 
 e depois determine e imprima o maior e o menor inteiro no grupo. Use apenas 
 as técnicas de programação que você aprendeu neste capítulo.
 ============================================================================
*/ 

#include <stdio.h>

/* inici da função main */
int main()
{
    /* declaração das variáveis */
    int maior;      //variável de maior inteira;
    int menor;      //variável de menor inteira;
    int N1;         //variável 3 inteira;
    int N2;         //variável 4 inteira;
    int N3;         //variável 5 inteira;
    int aux;        //variável auxiliar ou temporaria.

    /* entrada de dados */
    printf("Digite cinco(5) numeros inteiros: ");
    scanf("%d%d%d%d%d", &maior, &menor, &N1, &N2, &N3);

    /* processamento dos dados */
    //descobrindo o maior numero
    if(menor > maior)
    {
        aux = maior;        //muito importante está fase.
        maior = menor;
        menor = aux;
    }
    if(N1 > maior)
    {
        maior = N1;
    }
    if(N2 > maior)
    {
        maior = N2;
    }
    if(N3 > maior)
    {
        maior = N3;
    }

    //descobrindo o menor numero.
    if(N1 < menor)
    {
        menor = N1;
    }
    if(N2 < menor)
    {
        menor = N2;
    }
    if(N3 < menor)
    {
        menor = N3;
    }

    /* saída de dados */
    printf("O maior numero e %d.\n", maior);
    printf("O menor numero e %d.\n", menor);

    return 0;       //sucesso do programa.
}
/* fim da função main */



