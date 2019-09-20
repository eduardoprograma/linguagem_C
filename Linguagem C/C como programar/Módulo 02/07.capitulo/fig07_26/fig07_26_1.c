/*
 ============================================================================
 Name			: fig07_26
 Author      	: Eduardo Felizardo
 Creation date 	: 11/09/2019
 Version     	: R00
 Copyright   	: programacaoedu@gmail.com
 Description 	: Capitulo_7 - C Como programar - Deitel
 ============================================================================
*/
/*
 ============================================================================
    Fig. 07.26: fig07_26.c
    Programa de multiplas finalidades usando ponteiro para função.
 ============================================================================
*/
/* inicio do cabeçalho */
#include<stdio.h>
/* fim do cabeçalho */

/* inicio de define */
#define SIZE 10
/* fim de define */
/* inicio protótipo da função */
void bubble(int work[], const int size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);
/* fim protótipo da função */

/* inicio da função main */
int main()
{
    int order;/* 1 para ordem crescente ou 2 para ordem decrescente */
    int counter;/* contador */

    /* inicializa o array a */
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    printf("Digite 1 para classificar em ordem crescente,\n"
           "Digite 2 para classificar em ordem decrescente: ");
    scanf("%d", &order);

    printf("\nItens de dados na ordem original.\n");

    /* mostra array na ordem original */
    for(counter = 0; counter < SIZE; counter++)
    {
        printf("%5d", a[counter]);
    }/* termino de for */

    /* Classifica array em ordem crescente: passa a função crescente como
       um argumento para especificar classificação crescente */
       if(order == 1)
       {
           bubble(a, SIZE, ascending);
           printf("\nItens de dados em ordem crescente.\n");
       }/* fim do if */
       else
       {
           /* passa por uma função decrescente */
           bubble(a, SIZE, descending);
           printf("\nItens de dados em ordem decrescente.\n");
       }/* fim de else */

       /* mostra array ordenado */
       for(counter = 0; counter < SIZE; counter++)
       {
           printf("%5d", a[counter]);
       }/* fim de for */

       printf("\n");
       return 0;/* inidica conclusão bem-sucedida */
}
/* fim da função main */

/* bubble sorte de mútipla finalidade; parâmentro compare é um ponteiro
   para a função de comparação que determina a classificação */
void bubble(int work[], const int size, int (*compare)(int a, int b))
{
    int passada;/* contador de passadas */
    int contador;/* contador de comparação */
    
    void inverte(int *element1Ptr, int element2Ptr);/* protótipo da função */

    /* loop para controlador das passadas */
    for(passada = 1; passada < size; passada++)
    {
        /* loop para controlar o nímero de comparações por passada */
        for(contador = 0; contador < size - 1; contador++)
        {
            /* se elementos estão fora de ordem inverta-os */
            if((*compare)(work[contador], work[contador + 1]))
            {
                inverte(&work[contador], &work[contador + 1]);
            }/* fim do if */
        }/* fim do for */
    }/* fim do for */
}/* fim da função bubble */

/* inicio da função inverte */
/* troca os locais de memória aoa quais element1Ptr e 
element22Ptr apntam */
void inverte(int *element1Ptr, int *element2Ptr)
{
    int manutencao;/* variável de manutenção temporário */

    manutencao = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = manutencao;
}
/* fim da função inverte */

/* incicio da função crescente */
/* determina se os elemento estão fora de ordem para uma ordem
    de classificação crescente */
int ascending(int a, int b)
{
    return b < a;/* troca se b for menor que a */
}
/* fim da função crescente */

/* incicio da função decrescente */
/* determina se os elemento estão fora de ordem para uma ordem
    de classificação decrescente */
int descending(int a, int b)
{
    return b > a;/* troca se b for maior que a */
}
/* fim da função decrescente */