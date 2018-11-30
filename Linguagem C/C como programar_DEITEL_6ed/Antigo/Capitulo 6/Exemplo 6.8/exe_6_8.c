/*Programa para imprimir histograma*/
#include<stdio.h>
#include<stdlib.h>
#define TAMANHO 10
main(){
    int n[TAMANHO] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int i, j;
    printf("%s%13s%17s\n", "Elemento", "Valor", "Histograma");
    for(i = 0; i <= TAMANHO - 1; i++)
    {
        printf("%5d%14d%9s", i, n[i], "");
        for(j = 1; j <= n[i]; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }
printf("\n");
system("pause");
return 0;
}