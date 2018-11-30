/*Inicializa os elementos do array com os inteiros pares de 2 a 20*/
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10
main(){
    int s[TAMANHO], j;
    for(j = 0; j <= 9; j++)/*Define valores*/
    {
        s[j] = 2 + 2 * j;
    }
    printf("%s%13s\n", "Elemento", "Valor");
    for(j = 0; j <= 9; j++)/*Imprime Valores*/
    {
        printf("%8d%13d\n", j, s[j]);
    }
    system("pause");
    return 0;
}