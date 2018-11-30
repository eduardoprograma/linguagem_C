/*Calcular a soma dos elementos de um array.*/
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 12
main(){
    int a[TAMANHO] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
    int i, total = 0;
    for(i = 0; i <= TAMANHO - 1; i++)
    {
        total += a[i];
    }
    printf("A soma dos elementos do array e %d\n", total);
    system("pause");
    return 0;
}